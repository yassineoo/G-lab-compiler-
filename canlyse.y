/********************************Computation expressions: syntax analysis*****************************/
/*
First part
----------
-%token permet de déclarer les terminaux sans classement.
-%left et %right servent à définir l'associativité et la priorité des opérateurs.
exemple: 
          1+2+3 is considered as (1+2)+3
          aˆbˆc is considered as aˆ(bˆc)
Second part
-----------
-$1 fait référence au premier terminal de la production. $2 au second, $3 au troisième,...etc
-$$ référence à la production courante
-%prec indique la priortié de NEG.
Third part
----------
-Appel de la fonction  yyparse()
*/

%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int yylex();
extern int line_count;
int yyerror(const char *s);






//Définition d'une entrée dans la tables des symboles

typedef struct desc_identif desc_identif;
struct  desc_identif {
char* identif;
	int classe; // -  or glob or arg or loc
	int type;  // int ... || fun || struct || table ||
	char* value; 
	int complement; /* taille des tableaux, nb de param des fct */
	desc_identif* next;
	};
   
        //définition de la table des symboles : listes chainées des entrées
  typedef struct table_des_symboles table_des_symboles;
  struct table_des_symboles{
	desc_identif* root; //1er entrée
	desc_identif* tail; //derniere entrée
	int current_size; //taille de la table
   };

   //variable globale de la table des symboles

   table_des_symboles* tbs;

   //entetes des fonction pour la manipulation de la table des symboles
   
  	void init(); //initialise la table 
	desc_identif* recherche(char *identif); //retourn l'adresse de lentrée dans la table
	void ajouter(char *identif, int classe, int type,char* value, int complement); //ajoute une entrée en fin de table
	int modifier(char *identif, int classe, int type,char* value, int complement); //modifie un entrée 
	void affiche_dico(void); //affiche toute les entrées
	

// ifpile  --------------------------------------------


#define size 10
struct pile
{
    int tab[size];
    int top;
};
typedef struct pile PILE;
PILE ifp;
void push(int item); 
int pop() ;
void afficher();

//----------------------------------------------------





// Table des Quadruplets
  typedef struct Quadruplet Quadruplet;
  struct Quadruplet{
	char premier[20];
	char deuxieme[20];
	char troisieme[20];
	char quatrieme[20];
  };
  
  Quadruplet tbq[200];
  int index_tbq = 0 ;
  
  // Fonctions
  void ajouter_quadruplet(char* p1, char* p2, char* p3, char* p4); 
  void afficher_quadruplet(int i);
  void afficher_tbq();
  void modifier_quadruplet(int pos, char* p1, char* p2, char* p3, char* p4);




  	
  int suite;
  int LWhile;

  int fin;
  int Sif;







%}



%union {
  int integer;
  double real;
  char charecter ;
  char* string;
  
}



%token  <integer>NUMBER    <real>REAL <charecter>CHAR  <string>CONSTSTRING <string>IDENTIFIER  

%token  PARENTHESE_GAUCHE PARENTHESE_DROITE



%type  <string> Expression
%type  <string> Fact2
%type  <string> Term
%type  <string> Fact

%type  <string> LogicExpression
%type  <string> LogicExpression1
%type  <string> LogicExpression2
%type  <string> LogicExpression3
%type <string> boolvalues



%token  BOOL DOUBLE INT RETURN ELSE STRUCT STRINGTYPE  CHARTYPE  CONST  READ 
%token  <integer>TRUEBOOL <integer>FALSEBOOL 
%token  TYPE VAR WHILE WRITE TO FOR FUNCTIONS MAIN IF  PROGRAME VOID 
%token  OPERATOR_PLUS OPERATOR_MINUS OPERATOR_MULTIPLICATION  OPERATOR_DEVISION	 OPERATOR_POWER OPERATOR_MOD	 OPERATOR_INCREMENTATION	 OPERATOR_DECREMENTATION



/* relational */	 
%token  OPERATOR_EQUALS  OPERATOR_DEFFRENT  OPERATOR_SUPERIER  OPERATOR_INFERIER  OPERATOR_SUPERIEROREQUALS  OPERATOR_INFERIEROREQUALS 

%token OPERATOR_AND OPERATOR_OR OPERATOR_NOT

