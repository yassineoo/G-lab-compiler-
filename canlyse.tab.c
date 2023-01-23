/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 20 "canlyse.y" /* yacc.c:339  */


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
	char* afficher_type(int i);
	char* afficher_classe(int i);


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
PILE whilep;
void pushwhile(int item); 
int popwhile() ;
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








#line 178 "canlyse.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "canlyse.tab.h".  */
#ifndef YY_YY_CANLYSE_TAB_H_INCLUDED
# define YY_YY_CANLYSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    REAL = 259,
    CHAR = 260,
    CONSTSTRING = 261,
    IDENTIFIER = 262,
    PARENTHESE_GAUCHE = 263,
    PARENTHESE_DROITE = 264,
    BOOL = 265,
    DOUBLE = 266,
    INT = 267,
    RETURN = 268,
    ELSE = 269,
    STRUCT = 270,
    STRINGTYPE = 271,
    CHARTYPE = 272,
    CONST = 273,
    READ = 274,
    TRUEBOOL = 275,
    FALSEBOOL = 276,
    TYPE = 277,
    VAR = 278,
    WHILE = 279,
    WRITE = 280,
    TO = 281,
    FOR = 282,
    FUNCTIONS = 283,
    MAIN = 284,
    IF = 285,
    PROGRAME = 286,
    VOID = 287,
    OPERATOR_PLUS = 288,
    OPERATOR_MINUS = 289,
    OPERATOR_MULTIPLICATION = 290,
    OPERATOR_DEVISION = 291,
    OPERATOR_POWER = 292,
    OPERATOR_MOD = 293,
    OPERATOR_INCREMENTATION = 294,
    OPERATOR_DECREMENTATION = 295,
    OPERATOR_EQUALS = 296,
    OPERATOR_DEFFRENT = 297,
    OPERATOR_SUPERIER = 298,
    OPERATOR_INFERIER = 299,
    OPERATOR_SUPERIEROREQUALS = 300,
    OPERATOR_INFERIEROREQUALS = 301,
    OPERATOR_AND = 302,
    OPERATOR_OR = 303,
    OPERATOR_NOT = 304,
    PUNCTUATOR_OPEN_PARENTHESIS = 305,
    PUNCTUATOR_CLOSE_PARENTHESIS = 306,
    PUNCTUATOR_OPEN_CURLY = 307,
    PUNCTUATOR_CLOSE_CURLY = 308,
    PUNCTUATOR_OPEN_BRACKET = 309,
    PUNCTUATOR_CLOSE_BRACKET = 310,
    PUNCTUATOR_COMMA = 311,
    PUNCTUATOR_COLON = 312,
    PUNCTUATOR_SEMICOLON = 313,
    PUNCTUATOR_ASSIGN = 314
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 134 "canlyse.y" /* yacc.c:355  */

  int integer;
  double real;
  char charecter ;
  char* string;
  

#line 286 "canlyse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CANLYSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 303 "canlyse.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   481

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  385

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   197,   197,   198,   199,   200,   201,   202,   206,   207,
     207,   208,   209,   210,   211,   214,   215,   215,   217,   218,
     221,   225,   226,   226,   227,   228,   236,   238,   240,   242,
     245,   247,   251,   253,   255,   257,   259,   269,   282,   295,
     304,   324,   337,   348,   361,   374,   385,   396,   408,   420,
     430,   441,   452,   465,   468,   472,   482,   493,   504,   515,
     530,   531,   532,   533,   536,   542,   555,   556,   565,   579,
     588,   589,   603,   611,   625,   633,   634,   648,   657,   658,
     674,   675,   676,   678,   679,   680,   683,   684,   685,   687,
     688,   689,   692,   692,   693,   693,   695,   696,   698,   698,
     699,   699,   700,   700,   701,   701,   702,   702,   704,   705,
     707,   707,   709,   710,   711,   712,   715,   715,   716,   726,
     727,   730,   750,   770,   776,   781,   782,   784,   783,   792,
     792,   804,   814,   817,   824,   823,   844,   844,   845,   845,
     845,   845,   845,   845,   849,   856,   863,   870,   878,   885,
     890,   897,   906,   911,   917,   921,   942,   944,   953,   965,
     977,   981,   981,   984,   995,  1002,  1010,  1023,  1030,  1038,
    1045,  1052,  1059,  1065,  1069
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "REAL", "CHAR", "CONSTSTRING",
  "IDENTIFIER", "PARENTHESE_GAUCHE", "PARENTHESE_DROITE", "BOOL", "DOUBLE",
  "INT", "RETURN", "ELSE", "STRUCT", "STRINGTYPE", "CHARTYPE", "CONST",
  "READ", "TRUEBOOL", "FALSEBOOL", "TYPE", "VAR", "WHILE", "WRITE", "TO",
  "FOR", "FUNCTIONS", "MAIN", "IF", "PROGRAME", "VOID", "OPERATOR_PLUS",
  "OPERATOR_MINUS", "OPERATOR_MULTIPLICATION", "OPERATOR_DEVISION",
  "OPERATOR_POWER", "OPERATOR_MOD", "OPERATOR_INCREMENTATION",
  "OPERATOR_DECREMENTATION", "OPERATOR_EQUALS", "OPERATOR_DEFFRENT",
  "OPERATOR_SUPERIER", "OPERATOR_INFERIER", "OPERATOR_SUPERIEROREQUALS",
  "OPERATOR_INFERIEROREQUALS", "OPERATOR_AND", "OPERATOR_OR",
  "OPERATOR_NOT", "PUNCTUATOR_OPEN_PARENTHESIS",
  "PUNCTUATOR_CLOSE_PARENTHESIS", "PUNCTUATOR_OPEN_CURLY",
  "PUNCTUATOR_CLOSE_CURLY", "PUNCTUATOR_OPEN_BRACKET",
  "PUNCTUATOR_CLOSE_BRACKET", "PUNCTUATOR_COMMA", "PUNCTUATOR_COLON",
  "PUNCTUATOR_SEMICOLON", "PUNCTUATOR_ASSIGN", "$accept", "Programe",
  "main_struct", "Action_main", "return_statement", "type_struct",
  "Action_type", "instList_type", "inst_type", "var_struct", "Action_var",
  "instList_var", "inst_var", "declaration_entier", "declaration_char",
  "declaration_real", "declaration_string", "boolvalues",
  "declaration_bool", "declaration_const", "declaration_tabint",
  "declaration_tabreal", "declaration_tabstring", "declaration_tabchar",
  "declaration_tabbool", "element_tabint", "element_tabreal",
  "element_tabchar", "element_tabbool", "functions_struct", "$@1",
  "Action_function", "List_function", "function", "$@2", "$@3", "$@4",
  "$@5", "$@6", "instList_function", "inst_function",
  "return_statement_int", "return_statement_double",
  "return_statement_string", "return_statement_char", "Action",
  "FORDecalartion", "instList", "inst", "$@7", "$@8", "ifSuite", "$@9",
  "ParmetersList", "Parmeter", "Expression", "Term", "Fact", "Fact2",
  "LogicExpression", "LogicExpression1", "LogicExpression2",
  "LogicExpression3", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -264

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-264)))

