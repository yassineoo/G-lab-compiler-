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
  #define _OPEN_SYS_ITOA_EXT

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














%}



%union {
  int integer;
  double real;
  char charecter ;
  char *string;
  int boolean;
}



%token  <integer>NUMBER    <real>REAL <charecter>CHAR  <string>CONSTSTRING <string>IDENTIFIER  

%token  PARENTHESE_GAUCHE PARENTHESE_DROITE

%type  <integer> IntExpression
%type  <integer> IntFact2
%type  <integer> IntTerm
%type  <integer> IntFact


%type  <real> Expression
%type  <real> Fact2
%type  <real> Term
%type  <real> Fact

%type  <integer> LogicExpression
%type  <integer> LogicExpression1
%type  <integer> LogicExpression2
%type  <integer> LogicExpression3




%token  BOOL DOUBLE INT RETURN ELSE STRUCT STRINGTYPE  CHARTYPE  CONST  READ 
%token  <string>TRUEBOOL <string>FALSEBOOL 
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
main_struct : MAIN Action_main;
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






inst_var : INT declaration_entier PUNCTUATOR_SEMICOLON {printf("Déclaration d'entiers\n");}

| CHAR declaration_char PUNCTUATOR_SEMICOLON {printf("Déclaration de caractères\n");}

| DOUBLE declaration_real PUNCTUATOR_SEMICOLON {printf("Déclaration de réels\n");}

| STRINGTYPE declaration_string PUNCTUATOR_SEMICOLON {printf("Déclaration de strings\n");}


| BOOL declaration_bool PUNCTUATOR_SEMICOLON {printf("Déclaration de booléens\n");}

| CONST declaration_const PUNCTUATOR_SEMICOLON {printf("Déclaration de constantes\n");}


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
| declaration_entier PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN IntExpression
{   if (recherche($3) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
     sprintf(str,"%d",$5);
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
| IDENTIFIER PUNCTUATOR_ASSIGN IntExpression {

   if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str1[20]; 
     sprintf(str1,"%d",$3);
    ajouter($1,0,1,str1,0);
    affiche_dico();
  }
}


// Ajouter l'expression comme membre droit ex: 8*9 ou a+b
// | declaration_entier PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN Expression
// | IDENTIFIER PUNCTUATOR_ASSIGN Expression
;
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
    char  str[20]; 
     sprintf(str,"%d",$5);
    ajouter($3,0,2,str,0);
    
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
    char  str[20]; 
     sprintf(str,"%d",$3);
    ajouter($1,0,2,str,0);
    
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
    char  str[20]; 
     sprintf(str,"%d",$5);
    ajouter($3,0,4,str,0);
    
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
    char  str[20]; 
     sprintf(str,"%d",$3);
    ajouter($1,0,4,str,0);
    
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
boolvalues : TRUEBOOL {strcpy($$, "true")} | FALSEBOOL  {strcpy($$, "false")} ;
declaration_bool : declaration_bool PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN boolvalues
{   
  if (recherche($3) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
    sprintf(str,"%d",$5);
    ajouter($3,0,5,str,0)
    
    affiche_dico();
  }
}
| declaration_bool PUNCTUATOR_COMMA IDENTIFIER 
{   
  if (recherche($3) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
    sprintf(str,"%d",$3);
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
    char  str[20]; 
    sprintf(str,"%d",$3); 
    ajouter($1,0,5,str,0);
    
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
    char  str[20]; 
    sprintf(str,"%d",$5);
    ajouter($3,0,5,"null",0);
    
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
    char  str[20]; 
    sprintf(str,"%d",$3);
    ajouter($1,0,5,str,0);
    
    affiche_dico();
  }
}
;
declaration_const : 
 declaration_const PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN LogicExpression 
 {   
  if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
    sprintf(str,"%d",$5);
    ajouter($3,0,5,str,0);
    
    affiche_dico();
  }
}
| declaration_const PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN Expression
{   
  if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
    sprintf(str,"%d",$5);
    ajouter($3,0,4,"null",0);
    
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
    char  str[20]; 
    sprintf(str,"%d",$3);
    ajouter($1,0,4,"null",0);
    
    affiche_dico();
  }
}
| IDENTIFIER PUNCTUATOR_ASSIGN IntExpression
{   
  if (recherche($1) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
    sprintf(str,"%d",$3);
    ajouter($1,0,1,"null",0);
    
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
    char  str[20]; 
    sprintf(str,"%d",$3);
    ajouter($1,0,5,"null",0);
    
    affiche_dico();
  }
}
;
//Structures utilisés dans les tableaux
declaration_tabint : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabint PUNCTUATOR_CLOSE_BRACKET | IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
;
declaration_tabreal : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabreal PUNCTUATOR_CLOSE_BRACKET | IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
;
declaration_tabstring : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabstring PUNCTUATOR_CLOSE_BRACKET | IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET 
;
declaration_tabchar : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabchar PUNCTUATOR_CLOSE_BRACKET | IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
;
declaration_tabbool : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabbool PUNCTUATOR_CLOSE_BRACKET | IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
;
element_tabint : element_tabint PUNCTUATOR_COMMA NUMBER
| element_tabint PUNCTUATOR_COMMA IDENTIFIER
| NUMBER
;
element_tabreal : element_tabreal PUNCTUATOR_COMMA REAL
| element_tabreal PUNCTUATOR_COMMA IDENTIFIER
| REAL
;
element_tabstring : element_tabstring PUNCTUATOR_COMMA CONSTSTRING
| element_tabstring PUNCTUATOR_COMMA IDENTIFIER
| CONSTSTRING
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
return_statement_int :  RETURN IntExpression PUNCTUATOR_SEMICOLON;
return_statement_double :  RETURN Expression PUNCTUATOR_SEMICOLON;
return_statement_string : RETURN CONSTSTRING PUNCTUATOR_SEMICOLON ;
return_statement_char : RETURN CHAR PUNCTUATOR_SEMICOLON ;
//-------------------------------ACTION-------------------------------------
// Ation is a block or a single Instruction 
Action : PUNCTUATOR_OPEN_CURLY  instList   PUNCTUATOR_CLOSE_CURLY | inst ;
FORDecalartion :  IDENTIFIER PUNCTUATOR_ASSIGN NUMBER TO NUMBER {printf ("\nfooor devalartion");}
;
instList : instList   inst 
| inst  
;
inst :
 IDENTIFIER PUNCTUATOR_ASSIGN Expression PUNCTUATOR_SEMICOLON  { 
   
   printf("Assign %f \n " , $3);


  if (recherche($1) ==NULL) {
    printf (" variable non decalrie");
  }
  else { 
    desc_identif* var  =  recherche($1) ;
    if (var->type == 2){

         char  str[20]; 
     sprintf(str,"%f",$3);

     modifier($1,0,1,str,0);

     ajouter_quadruplet(":=" , $1 , "",str);
       
     afficher_tbq();    
     affiche_dico();
      
    }
    else printf("\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (type  conflict :!\n",line_count);
 
  }



    }