%token  PUNCTUATOR_OPEN_PARENTHESIS PUNCTUATOR_CLOSE_PARENTHESIS PUNCTUATOR_OPEN_CURLY PUNCTUATOR_CLOSE_CURLY PUNCTUATOR_OPEN_BRACKET
%token PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_COMMA PUNCTUATOR_COLON PUNCTUATOR_SEMICOLON PUNCTUATOR_ASSIGN





 



%left OPERATOR_PLUS OPERATOR_MINUS 
%left OPERATOR_AND OPERATOR_OR 
%left OPERATOR_MOD OPERATOR_MULTIPLICATION  OPERATOR_DEVISION 

%right PUNCTUATOR_ASSIGN



%start Programe
%%

Programe: PROGRAME IDENTIFIER PUNCTUATOR_SEMICOLON main_struct   {printf("\n---------- Programme bien structuré : main ----------\n");}
| PROGRAME IDENTIFIER PUNCTUATOR_SEMICOLON type_struct var_struct functions_struct main_struct {printf("\n---------- Programme bien structuré : type-var-functions-main ----------\n");}
| PROGRAME IDENTIFIER PUNCTUATOR_SEMICOLON var_struct functions_struct main_struct {printf("\n---------- Programme bien structuré : var-functions-main ----------\n");}
| PROGRAME IDENTIFIER PUNCTUATOR_SEMICOLON functions_struct main_struct {printf("\n---------- Programme bien structuré : functions-main ----------\n");}
| PROGRAME IDENTIFIER PUNCTUATOR_SEMICOLON type_struct var_struct main_struct {printf("\n---------- Programme bien structuré : type-var-main ----------\n");}
| PROGRAME IDENTIFIER PUNCTUATOR_SEMICOLON var_struct main_struct {printf("\n---------- Programme bien structuré : var-main ----------\n");}
;

//------------------------------- MAIN ----------------------------------------
main_struct : MAIN Action_main  {ajouter_quadruplet("END","","","");}
Action_main : PUNCTUATOR_OPEN_CURLY  instList  PUNCTUATOR_CLOSE_CURLY | inst ;
return_statement : return_statement_int|
return_statement_double |
return_statement_string |
return_statement_char
;
//------------------------------- TYPE ----------------------------------------
type_struct : TYPE Action_type;
Action_type : PUNCTUATOR_OPEN_CURLY  instList_type  PUNCTUATOR_CLOSE_CURLY | inst_type ;
;
instList_type : instList_type inst_type
| inst_type 
;

inst_type : STRUCT IDENTIFIER PUNCTUATOR_OPEN_CURLY instList_var PUNCTUATOR_CLOSE_CURLY PUNCTUATOR_SEMICOLON {printf("Structure définie\n\n");}
;

//------------------------------- VAR ----------------------------------------
var_struct : VAR Action_var;
Action_var : PUNCTUATOR_OPEN_CURLY  instList_var  PUNCTUATOR_CLOSE_CURLY | inst_var ;
instList_var : instList_var inst_var 
| inst_var
;






inst_var : INT declaration_entier PUNCTUATOR_SEMICOLON 

| CHAR declaration_char PUNCTUATOR_SEMICOLON 

| DOUBLE declaration_real PUNCTUATOR_SEMICOLON 

| STRINGTYPE declaration_string PUNCTUATOR_SEMICOLON 


| BOOL declaration_bool PUNCTUATOR_SEMICOLON 

| CONST declaration_const PUNCTUATOR_SEMICOLON 


//Tableaux
| INT declaration_tabint PUNCTUATOR_SEMICOLON {printf("Déclaration de tableau d'entiers\n");}

| DOUBLE declaration_tabreal PUNCTUATOR_SEMICOLON {printf("Déclaration de tableau de réels\n");}

| STRINGTYPE declaration_tabstring PUNCTUATOR_SEMICOLON {printf("Déclaration de tableau de strings\n");}

| CHAR declaration_tabchar PUNCTUATOR_SEMICOLON {printf("Déclaration de tableau de caractères\n");}

| BOOL declaration_tabbool PUNCTUATOR_SEMICOLON {printf("Déclaration de tableau de booléens\n");}
;





;