#define YYTABLE_NINF -175

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,    17,    30,   -22,  -264,    61,    28,   144,   225,  -264,
      22,    46,    46,    65,    78,   169,  -264,  -264,   197,   201,
     205,   215,   235,   256,   213,  -264,  -264,    82,    66,   216,
     218,   229,   238,   247,   221,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,    46,  -264,    46,  -264,    26,   220,     2,  -264,
     -34,   105,   217,    98,   109,   227,    99,   142,   241,   110,
     163,   285,   119,   179,   309,   310,   198,    23,  -264,   312,
     313,   122,   314,  -264,   315,   316,  -264,   132,   -11,    72,
     331,  -264,   368,   122,   342,   369,   122,   186,  -264,  -264,
      46,  -264,   108,  -264,  -264,   365,   367,   363,   375,   349,
     213,  -264,  -264,     8,   377,   376,  -264,  -264,    11,   122,
     378,  -264,  -264,    12,   132,   379,  -264,  -264,     6,   132,
     380,  -264,  -264,   381,   382,   383,  -264,  -264,   122,   384,
    -264,  -264,  -264,  -264,  -264,  -264,   133,   153,   222,  -264,
    -264,   127,   122,  -264,   269,   334,   257,  -264,  -264,  -264,
    -264,  -264,   117,   132,   132,  -264,   132,   132,   132,   338,
     289,   343,  -264,  -264,  -264,  -264,  -264,   -24,  -264,   336,
     345,  -264,  -264,  -264,  -264,    49,  -264,   386,   390,   391,
     392,   393,    41,   346,   344,  -264,   347,   350,   348,   259,
    -264,   351,   353,   352,   291,   354,   357,   355,   104,   291,
     356,   361,  -264,   358,   289,  -264,   359,   397,   399,   403,
     413,   257,   275,   370,   132,   132,   132,   132,   132,   132,
    -264,  -264,   127,   127,  -264,    72,    72,   331,   331,  -264,
     362,  -264,   364,   342,   420,   234,   373,  -264,  -264,   385,
     387,   388,   389,   394,   371,   372,   374,   422,   395,   396,
     122,   398,   400,   132,   401,   402,   404,   132,   405,   419,
     122,  -264,  -264,  -264,  -264,  -264,   291,   291,   291,   291,
     291,   291,  -264,  -264,  -264,   234,  -264,  -264,   406,   221,
    -264,  -264,   234,   342,   342,   342,   342,   342,  -264,   427,
     426,  -264,   430,   308,  -264,   431,   432,   291,   437,   438,
     132,   291,   439,  -264,   289,  -264,  -264,   132,   190,   429,
     125,   150,   151,   206,   209,   407,  -264,   282,   408,  -264,
     300,   409,  -264,   302,   410,  -264,   304,   111,   411,   291,
    -264,  -264,  -264,   415,   416,   417,   418,   421,  -264,  -264,
     178,  -264,  -264,    75,  -264,  -264,    70,  -264,  -264,   107,
    -264,  -264,   234,   271,   271,   271,   271,   271,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,   271,  -264,
    -264,   271,   271,   271,    93,  -264,   423,   424,   425,   428,
    -264,  -264,  -264,  -264,  -264
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    92,     0,     0,     0,     2,
       0,    92,     0,     0,     0,     0,    15,    17,     0,     0,
       0,     0,     0,     0,     0,    21,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     8,   132,    11,    12,    13,
      14,    10,    92,     7,     0,     5,    98,     0,     0,    19,
      44,     0,     0,    57,     0,     0,    47,     0,     0,    39,
       0,     0,    52,     0,     0,     0,     0,     0,    25,     0,
       0,     0,   153,   152,     0,     0,   155,     0,     0,   146,
     149,   151,     0,     0,   143,     0,     0,     0,   120,     6,
       0,     4,    98,    93,    95,     0,     0,     0,     0,     0,
       0,    16,    18,     0,     0,     0,    27,    35,     0,     0,
       0,    30,    36,     0,     0,     0,    28,    33,     0,     0,
       0,    26,    32,     0,     0,     0,    29,    34,     0,     0,
      31,    22,    24,   123,   124,   153,     0,     0,   155,    53,
      54,     0,     0,   173,     0,     0,   156,   160,   161,   112,
     115,   114,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,   138,   140,   141,   139,   142,     0,   137,     0,
       0,   127,     9,   119,     3,    98,    97,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    42,     0,     0,    56,
      59,    55,     0,     0,    48,    45,   153,     0,     0,    40,
      37,     0,    51,    50,    62,    63,     0,     0,     0,     0,
       0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,     0,     0,   154,   144,   145,   147,   148,   150,
       0,   129,     0,   143,     0,     0,     0,    94,    96,     0,
       0,     0,     0,     0,     0,    74,     0,     0,    77,     0,
       0,    69,     0,     0,    65,     0,    64,     0,    72,     0,
       0,   163,   166,   164,   167,   162,   165,   168,   171,   169,
     172,   170,   158,   159,   125,     0,   126,   136,     0,     0,
     131,   117,     0,   143,   143,   143,   143,   143,    20,     0,
       0,    41,     0,     0,    58,     0,     0,    46,     0,     0,
       0,    38,     0,    49,    61,    60,   130,     0,     0,   133,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    91,
       0,     0,    85,     0,     0,    82,     0,     0,     0,   118,
     116,   134,   128,     0,     0,     0,     0,     0,    76,    75,
       0,    79,    78,     0,    71,    70,     0,    68,    66,     0,
      67,    73,     0,     0,     0,     0,     0,     0,    86,    87,
      90,    89,    83,    84,    80,    81,   135,   111,     0,   109,
     110,     0,     0,     0,     0,   108,    11,    12,    13,    14,
     107,    99,   101,   103,   105
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -264,  -264,    -4,  -264,  -264,  -264,  -264,  -264,     1,   435,
    -264,   360,    -3,  -264,  -264,  -264,  -264,  -107,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,    57,
    -264,  -264,  -264,   -87,  -264,  -264,  -264,  -264,  -264,   -63,
     -32,    79,    77,    74,    80,  -263,  -264,   172,    -8,  -264,
    -264,  -264,  -264,    67,   224,   -27,   208,   207,   303,   -80,
     330,   143,  -264
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    35,    36,    10,    16,    48,    17,    11,
      25,    67,   367,    60,    51,    57,    63,   143,    54,    66,
      61,    58,    64,    52,    55,   326,   323,   317,   320,    12,
      13,    93,   175,    94,    95,    96,    97,    98,    99,   368,
     369,    37,    38,    39,    40,   280,   170,    87,   370,   236,
     275,   332,   352,   167,   168,   160,    79,    80,    81,   145,
     146,   147,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    78,   189,   161,    26,   176,   171,    43,    45,   196,
      73,   183,   306,    76,   187,   192,    49,    14,     1,   309,
     103,    68,   153,   154,     3,   104,    88,   232,    18,   190,
       4,  -104,   233,    19,    20,    21,     5,  -100,    89,    22,
      91,    23,  -102,    14,   144,     7,    18,   155,   205,   102,
     152,    19,    20,    21,  -104,   101,    77,    22,  -106,    23,
    -100,   197,   213,   184,   132,  -102,   188,   193,    44,    72,
      73,    74,    75,    76,   362,     8,   131,   363,    92,   173,
      15,  -106,   360,     6,     7,    47,   174,   194,   238,   366,
       8,   198,   199,    46,   244,   139,   140,    68,    18,    90,
      27,   204,   237,    19,    20,    21,    28,   156,   157,    22,
     364,    23,    29,  -104,   365,   212,    77,    30,    31,  -100,
      32,    69,    70,    33,  -102,   135,    73,   136,   137,   138,
     135,    73,   136,   137,   138,   135,    73,   153,   154,    76,
    -106,    71,   139,   140,   153,   154,   380,   139,   140,    18,
     153,   154,   108,   113,    19,    20,    21,   109,   114,   256,
      22,   105,    23,   106,   118,   110,   350,   111,   224,   119,
     294,   141,   142,   123,   207,   208,   333,   142,   124,   132,
     305,   233,    77,   358,    14,   359,   319,   266,   267,   268,
     269,   270,   271,    27,   209,   210,    24,    27,   115,    28,
     116,   334,   335,    28,    50,    29,   233,   233,    53,    29,
      30,    31,    56,    32,    30,    31,    33,    32,    18,   120,
      33,   121,    59,    19,    20,    21,   297,   281,    27,    22,
     301,    23,    27,   304,    28,   125,   361,   126,    28,   172,
      29,    27,    62,   330,    29,    30,    31,    28,    32,    30,
      31,    33,    32,    29,   129,    33,   130,   336,    30,    31,
     337,    32,   233,    65,    33,   233,    82,   281,    83,  -174,
    -174,    88,   100,   327,   281,   107,    18,    34,    27,    84,
     329,    19,    20,    21,    28,   112,   279,    22,    85,    23,
      29,   371,   372,   373,   374,    30,    31,    86,    32,   117,
     173,    33,   153,   154,   222,   223,  -173,  -173,   153,   154,
     214,   215,   216,   217,   218,   219,   214,   215,   216,   217,
     218,   219,   153,   154,   153,   154,   224,   220,   139,   140,
     214,   215,   216,   217,   218,   219,   375,   339,   340,   375,
     375,   375,   375,   122,   281,   162,   163,   164,   165,   166,
     310,   311,   312,   313,   314,   342,   343,   345,   346,   348,
     349,   225,   226,   227,   228,   272,   273,   127,   158,   128,
     133,   134,   149,   150,   151,   159,   169,   177,   178,   179,
     180,   181,   185,   186,   201,   191,   195,   200,   202,   230,
     203,   206,   221,   239,   231,   234,   235,   240,   241,   242,
     243,   245,   261,   246,   262,   248,   247,   249,   251,   263,
     250,   252,   254,   253,   255,   257,   258,   259,   260,   264,
     274,   265,   276,   278,   282,   303,   289,   291,   290,   288,
     315,   316,   307,   318,   321,   283,   322,   284,   285,   286,
     324,   325,   328,   331,   287,    42,   378,   376,   377,   292,
     293,   308,   295,   379,   296,   298,   299,   277,   300,   302,
     182,   229,   338,   341,   344,   347,   351,   353,   354,   355,
     356,   211,     0,   357,     0,     0,   381,   382,   383,     0,
       0,   384
};

