%{

	#include <string.h>
	#include "canlyse.tab.h"

	int line_count = 0; 
	
	
	#include <stdlib.h>




		

%}


%%

		/* comments in G-LAB! */
			/* multi line */
"/*"((("*"[^/])?)|[^*])*"*/" { printf( "COMMENT: %s\n", yytext );}



			/* single line */

"#".*					{ printf( "COMMENT: %s\n", yytext );}




		/*	reserved keywords */
bool					{ return BOOL;} 
double					{ return DOUBLE;} 
int				    	{ return INT;} 
read					{ return READ;} 
return					{ return RETURN;} 
else					{ return ELSE;} 
struct					{ return STRUCT;} 
string					{ return STRINGTYPE;} 
char					{ return CHAR ;} 
const					{ return CONST;} 
for		    			{ return FOR;} 
functions				{ return FUNCTIONS;} 
main  					{ return MAIN;} 
if	    				{ return IF; } 
programe				{ return PROGRAME ;} 
void					{ return VOID ; } 
type					{ return TYPE;} 
var						{ return VAR;} 
while					{ return WHILE;} 
write					{ return WRITE;} 
to				     	{ return TO;}  
true  					{ return TRUEBOOL;}
false  					{ return FALSEBOOL;}



		/* constants */


			/* decimal */
[0-9]+				{ 
				yylval.integer = atoi(yytext);
				return NUMBER;
}

			/* real(fractional) */
[0-9]+(\.[0-9]+)?	{
						yylval.real = atoi(yytext);
						return REAL;
	 }


			/* single character */
'([^\r^\n^']|\\0)'   {
						yylval.charecter=yytext;
						return CHAR;
						}
			/* strings */ 
\"[^\"]*\" { 
						return CONSTSTRING;

			} 
			

		/* Identifier (variable names) */

[a-zA-Z_][_a-zA-Z0-9]{0,31}	{ 

				yylval.string=(char *)malloc((yyleng+1)*(sizeof(char)));
				strncpy(yylval.string, yytext, yyleng + 1);
				return IDENTIFIER;
	

	
	
   
	 
	 }

[a-zA-Z_][_a-zA-Z0-9]*	{ 
	printf( "ERROR identificateur too long: %s\n", yytext );
	 }


		/* operators */
			/* arithmetic */
\+	{ return OPERATOR_PLUS;}
\-	{ return OPERATOR_MINUS;}
\* 						{ return OPERATOR_MULTIPLICATION;}
\*\*                     { return OPERATOR_POWER;}
\/ 						{ return OPERATOR_DEVISION;}
\%						{ return OPERATOR_MOD;}
\+\+					{ return OPERATOR_INCREMENTATION;}
"--"					{ return OPERATOR_DECREMENTATION;}
				
			/* relational */						
==						{ return OPERATOR_EQUALS; }
\<>						{ return OPERATOR_DEFFRENT; }
\> 						{ return OPERATOR_SUPERIER; }
\< 						{ return OPERATOR_INFERIER; }
\>=						{ return OPERATOR_SUPERIEROREQUALS; }
\<=						{ return OPERATOR_INFERIEROREQUALS; }
			/* logical */						
&&						{ return OPERATOR_AND; }
\|\|					{ return OPERATOR_OR; }
!						{ return OPERATOR_NOT; }



			/* punctuators */
\(						{ return PUNCTUATOR_OPEN_PARENTHESIS; }
\)						{ return PUNCTUATOR_CLOSE_PARENTHESIS; }
\{						{ return PUNCTUATOR_OPEN_CURLY; }
\}						{ return PUNCTUATOR_CLOSE_CURLY; }
\[						{ return PUNCTUATOR_OPEN_BRACKET; }
\]						{ return PUNCTUATOR_CLOSE_BRACKET; }
,						{ return PUNCTUATOR_COMMA; }
:						{ return PUNCTUATOR_COLON; }
;						{ return PUNCTUATOR_SEMICOLON; }
=						{ return PUNCTUATOR_ASSIGN; }


		/* skip new lines and blank spaces */
[ \t]                   { /* printf( "BLANK: %s\n", yytext );*/}
[\n]					{ }
		/* everything not defined before is caught here, considered an error */
.						{ printf( "ERROR : not recognized Word  : %s\n", yytext );}	

%%



int yywrap(){
    return 1;
}