declaration_entier :
 declaration_entier PUNCTUATOR_COMMA IDENTIFIER 
 {
   if (recherche($3) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($3,0,1,"null",0);

    printf ("  ajout avec secuus ");
    affiche_dico();

  }
 }
| declaration_entier PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN Expression
{   if (recherche($3) !=NULL) {
    printf (" variable deja declarie");
    
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
     sprintf(str,"%s",$5);
    ajouter($3,0,1,str,0);
    
    affiche_dico();
  }
}
| IDENTIFIER {
  if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($1,0,1,"null",0);
    affiche_dico();
  }
}
| IDENTIFIER PUNCTUATOR_ASSIGN Expression {

   if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    printf (" expression ");

    char  str1[20]; 
     sprintf(str1,"%s",$3);
     ajouter($1,0,1,str1,0);
     affiche_dico();

  }
}



declaration_char : 
declaration_char PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN CHAR
{   
  if (recherche($3) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
     sprintf(str,"%d",$5);
    ajouter($3,0,3,str,0);
    
    affiche_dico();
  }
}
| declaration_char PUNCTUATOR_COMMA IDENTIFIER 
{
   if (recherche($3) !=NULL) {
    printf (" variable deja declaré");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($3,0,3,"null",0);

    printf ("  ajout avec secuus ");
    affiche_dico();
  }
 } 
| IDENTIFIER PUNCTUATOR_ASSIGN CHAR 
{   
  if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
     sprintf(str,"%d",$3);
    ajouter($1,0,3,str,0);
    
    affiche_dico();
  }
}
| IDENTIFIER 
{
   if (recherche($1) !=NULL) {
    printf (" variable deja declaré");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($1,0,3,"null",0);

    printf ("  ajout avec secuus ");
    affiche_dico();
  }
 } 
;
declaration_real : 
 declaration_real PUNCTUATOR_COMMA IDENTIFIER 
 {
   if (recherche($3) !=NULL) {
    printf (" variable deja declaré");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($3,0,2,"null",0);

    printf ("  ajout avec secuus ");
    affiche_dico();
  }
 } 
| declaration_real PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN Expression
{   
  if (recherche($3) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($3,0,2,$5,0);
    
    affiche_dico();
  }
}
| IDENTIFIER 
{
   if (recherche($1) !=NULL) {
    printf (" variable deja declaré");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($1,0,2,"null",0);

    printf ("  ajout avec secuus ");
    affiche_dico();
  }
 }
| IDENTIFIER PUNCTUATOR_ASSIGN Expression
{   
  if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($1,0,2,$3,0);    
    affiche_dico();
  }
}
;
declaration_string :
  declaration_string PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN CONSTSTRING  
  {   
  if (recherche($3) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($3,0,4,$5,0);
    
    affiche_dico();
  }
}
| declaration_string PUNCTUATOR_COMMA IDENTIFIER 
{   
  if (recherche($3) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($3,0,4,"null",0);
    
    affiche_dico();
  }
}
| IDENTIFIER PUNCTUATOR_ASSIGN CONSTSTRING
{   
  if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($1,0,4,$3,0);
    
    affiche_dico();
  }
}
| IDENTIFIER 
{   
  if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($1,0,4,"null",0);
    
    affiche_dico();
  }
}
;
boolvalues : TRUEBOOL {
      $$ = strdup("1");
  }
   | FALSEBOOL {
      $$ = strdup("0");
  } ;
declaration_bool : 
 declaration_bool PUNCTUATOR_COMMA IDENTIFIER 
{   
  if (recherche($3) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($3,0,5,"null",0);
    affiche_dico();
  }
}
| IDENTIFIER PUNCTUATOR_ASSIGN boolvalues 
{   
  if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else {
    ajouter($1,0,5,$3,0);
    
    affiche_dico();
  }
}
| IDENTIFIER
{   
  if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($1,0,5,"null",0);
    
    affiche_dico();
  }
} 
| declaration_bool PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN LogicExpression
{   
  if (recherche($3) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter($3,0,5,"null",0);
    ajouter_quadruplet(":=",$3,$5,"");
    affiche_dico();
  }
}
| IDENTIFIER PUNCTUATOR_ASSIGN LogicExpression
{   
  if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    printf (" LogicExpression");

    ajouter($1,0,5,"null",0);
    ajouter_quadruplet(":=",$1,$3,"");
    affiche_dico();
  }
}
;
declaration_const : 
 declaration_const PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN LogicExpression 