static const yytype_int16 yycheck[] =
{
       8,    28,   109,    83,     7,    92,    86,    11,    12,     3,
       4,     3,   275,     7,     3,     3,    15,    15,    31,   282,
      54,    24,    33,    34,     7,    59,    34,    51,     5,   109,
       0,     5,    56,    10,    11,    12,    58,    11,    42,    16,
      44,    18,    16,    15,    71,    23,     5,    58,   128,    48,
      77,    10,    11,    12,     5,    53,    50,    16,    32,    18,
      11,    55,   142,    55,    67,    16,    55,    55,    11,     3,
       4,     5,     6,     7,     4,    29,    53,     7,    52,    87,
      52,    32,     7,    22,    23,     7,    90,   114,   175,   352,
      29,   118,   119,    28,    53,    20,    21,   100,     5,    42,
       7,   128,    53,    10,    11,    12,    13,    35,    36,    16,
       3,    18,    19,     5,     7,   142,    50,    24,    25,    11,
      27,    39,    40,    30,    16,     3,     4,     5,     6,     7,
       3,     4,     5,     6,     7,     3,     4,    33,    34,     7,
      32,    59,    20,    21,    33,    34,    53,    20,    21,     5,
      33,    34,    54,    54,    10,    11,    12,    59,    59,    55,
      16,    56,    18,    58,    54,    56,    55,    58,    51,    59,
     250,    49,    50,    54,    41,    42,    51,    50,    59,   182,
     260,    56,    50,     5,    15,     7,   293,   214,   215,   216,
     217,   218,   219,     7,    41,    42,    52,     7,    56,    13,
      58,    51,    51,    13,     7,    19,    56,    56,     7,    19,
      24,    25,     7,    27,    24,    25,    30,    27,     5,    56,
      30,    58,     7,    10,    11,    12,   253,   235,     7,    16,
     257,    18,     7,   260,    13,    56,   343,    58,    13,    53,
      19,     7,     7,    53,    19,    24,    25,    13,    27,    24,
      25,    30,    27,    19,    56,    30,    58,    51,    24,    25,
      51,    27,    56,     7,    30,    56,    50,   275,    50,    47,
      48,   279,    52,   300,   282,    58,     5,    52,     7,    50,
     307,    10,    11,    12,    13,    58,    52,    16,    50,    18,
      19,   354,   355,   356,   357,    24,    25,    50,    27,    58,
     308,    30,    33,    34,    47,    48,    47,    48,    33,    34,
      41,    42,    43,    44,    45,    46,    41,    42,    43,    44,
      45,    46,    33,    34,    33,    34,    51,    58,    20,    21,
      41,    42,    43,    44,    45,    46,   368,    55,    56,   371,
     372,   373,   374,    58,   352,     3,     4,     5,     6,     7,
     283,   284,   285,   286,   287,    55,    56,    55,    56,    55,
      56,   153,   154,   156,   157,   222,   223,    58,    37,    59,
      58,    58,    58,    58,    58,     7,     7,    12,    11,    16,
       5,    32,     5,     7,     3,     7,     7,     7,     6,    51,
       7,     7,    58,     7,    51,    59,    51,     7,     7,     7,
       7,    55,     5,    59,     5,    55,    59,    59,    55,     6,
      59,    59,    55,    59,    59,    59,    55,    59,    59,     6,
      58,    51,    58,     3,    51,     6,    54,     5,    54,    58,
       3,     5,    26,     3,     3,    50,     4,    50,    50,    50,
       3,     3,     3,    14,    50,    10,   372,   368,   371,    54,
      54,   279,    54,   373,    54,    54,    54,   233,    54,    54,
     100,   158,    55,    55,    55,    55,    55,    52,    52,    52,
      52,   141,    -1,    52,    -1,    -1,    53,    53,    53,    -1,
      -1,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    61,     7,     0,    58,    22,    23,    29,    62,
      65,    69,    89,    90,    15,    52,    66,    68,     5,    10,
      11,    12,    16,    18,    52,    70,    72,     7,    13,    19,
      24,    25,    27,    30,    52,    63,    64,   101,   102,   103,
     104,   108,    69,    62,    89,    62,    28,     7,    67,    68,
       7,    74,    83,     7,    78,    84,     7,    75,    81,     7,
      73,    80,     7,    76,    82,     7,    79,    71,    72,    39,
      40,    59,     3,     4,     5,     6,     7,    50,   115,   116,
     117,   118,    50,    50,    50,    50,    50,   107,   108,    62,
      89,    62,    52,    91,    93,    94,    95,    96,    97,    98,
      52,    53,    68,    54,    59,    56,    58,    58,    54,    59,
      56,    58,    58,    54,    59,    56,    58,    58,    54,    59,
      56,    58,    58,    54,    59,    56,    58,    58,    59,    56,
      58,    53,    72,    58,    58,     3,     5,     6,     7,    20,
      21,    49,    50,    77,   115,   119,   120,   121,   122,    58,
      58,    58,   115,    33,    34,    58,    35,    36,    37,     7,
     115,   119,     3,     4,     5,     6,     7,   113,   114,     7,
     106,   119,    53,   108,    62,    92,    93,    12,    11,    16,
       5,    32,    71,     3,    55,     5,     7,     3,    55,    77,
     119,     7,     3,    55,   115,     7,     3,    55,   115,   115,
       7,     3,     6,     7,   115,   119,     7,    41,    42,    41,
      42,   120,   115,   119,    41,    42,    43,    44,    45,    46,
      58,    58,    47,    48,    51,   116,   116,   117,   117,   118,
      51,    51,    51,    56,    59,    51,   109,    53,    93,     7,
       7,     7,     7,     7,    53,    55,    59,    59,    55,    59,
      59,    55,    59,    59,    55,    59,    55,    59,    55,    59,
      59,     5,     5,     6,     6,    51,   115,   115,   115,   115,
     115,   115,   121,   121,    58,   110,    58,   114,     3,    52,
     105,   108,    51,    50,    50,    50,    50,    50,    58,    54,
      54,     5,    54,    54,   119,    54,    54,   115,    54,    54,
      54,   115,    54,     6,   115,   119,   105,    26,   107,   105,
     113,   113,   113,   113,   113,     3,     5,    87,     3,    77,
      88,     3,     4,    86,     3,     3,    85,   115,     3,   115,
      53,    14,   111,    51,    51,    51,    51,    51,    55,    55,
      56,    55,    55,    56,    55,    55,    56,    55,    55,    56,
      55,    55,   112,    52,    52,    52,    52,    52,     5,     7,
       7,    77,     4,     7,     3,     7,   105,    72,    99,   100,
     108,    99,    99,    99,    99,   100,   101,   102,   103,   104,
      53,    53,    53,    53,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    61,    61,    61,    61,    62,    63,
      63,    64,    64,    64,    64,    65,    66,    66,    67,    67,
      68,    69,    70,    70,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    73,
      73,    74,    74,    74,    74,    75,    75,    75,    75,    76,
      76,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    81,
      81,    81,    82,    82,    83,    83,    83,    84,    84,    84,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    88,
      88,    88,    90,    89,    91,    91,    92,    92,    94,    93,
      95,    93,    96,    93,    97,    93,    98,    93,    99,    99,
     100,   100,   101,   102,   103,   104,   105,   105,   106,   107,
     107,   108,   108,   108,   108,   108,   108,   109,   108,   110,
     108,   108,   108,   111,   112,   111,   113,   113,   114,   114,
     114,   114,   114,   114,   115,   115,   115,   116,   116,   116,
     117,   117,   118,   118,   118,   118,   119,   119,   120,   120,
     120,   121,   121,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     7,     6,     5,     6,     5,     2,     3,
       1,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       6,     2,     3,     1,     2,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     1,
       3,     5,     3,     3,     1,     3,     5,     1,     3,     5,
       3,     3,     1,     1,     1,     3,     3,     1,     5,     3,
       5,     5,     3,     3,     4,     4,     7,     7,     7,     4,
       7,     7,     4,     7,     4,     7,     7,     4,     7,     7,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     0,     3,     3,     1,     2,     1,     0,    10,
       0,    10,     0,    10,     0,    10,     0,     9,     2,     1,
       1,     1,     3,     3,     3,     3,     3,     1,     5,     2,
       1,     4,     4,     3,     3,     5,     5,     0,     7,     0,
       6,     5,     1,     0,     0,     3,     3,     1,     1,     1,
       1,     1,     1,     0,     3,     3,     1,     3,     3,     1,
       3,     1,     1,     1,     3,     1,     1,     2,     3,     3,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 197 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : main ----------\n");}
#line 1681 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 198 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : type-var-functions-main ----------\n");}
#line 1687 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 199 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : var-functions-main ----------\n");}
#line 1693 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 200 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : functions-main ----------\n");}
#line 1699 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 201 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : type-var-main ----------\n");}
#line 1705 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 202 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : var-main ----------\n");}
#line 1711 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 206 "canlyse.y" /* yacc.c:1646  */
    {ajouter_quadruplet("END","","","");}
#line 1717 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 221 "canlyse.y" /* yacc.c:1646  */
    {printf("Structure définie\n\n");}
#line 1723 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 251 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau d'entiers\n");}
#line 1729 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 253 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de réels\n");}
#line 1735 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 255 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de strings\n");}
#line 1741 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 257 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de caractères\n");}
#line 1747 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 259 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de booléens\n");}
#line 1753 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 270 "canlyse.y" /* yacc.c:1646  */
    {
   if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,1,"null",0);

    printf ("  ajout avec secuus ");

  }
 }