|IDENTIFIER PUNCTUATOR_ASSIGN IntExpression PUNCTUATOR_SEMICOLON 
{ 
   
   printf("Assign %d \n " , $3);


  if (recherche($1) ==NULL) {
    printf (" variable non decalrie");
  }
  else { 
    desc_identif* var  =  recherche($1) ;
    if (var->type == 1){

         char  str[20]; 
     sprintf(str,"%d",$3);
    modifier($1,0,1,str,0);


    
     ajouter_quadruplet(":=" , $1 , "",str);
       
     afficher_tbq();    
     affiche_dico();
      
    }
    else printf("\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (type  conflict :!\n",line_count);
 
  }



    }

| IDENTIFIER OPERATOR_INCREMENTATION PUNCTUATOR_SEMICOLON  { printf("Inc\n "); }
| IDENTIFIER OPERATOR_DECREMENTATION PUNCTUATOR_SEMICOLON  { printf("Dec\n "); }
| READ PUNCTUATOR_OPEN_PARENTHESIS IDENTIFIER PUNCTUATOR_CLOSE_PARENTHESIS PUNCTUATOR_SEMICOLON  { printf("READ \n"); }
| WRITE PUNCTUATOR_OPEN_PARENTHESIS ParmetersList PUNCTUATOR_CLOSE_PARENTHESIS PUNCTUATOR_SEMICOLON  {printf("WRITE \n"); }
| IF PUNCTUATOR_OPEN_PARENTHESIS LogicExpression   PUNCTUATOR_CLOSE_PARENTHESIS Action    { printf("IF \n"); }
| IF PUNCTUATOR_OPEN_PARENTHESIS LogicExpression PUNCTUATOR_CLOSE_PARENTHESIS Action  ELSE Action {printf("IF ELSE \n");}
| WHILE PUNCTUATOR_OPEN_PARENTHESIS LogicExpression PUNCTUATOR_CLOSE_PARENTHESIS  Action        { printf("WHILE \n") ;}
| FOR PUNCTUATOR_OPEN_PARENTHESIS FORDecalartion PUNCTUATOR_CLOSE_PARENTHESIS Action { printf("FOR\n");}
| return_statement {printf("Return\n");}
;
// there is a conflit here in if else but in default (reduice ) is working as we want
// ParmetersList   ex :  (x,2,3,"djdj") 
ParmetersList: ParmetersList PUNCTUATOR_COMMA Parmeter  | Parmeter ;
Parmeter  : NUMBER | CONSTSTRING | REAL | CHAR | IDENTIFIER |
;
Expression:
   
  Expression OPERATOR_PLUS Term {$$=$1+$3; }
  |Expression OPERATOR_MINUS Term { $$=$1-$3; }
  | Term 
