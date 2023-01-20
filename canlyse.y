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
#include <math.h>

int yylex();
int yyerror(const char *s);
%}



%union {
  int integer;
  double real;
  char charecter ;
  char *string;
  
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
%token  TRUEBOOL FALSEBOOL 
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
| declaration_entier PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN IntExpression
| IDENTIFIER 
| IDENTIFIER PUNCTUATOR_ASSIGN IntExpression
| IDENTIFIER PUNCTUATOR_ASSIGN IDENTIFIER

// Ajouter l'expression comme membre droit ex: 8*9 ou a+b
// | declaration_entier PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN Expression
// | IDENTIFIER PUNCTUATOR_ASSIGN Expression
;

declaration_char : 
declaration_char PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN CHAR  
| declaration_char PUNCTUATOR_COMMA IDENTIFIER 
| IDENTIFIER PUNCTUATOR_ASSIGN CHAR 
| IDENTIFIER PUNCTUATOR_ASSIGN IDENTIFIER
| IDENTIFIER 
;

declaration_real : 
 declaration_real PUNCTUATOR_COMMA IDENTIFIER 
| declaration_real PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN Expression
| IDENTIFIER 
| IDENTIFIER PUNCTUATOR_ASSIGN Expression
| IDENTIFIER PUNCTUATOR_ASSIGN IDENTIFIER

;

declaration_string :
  declaration_string PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN CONSTSTRING  
| declaration_string PUNCTUATOR_COMMA IDENTIFIER 
| IDENTIFIER PUNCTUATOR_ASSIGN CONSTSTRING
| IDENTIFIER PUNCTUATOR_ASSIGN IDENTIFIER
| IDENTIFIER 
;



boolvalues : TRUEBOOL | FALSEBOOL ;
declaration_bool : declaration_bool PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN boolvalues
| declaration_bool PUNCTUATOR_COMMA IDENTIFIER 
| IDENTIFIER PUNCTUATOR_ASSIGN boolvalues 
| IDENTIFIER 
| declaration_bool PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN LogicExpression
| IDENTIFIER PUNCTUATOR_ASSIGN LogicExpression
| IDENTIFIER PUNCTUATOR_ASSIGN IDENTIFIER

;

declaration_const : 
 declaration_const PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN LogicExpression 
| declaration_const PUNCTUATOR_COMMA IDENTIFIER PUNCTUATOR_ASSIGN Expression
| IDENTIFIER PUNCTUATOR_ASSIGN Expression
| IDENTIFIER PUNCTUATOR_ASSIGN LogicExpression
;




//Structures utilisés dans les tableaux

declaration_tabint : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabint PUNCTUATOR_CLOSE_BRACKET
;

declaration_tabreal : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabreal PUNCTUATOR_CLOSE_BRACKET
;

declaration_tabstring : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabstring PUNCTUATOR_CLOSE_BRACKET
;

declaration_tabchar : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabchar PUNCTUATOR_CLOSE_BRACKET
;

declaration_tabbool : IDENTIFIER PUNCTUATOR_OPEN_BRACKET NUMBER PUNCTUATOR_CLOSE_BRACKET
| IDENTIFIER PUNCTUATOR_OPEN_BRACKET PUNCTUATOR_CLOSE_BRACKET PUNCTUATOR_ASSIGN PUNCTUATOR_OPEN_BRACKET element_tabbool PUNCTUATOR_CLOSE_BRACKET
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
 IDENTIFIER PUNCTUATOR_ASSIGN Expression PUNCTUATOR_SEMICOLON  { printf("Assign %f \n " , $3); }
|IDENTIFIER PUNCTUATOR_ASSIGN IntExpression PUNCTUATOR_SEMICOLON  { printf("Assign %d \n " , $3); }
| IDENTIFIER OPERATOR_INCREMENTATION PUNCTUATOR_SEMICOLON  { printf("Inc\n "); }
| IDENTIFIER OPERATOR_DECREMENTATION PUNCTUATOR_SEMICOLON  { printf("Dec\n "); }
| READ PUNCTUATOR_OPEN_PARENTHESIS IDENTIFIER PUNCTUATOR_CLOSE_PARENTHESIS { printf("READ \n"); }
| WRITE PUNCTUATOR_OPEN_PARENTHESIS ParmetersList PUNCTUATOR_CLOSE_PARENTHESIS  {printf("WRITE \n"); }
| IF PUNCTUATOR_OPEN_PARENTHESIS LogicExpression   PUNCTUATOR_CLOSE_PARENTHESIS Action    { printf("IF \n"); }
| IF PUNCTUATOR_OPEN_PARENTHESIS LogicExpression PUNCTUATOR_CLOSE_PARENTHESIS Action  ELSE Action {printf("IF ELSE \n");}
| WHILE PUNCTUATOR_OPEN_PARENTHESIS LogicExpression PUNCTUATOR_CLOSE_PARENTHESIS  Action        { printf("WHILE \n") ;}
| FOR PUNCTUATOR_OPEN_PARENTHESIS FORDecalartion PUNCTUATOR_CLOSE_PARENTHESIS Action { printf("FOR\n");}
| return_statement {printf("Return\n");}

;
// there is a conflit here in if else but in default (reduice ) is working as we want



// ParmetersList   ex :  (x,2,3,"djdj") 

ParmetersList: ParmetersList Parmeter  | Parmeter 
Parmeter  : NUMBER | CONSTSTRING | REAL | CHAR
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


























int yyerror(const char *s) {
  printf("%s\n",s);
}

int main(void) {
  yyparse();
}






