#line 1770 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 283 "canlyse.y" /* yacc.c:1646  */
    {   if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
     sprintf(str,"%s",(yyvsp[0].string));
    ajouter((yyvsp[-2].string),0,1,str,0);
    
  }
}
#line 1787 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 295 "canlyse.y" /* yacc.c:1646  */
    {
  if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,1,"null",0);
  }
}
#line 1801 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 304 "canlyse.y" /* yacc.c:1646  */
    {

   if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    printf (" expression ");

    char  str1[20]; 
     sprintf(str1,"%s",(yyvsp[0].string));
     ajouter((yyvsp[-2].string),0,1,str1,0);
    

  }
}
#line 1822 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 325 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
     sprintf(str,"%d",(yyvsp[0].charecter));
    ajouter((yyvsp[-2].string),0,3,str,0);
    
  }
}
#line 1839 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 338 "canlyse.y" /* yacc.c:1646  */
    {
   if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declaré");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,3,"null",0);

  }
 }
#line 1854 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 349 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
     sprintf(str,"%d",(yyvsp[0].charecter));
    ajouter((yyvsp[-2].string),0,3,str,0);
    
  }
}
#line 1871 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 362 "canlyse.y" /* yacc.c:1646  */
    {
   if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declaré");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,3,"null",0);

  }
 }