Term: 
  Term OPERATOR_MULTIPLICATION Fact  {$$=$1*$3; }
  |Term OPERATOR_DEVISION Fact  { $$= $1/$3; }
  | Fact
Fact : 
  Fact OPERATOR_POWER Fact2 { $$=pow($1,$3); }
  | Fact2
Fact2 : 
   REAL      { $$=$1; } 
  |PUNCTUATOR_OPEN_PARENTHESIS Expression PUNCTUATOR_CLOSE_PARENTHESIS  { $$=$2; }
  ;  
IntExpression:
   
  IntExpression OPERATOR_PLUS IntTerm {$$=$1+$3; }
  |IntExpression OPERATOR_MINUS IntTerm { $$=$1-$3; }
  | IntTerm 
IntTerm: 
  IntTerm OPERATOR_MULTIPLICATION IntFact  {$$=$1*$3; }
  |IntTerm OPERATOR_DEVISION IntFact  { $$=(int) $1/$3; }
  | IntFact
IntFact : 
  IntFact OPERATOR_POWER IntFact2 { $$=pow($1,$3); }
  |IntFact OPERATOR_MOD IntFact2 { $$=$1%$3; }
  | IntFact2
IntFact2 : 
   NUMBER      { $$=$1; }  
  |PUNCTUATOR_OPEN_PARENTHESIS IntExpression PUNCTUATOR_CLOSE_PARENTHESIS  { $$=$2; }
  ;  
LogicExpression :
   LogicExpression1  {
     $$ = $1; 
   printf(" the resuluts is %d ",$$ );} | OPERATOR_NOT LogicExpression1 {$$ = 1-$2; 
    printf(" the resuluts is ------------------ %d ",$$ );}
;
LogicExpression1  :
    LogicExpression1 OPERATOR_AND LogicExpression2 {  if (($1==1) && ($3==1)) {$$=1;} else $$=0;   }
  | LogicExpression1 OPERATOR_OR LogicExpression2 {  if (($1==0) && ($3==0)) {$$=0;} else $$=1 ;}
  | LogicExpression2 { $$ = $1;  }
;
LogicExpression2 : 
  LogicExpression3  {$$ = $1;} | PUNCTUATOR_OPEN_PARENTHESIS LogicExpression PUNCTUATOR_CLOSE_PARENTHESIS {$$ = $2;} 
;
LogicExpression3 :
   CHAR OPERATOR_EQUALS  CHAR { if ($1 == $3 ) $$ = 1; else $$ = 0 ;}
  | CONSTSTRING  OPERATOR_EQUALS  CONSTSTRING { if ($1 == $3 ) $$ = 1; else $$ = 0 ;}
  | Expression OPERATOR_EQUALS  Expression { if ($1 == $3 ) $$ = 1; else $$ = 0 ;}
  | IntExpression OPERATOR_EQUALS  IntExpression { if ($1 == $3 ) $$ = 1; else $$ = 0 ;}
  
  | CHAR OPERATOR_DEFFRENT  CHAR {if ($1 != $3 ) $$ = 1; else $$ = 0 ;}
  | CONSTSTRING OPERATOR_DEFFRENT  CONSTSTRING {if ($1 != $3 ) $$ = 1; else $$ = 0 ;}
  | Expression OPERATOR_DEFFRENT Expression {if ($1 != $3 ) $$ = 1; else $$ = 0 ;}
  | IntExpression OPERATOR_DEFFRENT  IntExpression {if ($1 != $3 ) $$ = 1; else $$ = 0 ;}
  
  | Expression OPERATOR_INFERIER Expression {if ($1 < $3 ) $$ = 1; else $$ = 0 ;}
  | Expression OPERATOR_INFERIEROREQUALS Expression {if ($1 <= $3 ) $$ = 1; else $$ = 0 ;}
  | Expression OPERATOR_SUPERIER Expression {if ($1 > $3 ) $$ = 1; else $$ = 0 ;}
  | Expression OPERATOR_SUPERIEROREQUALS Expression {if ($1 >= $3 ) $$ = 1;  else $$ = 0 ;}
  | IntExpression OPERATOR_INFERIER IntExpression {if ($1 < $3 ) $$ = 1; else $$ = 0 ;}
  | IntExpression OPERATOR_INFERIEROREQUALS IntExpression {if ($1 <= $3 ) $$ = 1; else $$ = 0 ;}
  | IntExpression OPERATOR_SUPERIER IntExpression {if ($1 > $3 ) $$ = 1; else $$ = 0 ;}
  | IntExpression OPERATOR_SUPERIEROREQUALS IntExpression {if ($1 >= $3 ) $$ = 1;  else $$ = 0 ;}
  
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
  	printf("(%s,%s,%s,%s)\n",tbq[i].premier,tbq[i].deuxieme,tbq[i].troisieme,tbq[i].quatrieme);
 }
 void afficher_tbq(){
 	int i;
 	printf("Les quadruplets : \n");
 	for(i=0;i<index_tbq;i++){
 		afficher_quadruplet(i);
 	}
 }