| declaration_const PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN Expression
| IDENTIFIER PUNCTUATOR_ASSIGN Expression
| IDENTIFIER PUNCTUATOR_ASSIGN LogicExpression
;
//Structures utilisés dans les tableaux
declaration_tabint : IDENTIFIER PUNCTUATOR_OPEN_BRACKET Expression PUNCTUATOR_CLOSE_BRACKET {
     ajouter($1,0,7,$1,1);
     ajouter_quadruplet("BOUNDS","0" ,$3,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
     //affiche_dico();
}
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET {
     ajouter($1,0,7,$1,1);
     char str[20];
      sprintf(str,"%d",$3);
     ajouter_quadruplet("BOUNDS","0" ,str,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
     //affiche_dico();
}
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabint PUNCTUATOR_CLOSE_BRACKET 
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET Expression PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_OPEN_BRACKET Expression PUNCTUATOR_CLOSE_BRACKET
{
     ajouter($1,0,7,$1,1);
     char str[20];
      sprintf(str,"%d",$3);
     ajouter_quadruplet("BOUNDS","0" ,$3,"");
     ajouter_quadruplet("BOUNDS","0" ,$6,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
     //affiche_dico();
}
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
{
     ajouter($1,0,7,$1,2);
     char str3[20];
     char str6[20];
      sprintf(str3,"%d",$3);
      sprintf(str6,"%d",$6);
     ajouter_quadruplet("BOUNDS","0" ,str3,"");
     ajouter_quadruplet("BOUNDS","0" ,str6,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
     //affiche_dico();
}
;
declaration_tabreal : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
{
     ajouter($1,0,8,$1,1);
     ajouter_quadruplet("BOUNDS","0" ,$3,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
}
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabreal PUNCTUATOR_CLOSE_BRACKET |
 IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
 {
      ajouter($1,0,8,$1,2);
     char str3[20];
     char str6[20];
      sprintf(str3,"%d",$3);
      sprintf(str6,"%d",$6);
     ajouter_quadruplet("BOUNDS","0" ,str3,"");
     ajouter_quadruplet("BOUNDS","0" ,str6,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
     //affiche_dico();
}
;
declaration_tabstring : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
{     ajouter($1,0,9,$1,1);
     ajouter_quadruplet("BOUNDS","0" ,$3,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
}
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET 
 {
      ajouter($1,0,9,$1,2);
     char str3[20];
     char str6[20];
      sprintf(str3,"%d",$3);
      sprintf(str6,"%d",$6);
     ajouter_quadruplet("BOUNDS","0" ,str3,"");
     ajouter_quadruplet("BOUNDS","0" ,str6,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
     //affiche_dico();
}
;
declaration_tabchar : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET 
{     ajouter($1,0,10,$1,1);
     ajouter_quadruplet("BOUNDS","0" ,$3,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
}
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabchar PUNCTUATOR_CLOSE_BRACKET 
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
 {
      ajouter($1,0,10,$1,2);
     char str3[20];
     char str6[20];
      sprintf(str3,"%d",$3);
      sprintf(str6,"%d",$6);
     ajouter_quadruplet("BOUNDS","0" ,str3,"");
     ajouter_quadruplet("BOUNDS","0" ,str6,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
     //affiche_dico();
}
;
declaration_tabbool : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET 
{
     ajouter($1,0,11,$1,1);
     ajouter_quadruplet("BOUNDS","0" ,$3,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
}
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabbool PUNCTUATOR_CLOSE_BRACKET 
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET 
{
   {
      ajouter($1,0,11,$1,2);
     char str3[20];
     char str6[20];
      sprintf(str3,"%d",$3);
      sprintf(str6,"%d",$6);
     ajouter_quadruplet("BOUNDS","0" ,str3,"");
     ajouter_quadruplet("BOUNDS","0" ,str6,"");
     ajouter_quadruplet("ADEC", $1 ,"","");
       
     //affiche_dico();
}
}
;
element_tabint : element_tabint PUNCTUATOR_COMMA NUMBER
| element_tabint PUNCTUATOR_COMMA IDENTIFIER
| NUMBER
;
element_tabreal : element_tabreal PUNCTUATOR_COMMA REAL
| element_tabreal PUNCTUATOR_COMMA IDENTIFIER
| REAL
;

element_tabchar : element_tabchar PUNCTUATOR_COMMA CHAR
| element_tabchar PUNCTUATOR_COMMA IDENTIFIER
| CHAR
;
element_tabbool : element_tabbool PUNCTUATOR_COMMA boolvalues
| element_tabbool PUNCTUATOR_COMMA IDENTIFIER
| boolvalues
;
//------------------------------- FUNCTIONS ----------------------------------------
functions_struct : {printf("\n---------- Functions ----------\n\n");} FUNCTIONS Action_function;
Action_function : PUNCTUATOR_OPEN_CURLY  List_function  PUNCTUATOR_CLOSE_CURLY | function ;
;
List_function : List_function function
| function
;
function : {printf("Fonction int\n");} INT IDENTIFIER PUNCTUATOR_OPEN_PARENTHESIS ParmetersList PUNCTUATOR_CLOSE_PARENTHESIS PUNCTUATOR_OPEN_CURLY instList_function return_statement_int PUNCTUATOR_CLOSE_CURLY  {printf("\n");}
| {printf("Fonction double\n");} DOUBLE IDENTIFIER PUNCTUATOR_OPEN_PARENTHESIS ParmetersList PUNCTUATOR_CLOSE_PARENTHESIS PUNCTUATOR_OPEN_CURLY instList_function return_statement_double PUNCTUATOR_CLOSE_CURLY  {printf("\n");}
| {printf("Fonction string\n");} STRINGTYPE IDENTIFIER PUNCTUATOR_OPEN_PARENTHESIS ParmetersList PUNCTUATOR_CLOSE_PARENTHESIS PUNCTUATOR_OPEN_CURLY instList_function return_statement_string PUNCTUATOR_CLOSE_CURLY  {printf("\n");}
| {printf("Fonction char\n");} CHAR IDENTIFIER PUNCTUATOR_OPEN_PARENTHESIS ParmetersList PUNCTUATOR_CLOSE_PARENTHESIS PUNCTUATOR_OPEN_CURLY instList_function return_statement_char PUNCTUATOR_CLOSE_CURLY  {printf("\n");}
| {printf("Fonction void\n");} VOID IDENTIFIER PUNCTUATOR_OPEN_PARENTHESIS ParmetersList PUNCTUATOR_CLOSE_PARENTHESIS PUNCTUATOR_OPEN_CURLY instList_function PUNCTUATOR_CLOSE_CURLY {printf("\n");} 
;
instList_function : instList_function inst_function
| inst_function
;
inst_function : inst | inst_var
;
return_statement_int :  RETURN NUMBER PUNCTUATOR_SEMICOLON;
return_statement_double :  RETURN Expression PUNCTUATOR_SEMICOLON;
return_statement_string : RETURN CONSTSTRING PUNCTUATOR_SEMICOLON ;
return_statement_char : RETURN CHAR PUNCTUATOR_SEMICOLON ;
//-------------------------------ACTION-------------------------------------
// Ation is a block or a single Instruction 
Action : PUNCTUATOR_OPEN_CURLY  instList   PUNCTUATOR_CLOSE_CURLY | inst ;
FORDecalartion :  IDENTIFIER PUNCTUATOR_ASSIGN NUMBER TO Expression {
char str2[20];
sprintf(str2,"%d",$3);
ajouter_quadruplet(":=",$1,str2,"");
ajouter_quadruplet("-",$5,$1,"");
Sif=index_tbq;
ajouter_quadruplet("bz","","","")
;
}
instList : instList   inst 
| inst  
;
inst :
 IDENTIFIER PUNCTUATOR_ASSIGN Expression PUNCTUATOR_SEMICOLON  { 
   
  if (recherche($1) ==NULL) {
    printf (" variable non decalrie");
  }
  else { 
    desc_identif* var  =  recherche($1) ;
    if ((var->type == 2) || (var->type == 1)){
         char  str[20]; 
     sprintf(str,"%s",$3);
     modifier($1,0,1,str,0);
     ajouter_quadruplet(":=" , $1 , "",str);
       
     affiche_dico();
      
    }
    else printf("\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (type  conflict :!\n",line_count);
 
  }
    }
 
|IDENTIFIER PUNCTUATOR_ASSIGN LogicExpression PUNCTUATOR_SEMICOLON  { 
   
  if (recherche($1) ==NULL) {
    printf (" variable non decalrie");
  }
  else { 
    desc_identif* var  =  recherche($1) ;
    if ((var->type == 5)){
        char  str[20]; 
     sprintf(str,"%s",$3);
 
     ajouter_quadruplet(":=" , $1 , "",str);
       
     affiche_dico();
      
    }
    else printf("\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (type  conflict :!\n",line_count);
 
  }
    }
  
| IDENTIFIER OPERATOR_INCREMENTATION PUNCTUATOR_SEMICOLON  { 

   char str[20];
    sprintf(str,"%d",index_tbq);
     ajouter_quadruplet("+" , $1 ,"1",str);
 }
| IDENTIFIER OPERATOR_DECREMENTATION PUNCTUATOR_SEMICOLON  {
    char str[20];
    sprintf(str,"%d",index_tbq);
     ajouter_quadruplet("-" , $1 ,"1",str);
    }
| READ PUNCTUATOR_OPEN_PARENTHESIS IDENTIFIER PUNCTUATOR_CLOSE_PARENTHESIS PUNCTUATOR_SEMICOLON  { printf("READ \n"); }
| WRITE PUNCTUATOR_OPEN_PARENTHESIS ParmetersList PUNCTUATOR_CLOSE_PARENTHESIS PUNCTUATOR_SEMICOLON  {printf("WRITE \n"); }
| IF PUNCTUATOR_OPEN_PARENTHESIS LogicExpression
{

  push(index_tbq);
  afficher();

  //Lif=index_tbq;
  ajouter_quadruplet("bz","","","");
  }
 PUNCTUATOR_CLOSE_PARENTHESIS Action ifSuite
| WHILE PUNCTUATOR_OPEN_PARENTHESIS LogicExpression  PUNCTUATOR_CLOSE_PARENTHESIS {
  LWhile=index_tbq;
  ajouter_quadruplet("bz","","","");}
 Action        { 
  { 
    char str[20];
    sprintf(str,"%d",index_tbq);
    modifier_quadruplet(LWhile,"bz","","",str);
  }

}
| FOR PUNCTUATOR_OPEN_PARENTHESIS FORDecalartion PUNCTUATOR_CLOSE_PARENTHESIS Action { 
char str[20];
sprintf(str,"%d",Sif-2);
ajouter_quadruplet("+",tbq[Sif-2].deuxieme,"1","r");
ajouter_quadruplet(":=","r","",tbq[Sif-2].deuxieme);
ajouter_quadruplet("br","","",str);
char str1[20];
sprintf(str1,"%d",index_tbq);
modifier_quadruplet(Sif,tbq[Sif].premier,tbq[Sif].deuxieme,tbq[Sif].troisieme,str1);
}
| return_statement {printf("Return\n");}
;

ifSuite :  { printf("IF \n");
    char str[20];
    sprintf(str,"%d",index_tbq);
    int lif = pop();
      afficher();
    modifier_quadruplet(lif,"bz","","",str);
  }
  | ELSE 
   {
    int lif = pop();
    push(index_tbq);
      afficher();
    ajouter_quadruplet("br","","","");
    char str[20];
    sprintf(str,"%d",index_tbq);
    modifier_quadruplet(lif,"bz","","",str);

 
 } Action {
    char str[20];
    int lesle = pop();
      afficher();

    sprintf(str,"%d",index_tbq);
    modifier_quadruplet(lesle,"br","","",str);

 }
;
// there is a conflit here in if else but in default (reduice ) is working as we want
// ParmetersList   ex :  (x,2,3,"djdj") 
ParmetersList: ParmetersList PUNCTUATOR_COMMA Parmeter  | Parmeter ;
Parmeter  : NUMBER | CONSTSTRING | REAL | CHAR | IDENTIFIER |
;
Expression:
   
  Expression OPERATOR_PLUS Term {
  	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	$$=strdup(strcat(str,str_index));
    	ajouter_quadruplet("+",$1,$3,$$);
   }
  |Expression OPERATOR_MINUS Term {
     	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	$$=strdup(strcat(str,str_index));
    	ajouter_quadruplet("-",$1,$3,$$);
      }
  | Term {
        $$ = strdup($1);


  }
  ;
Term: 
  Term OPERATOR_MULTIPLICATION Fact  {
    	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	$$=strdup(strcat(str,str_index));
    	ajouter_quadruplet("*",$1,$3,$$);
  
   }
  |Term OPERATOR_DEVISION Fact  { 
	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	$$=strdup(strcat(str,str_index));
    	ajouter_quadruplet("/",$1,$3,$$);
   }
  | Fact {
      $$ = strdup($1);
  }
  ;
Fact : 
  Fact OPERATOR_POWER Fact2 {
      	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	$$=strdup(strcat(str,str_index));
      	ajouter_quadruplet("**",$1,$3,$$);
     }
  | Fact2 {
    
      $$ = strdup($1);
  }
  
    
  
  ;
Fact2 : 
   REAL      {
      char str[50];
      sprintf(str,"%f",$1);
       $$ = strdup(str);
       printf( " \n real is  :%f    in line %d\n ",$1,index_tbq);
      } 
  | NUMBER      {
      char str[50];
      sprintf(str,"%d",$1);

      $$ = strdup(str);
      }
  |PUNCTUATOR_OPEN_PARENTHESIS Expression PUNCTUATOR_CLOSE_PARENTHESIS  {
     $$ = strdup($2);

      }
  | IDENTIFIER {
   
  if (recherche($1) ==NULL) {
    printf (" variable non decalrie");
  }
  else { 
    desc_identif* var  =  recherche($1) ;
    if ((var->type == 2) || (var->type == 1) || var->type == 5){

      $$ = strdup($1);
      
    }
    else printf("\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (type  conflict :!\n",line_count);
 
  }

  } 
  ;  
 
  
LogicExpression :
   LogicExpression1  {
     $$ = strdup($1); 
   printf(" the resuluts is %s ",$$ );
   } | OPERATOR_NOT LogicExpression1 {
          char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet(":=",$2,"",str);
}
;
LogicExpression1  :
    LogicExpression1 OPERATOR_AND LogicExpression2 {  
          char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet(":=",$1,"",str);
    ajouter_quadruplet("b?","","","");
    char str2[20]="r";
  	sprintf(str_index,"%d",index_tbq);
    $$=strdup(strcat(str2,str_index));
    ajouter_quadruplet(":=",$3,"",str2);
       }
  | LogicExpression1 OPERATOR_OR LogicExpression2 {  
    char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet(":=",$1,"",str);
    ajouter_quadruplet("b?","","","");
    char str2[20]="r";
  	sprintf(str_index,"%d",index_tbq);
    $$=strdup(strcat(str2,str_index));
    ajouter_quadruplet(":=",$3,"",str2);
    }
  | LogicExpression2 { $$ = $1; 
   }
;
LogicExpression2 : 
  LogicExpression3  {$$ = $1;} | PUNCTUATOR_OPEN_PARENTHESIS LogicExpression PUNCTUATOR_CLOSE_PARENTHESIS {$$ = $2;} 
;
LogicExpression3 :
   CHAR OPERATOR_EQUALS  CHAR { 
      char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",$1,$3,str);
     }
  | CONSTSTRING  OPERATOR_EQUALS  CONSTSTRING { 
    char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",$1,$3,str);
  }
  | Expression OPERATOR_EQUALS  Expression { 
    char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",$1,$3,str);
    }
  
  | CHAR OPERATOR_DEFFRENT  CHAR {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",$1,$3,str);
  }
  | CONSTSTRING OPERATOR_DEFFRENT  CONSTSTRING {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",$1,$3,str);
  }
  | Expression OPERATOR_DEFFRENT Expression {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",$1,$3,str);
  }
  
  | Expression OPERATOR_INFERIER Expression {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",$1,$3,str);
  }
  | Expression OPERATOR_INFERIEROREQUALS Expression {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",$1,$3,str);
  }
  | Expression OPERATOR_SUPERIER Expression {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",$1,$3,str);
  }
  | Expression OPERATOR_SUPERIEROREQUALS Expression { 
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  $$=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",$1,$3,str);}
  | boolvalues   { $$ =strdup($1);
    
      }

  | IDENTIFIER {
    printf (" boooooooooooooooooooooooolen ------------******************-");
   
  if (recherche($1) ==NULL) {
    printf (" variable non decalrie");
  }
  else { 
    desc_identif* var  =  recherche($1) ;
    if (var->type == 5) {
         char  str[20]; 
     ajouter_quadruplet(":=" , $1 , "",str);
       
     affiche_dico();
      
    }
    else printf("\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (type  conflict :!\n",line_count);
 
  }

  } 
  ;  
  
      ;
  
  
;
%%
/*int yyerror( char const *s) {
  /*fprintf(stderr,"File test.txt | Line: %d %s\n",line_num,s);
   printf("%d %s\n",line,s);
}*/
int yyerror(const char *s) {
  printf("File='test.text' line %d %s\n",line_count,s);
}
int main(void) {
  init();
  yyparse();
  afficher_tbq();
}
void init(){
	tbs=(table_des_symboles*)malloc(sizeof(table_des_symboles));
	tbs->current_size=0;
	tbs->root=NULL;
	tbs->tail=NULL;
}
desc_identif* recherche(char* identif){
	desc_identif* p = tbs->root; 
	while ((p!= NULL)&&(strcmp(p->identif,identif)!=0)){
	p=p->next;
	}
  return p;
}
void ajouter(char *identif, int classe, int type,char * value, int complement){
	desc_identif* t= (desc_identif*)malloc(sizeof(desc_identif));
	t->identif = identif;
	t->classe = classe;
	t->type=type;
	t->value=value;
	t->complement=complement;
	t->next=NULL;
        if (tbs->current_size == 0){
         tbs->root = t;
tbs->tail = t;
	tbs->current_size++;
        }else{
  tbs->tail->next=t;        
	tbs->tail = t;
	tbs->current_size++;
        }
}
int modifier(char *identif, int classe, int type,char * value, int complement){
	desc_identif* p = recherche(identif);
	if(p!=NULL){
		p->classe=classe;
		p->type=type;
		p->value=value;
		p->complement=complement;
	}
}
void affiche_dico() {
	desc_identif* p;
  
    if (p == NULL)
    {
        printf("\n this is a printf NULL \n");
    }
     p = tbs->root;
    while (p != NULL)
    {
        printf("%s |%d |%d | %s |%d" , p->identif ,p->classe , p->type , p->value ,p->complement ) ;
        p=p->next;
    }
    printf ("%i",tbs->current_size);
}
 void ajouter_quadruplet(char* p1, char* p2, char* p3, char* p4){
 	strcpy(tbq[index_tbq].premier,p1);
 	strcpy(tbq[index_tbq].deuxieme,p2);
 	strcpy(tbq[index_tbq].troisieme,p3);
 	strcpy(tbq[index_tbq].quatrieme,p4);
 	index_tbq++;
 }
 void modifier_quadruplet(int pos, char* p1, char* p2, char* p3, char* p4){
 	strcpy(tbq[pos].premier,p1);
 	strcpy(tbq[pos].deuxieme,p2);
 	strcpy(tbq[pos].troisieme,p3);
 	strcpy(tbq[pos].quatrieme,p4);
 }
 void afficher_quadruplet(int i){
  	printf("%d - (%s,%s,%s,%s)\n",i,tbq[i].premier,tbq[i].deuxieme,tbq[i].troisieme,tbq[i].quatrieme);
 }
 void afficher_tbq(){
 	int i;
 	printf("Les quadruplets : \n");
 	for(i=0;i<index_tbq;i++){
 		afficher_quadruplet(i);
 	}
 }








 // ifPile functions   -     ------------------------

void push(int item) {
  if (ifp.top >= size - 1)
    return;
  ifp.top++;
  ifp.tab[ifp.top] = item;
}
int pop() {
  if (ifp.top == -1)
    return 1;
   int item;
   item = ifp.tab[ifp.top];
   ifp.top--;
   return item;
}
void afficher() {
   int i;
   if (ifp.top == -1)
      printf("\nLa pile est vide!");
   else {
      for (i = ifp.top; i >= 0; i--)
         printf("\n%d", ifp.tab[i]);
   }
}