#line 1886 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 375 "canlyse.y" /* yacc.c:1646  */
    {
   if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declaré");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,2,"null",0);

  }
 }
#line 1901 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 386 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[-2].string),0,2,(yyvsp[0].string),0);
    
  }
}
#line 1916 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 397 "canlyse.y" /* yacc.c:1646  */
    {
   if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declaré");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,2,"null",0);


  }
 }
#line 1932 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 409 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[-2].string),0,2,(yyvsp[0].string),0);    
  }
}
#line 1946 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 421 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[-2].string),0,4,(yyvsp[0].string),0);
  }
}
#line 1960 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 431 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,4,"null",0);
    
  }
}
#line 1975 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 442 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[-2].string),0,4,(yyvsp[0].string),0);
    
  }
}
#line 1990 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 453 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,4,"null",0);
    

  }
}
#line 2006 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 465 "canlyse.y" /* yacc.c:1646  */
    {
      (yyval.string) = strdup("1");
  }
#line 2014 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 468 "canlyse.y" /* yacc.c:1646  */
    {
      (yyval.string) = strdup("0");
  }
#line 2022 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 473 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,5,"null",0);
  }
}
#line 2036 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 483 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else {
    ajouter((yyvsp[-2].string),0,5,(yyvsp[0].string),0);
    
  }
}
#line 2051 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 494 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,5,"null",0);
    
  }
}
#line 2066 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 505 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[-2].string),0,5,"null",0);
    ajouter_quadruplet(":=",(yyvsp[-2].string),(yyvsp[0].string),"");
  }
}
#line 2081 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 516 "canlyse.y" /* yacc.c:1646  */
    {   
  if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    printf (" LogicExpression");

    ajouter((yyvsp[-2].string),0,5,"null",0);
    ajouter_quadruplet(":=",(yyvsp[-2].string),(yyvsp[0].string),"");
  }
}
#line 2098 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 536 "canlyse.y" /* yacc.c:1646  */
    {
     ajouter((yyvsp[-3].string),0,7,"null",1);
     ajouter_quadruplet("BOUNDS","0",(yyvsp[-1].string),"");
     ajouter_quadruplet("ADEC", (yyvsp[-3].string) ,"","");
       
}
#line 2109 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 542 "canlyse.y" /* yacc.c:1646  */
    {
     
     if ((yyvsp[-1].integer)>0){
     ajouter((yyvsp[-3].string),0,7,"null",1);
     char str[20];
     sprintf(str,"%d",(yyvsp[-1].integer)-1);
     ajouter_quadruplet("BOUNDS","0" ,str,"");
     ajouter_quadruplet("ADEC", (yyvsp[-3].string) ,"","");
       
     }
     else printf("\tERREUR : Erreur de semantique a la ligne %d. incorrect table size  ( :!\n",line_count);
   
}
#line 2127 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 557 "canlyse.y" /* yacc.c:1646  */
    {
     ajouter((yyvsp[-6].string),0,7,"null",1);
     ajouter_quadruplet("BOUNDS","0" ,(yyvsp[-4].string),"");
     ajouter_quadruplet("BOUNDS","0" ,(yyvsp[-1].string),"");
     ajouter_quadruplet("ADEC", (yyvsp[-6].string) ,"","");
       
     //affiche_dico();
}
#line 2140 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 566 "canlyse.y" /* yacc.c:1646  */
    {
     ajouter((yyvsp[-6].string),0,7,"null",2);
     char str3[20];
     char str6[20];
      sprintf(str3,"%d",(yyvsp[-4].integer)-1);
      sprintf(str6,"%d",(yyvsp[-1].integer)-1);
     ajouter_quadruplet("BOUNDS","0" ,str3,"");
     ajouter_quadruplet("BOUNDS","0" ,str6,"");
     ajouter_quadruplet("ADEC", (yyvsp[-6].string) ,"","");
       
     //affiche_dico();
}
#line 2157 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 580 "canlyse.y" /* yacc.c:1646  */
    {
     ajouter((yyvsp[-3].string),0,8,"null",1);
     char str[20];
     sprintf(str,"%d",(yyvsp[-1].integer)-1);
     ajouter_quadruplet("BOUNDS","0" ,str,"");
     ajouter_quadruplet("ADEC", (yyvsp[-3].string) ,"","");
       
}
#line 2170 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 590 "canlyse.y" /* yacc.c:1646  */
    {
      ajouter((yyvsp[-6].string),0,8,"null",2);
     char str3[20];
     char str6[20];
      sprintf(str3,"%d",(yyvsp[-4].integer)-1);
      sprintf(str6,"%d",(yyvsp[-1].integer)-1);
     ajouter_quadruplet("BOUNDS","0" ,str3,"");
     ajouter_quadruplet("BOUNDS","0" ,str6,"");
     ajouter_quadruplet("ADEC", (yyvsp[-6].string) ,"","");
       
     //affiche_dico();
}
#line 2187 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 604 "canlyse.y" /* yacc.c:1646  */
    {     ajouter((yyvsp[-3].string),0,9,"null",1);
      char str[20];
     sprintf(str,"%d",(yyvsp[-1].integer)-1);
     ajouter_quadruplet("BOUNDS","0" ,str,"");
     ajouter_quadruplet("ADEC", (yyvsp[-3].string) ,"","");
       
}
#line 2199 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 612 "canlyse.y" /* yacc.c:1646  */
    {
      ajouter((yyvsp[-6].string),0,9,"null",2);
     char str3[20];
     char str6[20];
      sprintf(str3,"%d",(yyvsp[-4].integer)-1);
      sprintf(str6,"%d",(yyvsp[-1].integer)-1);
     ajouter_quadruplet("BOUNDS","0" ,str3,"");
     ajouter_quadruplet("BOUNDS","0" ,str6,"");
     ajouter_quadruplet("ADEC", (yyvsp[-6].string) ,"","");
       
     //affiche_dico();
}
#line 2216 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 626 "canlyse.y" /* yacc.c:1646  */
    {     ajouter((yyvsp[-3].string),0,10,"null",1);
   char str[20];
      sprintf(str,"%d",(yyvsp[-1].integer)-1);
     ajouter_quadruplet("BOUNDS","0" ,str,"");
     ajouter_quadruplet("ADEC", (yyvsp[-3].string) ,"","");
       
}
#line 2228 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 635 "canlyse.y" /* yacc.c:1646  */
    {
      ajouter((yyvsp[-6].string),0,10,"null",2);
     char str3[20];
     char str6[20];
      sprintf(str3,"%d",(yyvsp[-4].integer));
      sprintf(str6,"%d",(yyvsp[-1].integer));
     ajouter_quadruplet("BOUNDS","0" ,str3,"");
     ajouter_quadruplet("BOUNDS","0" ,str6,"");
     ajouter_quadruplet("ADEC", (yyvsp[-6].string) ,"","");
       
     //affiche_dico();
}
#line 2245 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 649 "canlyse.y" /* yacc.c:1646  */
    {
     ajouter((yyvsp[-3].string),0,11,"null",1);
     char str3[20];
     sprintf(str3,"%d",(yyvsp[-1].integer)-1);
     ajouter_quadruplet("BOUNDS","0" ,str3,"");
     ajouter_quadruplet("ADEC", (yyvsp[-3].string) ,"","");
       
}
#line 2258 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 659 "canlyse.y" /* yacc.c:1646  */
    {
   {
      ajouter((yyvsp[-6].string),0,11,(yyvsp[-6].string),2);
     char str3[20];
     char str6[20];
      sprintf(str3,"%d",(yyvsp[-4].integer));
      sprintf(str6,"%d",(yyvsp[-1].integer));
     ajouter_quadruplet("BOUNDS","0" ,str3,"");
     ajouter_quadruplet("BOUNDS","0" ,str6,"");
     ajouter_quadruplet("ADEC", (yyvsp[-6].string) ,"","");
       
     //affiche_dico();
}
}
#line 2277 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 692 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Functions ----------\n\n");}
#line 2283 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 698 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction int\n");}
#line 2289 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 698 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 2295 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 699 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction double\n");}
#line 2301 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 699 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 2307 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 700 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction string\n");}
#line 2313 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 700 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 2319 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 701 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction char\n");}
#line 2325 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 701 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 2331 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 702 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction void\n");}
#line 2337 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 702 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 2343 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 716 "canlyse.y" /* yacc.c:1646  */
    {
char str2[20];
sprintf(str2,"%d",(yyvsp[-2].integer));
ajouter_quadruplet(":=",(yyvsp[-4].string),str2,"");
ajouter_quadruplet("-",(yyvsp[0].string),(yyvsp[-4].string),"");
ajouter_quadruplet("bz","","","");
Sif=index_tbq;

;
}
#line 2358 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 730 "canlyse.y" /* yacc.c:1646  */
    { 
   
  if (recherche((yyvsp[-3].string)) ==NULL) {
    printf (" variable non decalrie");
  }
  else { 
    desc_identif* var  =  recherche((yyvsp[-3].string)) ;
    if ((var->type == 2) || (var->type == 1)){
         char  str[20]; 
     sprintf(str,"%s",(yyvsp[-1].string));
     modifier((yyvsp[-3].string),0,1,str,0);
     ajouter_quadruplet(":=" , (yyvsp[-3].string) , "",str);
       
      
    }
    else printf("\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (type  conflict :!\n",line_count);
 
  }
    }
#line 2382 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 750 "canlyse.y" /* yacc.c:1646  */
    { 
   
  if (recherche((yyvsp[-3].string)) ==NULL) {
    printf (" variable non decalrie");
  }
  else { 
    desc_identif* var  =  recherche((yyvsp[-3].string)) ;
    if ((var->type == 5)){
        char  str[20]; 
     sprintf(str,"%s",(yyvsp[-1].string));
 
     ajouter_quadruplet(":=" , (yyvsp[-3].string) , "",str);
       
      
    }
    else printf("\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (type  conflict :!\n",line_count);
 
  }
    }
#line 2406 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 770 "canlyse.y" /* yacc.c:1646  */
    { 

   char str[20];
    sprintf(str,"%d",index_tbq);
     ajouter_quadruplet("+" , (yyvsp[-2].string) ,"1",str);
 }
#line 2417 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 776 "canlyse.y" /* yacc.c:1646  */
    {
    char str[20];
    sprintf(str,"%d",index_tbq);
     ajouter_quadruplet("-" , (yyvsp[-2].string) ,"1",str);
    }
#line 2427 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 781 "canlyse.y" /* yacc.c:1646  */
    { printf("READ \n"); }
#line 2433 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 782 "canlyse.y" /* yacc.c:1646  */
    {printf("WRITE \n"); }
#line 2439 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 784 "canlyse.y" /* yacc.c:1646  */
    {

  push(index_tbq);

  //Lif=index_tbq;
  ajouter_quadruplet("bz","","","");
  }
#line 2451 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 792 "canlyse.y" /* yacc.c:1646  */
    {
  pushwhile(index_tbq);
  ajouter_quadruplet("bz","","","");}
#line 2459 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 795 "canlyse.y" /* yacc.c:1646  */
    { 
  { 
    char str[20];
    sprintf(str,"%d",index_tbq);
    int lWhile = popwhile();
    modifier_quadruplet(lWhile,"bz","","",str);
  }

}
#line 2473 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 804 "canlyse.y" /* yacc.c:1646  */
    { 
char str[20];
sprintf(str,"%d",Sif-1);
ajouter_quadruplet("+",tbq[Sif-2].deuxieme,"1","r");
ajouter_quadruplet(":=","r","",tbq[Sif-2].deuxieme);
ajouter_quadruplet("br","","",str);
char str1[20];
sprintf(str1,"%d",index_tbq);
modifier_quadruplet(Sif,tbq[Sif].premier,tbq[Sif].deuxieme,tbq[Sif].troisieme,str1);
}
#line 2488 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 814 "canlyse.y" /* yacc.c:1646  */
    {printf("Return\n");}
#line 2494 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 817 "canlyse.y" /* yacc.c:1646  */
    { 
    char str[20];
    sprintf(str,"%d",index_tbq);
    int lif = pop();
    modifier_quadruplet(lif,"bz","","",str);
  }
#line 2505 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 824 "canlyse.y" /* yacc.c:1646  */
    {
    int lif = pop();
    push(index_tbq);
    ajouter_quadruplet("br","","","");
    char str[20];
    sprintf(str,"%d",index_tbq);
    modifier_quadruplet(lif,"bz","","",str);

 
 }
#line 2520 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 833 "canlyse.y" /* yacc.c:1646  */
    {
    char str[20];
    int lesle = pop();

    sprintf(str,"%d",index_tbq);
    modifier_quadruplet(lesle,"br","","",str);

 }
#line 2533 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 849 "canlyse.y" /* yacc.c:1646  */
    {
  	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	(yyval.string)=strdup(strcat(str,str_index));
    	ajouter_quadruplet("+",(yyvsp[-2].string),(yyvsp[0].string),(yyval.string));
   }
#line 2545 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 856 "canlyse.y" /* yacc.c:1646  */
    {
     	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	(yyval.string)=strdup(strcat(str,str_index));
    	ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),(yyval.string));
      }
#line 2557 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 863 "canlyse.y" /* yacc.c:1646  */
    {
        (yyval.string) = strdup((yyvsp[0].string));


  }
#line 2567 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 870 "canlyse.y" /* yacc.c:1646  */
    {
    	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	(yyval.string)=strdup(strcat(str,str_index));
    	ajouter_quadruplet("*",(yyvsp[-2].string),(yyvsp[0].string),(yyval.string));
  
   }
#line 2580 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 878 "canlyse.y" /* yacc.c:1646  */
    { 
	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	(yyval.string)=strdup(strcat(str,str_index));
    	ajouter_quadruplet("/",(yyvsp[-2].string),(yyvsp[0].string),(yyval.string));
   }
#line 2592 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 885 "canlyse.y" /* yacc.c:1646  */
    {
      (yyval.string) = strdup((yyvsp[0].string));
  }
#line 2600 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 890 "canlyse.y" /* yacc.c:1646  */
    {
      	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	(yyval.string)=strdup(strcat(str,str_index));
      	ajouter_quadruplet("**",(yyvsp[-2].string),(yyvsp[0].string),(yyval.string));
     }
#line 2612 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 897 "canlyse.y" /* yacc.c:1646  */
    {
    
      (yyval.string) = strdup((yyvsp[0].string));
  }
#line 2621 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 906 "canlyse.y" /* yacc.c:1646  */
    {
      char str[50];
      sprintf(str,"%f",(yyvsp[0].real));
       (yyval.string) = strdup(str);
      }
#line 2631 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 911 "canlyse.y" /* yacc.c:1646  */
    {
      char str[50];
      sprintf(str,"%d",(yyvsp[0].integer));

      (yyval.string) = strdup(str);
      }
#line 2642 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 917 "canlyse.y" /* yacc.c:1646  */
    {
     (yyval.string) = strdup((yyvsp[-1].string));

      }
#line 2651 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 921 "canlyse.y" /* yacc.c:1646  */
    {
   
  if (recherche((yyvsp[0].string)) ==NULL) {
    printf (" variable non decalrie");
  }
  else { 
    desc_identif* var  =  recherche((yyvsp[0].string)) ;
    if ((var->type == 2) || (var->type == 1) || var->type == 5){

      (yyval.string) = strdup((yyvsp[0].string));
      
    }
    else printf("\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (type  conflict :!\n",line_count);
 
  }

  }
#line 2673 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 942 "canlyse.y" /* yacc.c:1646  */
    {
     (yyval.string) = strdup((yyvsp[0].string)); 
   }
#line 2681 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 944 "canlyse.y" /* yacc.c:1646  */
    {
          char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet(":=",(yyvsp[0].string),"",str);
}
#line 2693 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 953 "canlyse.y" /* yacc.c:1646  */
    {  
          char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet(":=",(yyvsp[-2].string),"",str);
    ajouter_quadruplet("b?","","","");
    char str2[20]="r";
  	sprintf(str_index,"%d",index_tbq);
    (yyval.string)=strdup(strcat(str2,str_index));
    ajouter_quadruplet(":=",(yyvsp[0].string),"",str2);
       }
#line 2710 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 965 "canlyse.y" /* yacc.c:1646  */
    {  
    char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet(":=",(yyvsp[-2].string),"",str);
    ajouter_quadruplet("b?","","","");
    char str2[20]="r";
  	sprintf(str_index,"%d",index_tbq);
    (yyval.string)=strdup(strcat(str2,str_index));
    ajouter_quadruplet(":=",(yyvsp[0].string),"",str2);
    }
#line 2727 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 977 "canlyse.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); 
   }
#line 2734 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 981 "canlyse.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);}
#line 2740 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 981 "canlyse.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[-1].string);}
#line 2746 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 984 "canlyse.y" /* yacc.c:1646  */
    { 
      char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
    	char char1[20];
  	sprintf(char1,"%c",(yyvsp[-2].charecter));
    	char char3[20];
  	sprintf(char3,"%c",(yyvsp[0].charecter));
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",char1,char3,str);
     }
#line 2762 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 995 "canlyse.y" /* yacc.c:1646  */
    { 
    char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2774 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1002 "canlyse.y" /* yacc.c:1646  */
    { 
    char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
    }
#line 2786 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1010 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));

  	char char1[20];
  	sprintf(char1,"%c",(yyvsp[-2].charecter));
    	char char3[20];
  	sprintf(char3,"%c",(yyvsp[0].charecter));

    ajouter_quadruplet("-",char1,char3,str);
  }
#line 2804 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1023 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2816 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1030 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2828 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1038 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2840 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1045 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2852 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1052 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2864 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1059 "canlyse.y" /* yacc.c:1646  */
    { 
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);}
#line 2875 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1065 "canlyse.y" /* yacc.c:1646  */
    { (yyval.string) =strdup((yyvsp[0].string));
    
      }
#line 2883 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1069 "canlyse.y" /* yacc.c:1646  */
    {
   
  if (recherche((yyvsp[0].string)) ==NULL) {
    printf (" variable non decalrie");
  }
  else { 
    desc_identif* var  =  recherche((yyvsp[0].string)) ;
    if (var->type == 5) {
         char  str[20]; 
     ajouter_quadruplet(":=" , (yyvsp[0].string) , "",str);
       
      
    }
    else printf("\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (type  conflict :!\n",line_count);
 
  }

  }
#line 2906 "canlyse.tab.c" /* yacc.c:1646  */
    break;


#line 2910 "canlyse.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1093 "canlyse.y" /* yacc.c:1906  */

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
  affiche_dico();

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

     p = tbs->root;
     if (p != NULL){
      printf("\n Contenue de la table des symboles\n");
      printf("|Entrée N |Identificateur |Classe     |Type       |Valeur     |Complément| \n");
      printf("|-------- |-------------- |------     |----       |------     |----------| \n");
      int i =1;
        while (p != NULL)
      {
          printf("|%-8d |%-14s |%-10s |%-10s |%-10s |%-10d| \n"  , i,p->identif ,afficher_classe(p->classe) , afficher_type(p->type) , p->value ,p->complement);
          p=p->next;
          i++;
      }
     }else{
     printf ("Table des symboles nulle \n");}
    
}

char* afficher_type(int i){
  char* type;

  switch(i){
    case 1 : type="integer"; break;
    case 2 : type="real"; break;
    case 3 : type="char"; break;
    case 4 : type="string"; break;
    case 5 : type="boolean"; break;
    case 6 : type="const"; break;
    case 7 : type="int[]"; break;
    case 8 : type="char[]"; break;
    case 9 : type="string[]"; break;
  }
  return type;
}
char* afficher_classe(int i){
  char* classe;

  switch(i){
    case 0 : classe="globale"; break;
    case 1 : classe="locale"; break;
  }
  return classe;
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
   if (ifp.top == -1) { printf("pile vide");}
   else {
      for (i = ifp.top; i >= 0; i--){
        printf("for pilr");
      }
   }
}





 // whilep functions   -     ------------------------

void pushwhile(int item) {
  if (whilep.top >= size - 1)
    return;
  whilep.top++;
  whilep.tab[whilep.top] = item;
}
int popwhile() {
  if (whilep.top == -1)
    return 1;
   int item;
   item = whilep.tab[whilep.top];
   whilep.top--;
   return item;
}
