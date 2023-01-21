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




  	
  int suite;
  int Lesle;
  int Lif;
  int LWhile;










#line 154 "canlyse.tab.c" /* yacc.c:339  */

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
#line 110 "canlyse.y" /* yacc.c:355  */

  int integer;
  double real;
  char charecter ;
  char* string;
  

#line 262 "canlyse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CANLYSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 279 "canlyse.tab.c" /* yacc.c:358  */

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
#define YYLAST   475

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  389

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
       0,   173,   173,   174,   175,   176,   177,   178,   182,   183,
     183,   184,   185,   186,   187,   190,   191,   191,   193,   194,
     197,   201,   202,   202,   203,   204,   212,   214,   216,   218,
     221,   223,   227,   229,   231,   233,   235,   245,   260,   275,
     285,   309,   310,   311,   312,   313,   316,   317,   318,   319,
     320,   323,   324,   325,   326,   327,   329,   329,   330,   331,
     332,   333,   334,   335,   336,   339,   340,   341,   342,   345,
     346,   346,   348,   349,   349,   351,   352,   352,   354,   355,
     355,   357,   358,   358,   360,   361,   362,   364,   365,   366,
     368,   369,   370,   372,   373,   374,   376,   377,   378,   381,
     381,   382,   382,   384,   385,   387,   387,   388,   388,   389,
     389,   390,   390,   391,   391,   393,   394,   396,   396,   398,
     399,   400,   401,   404,   404,   405,   407,   408,   411,   433,
     439,   444,   445,   447,   446,   452,   452,   463,   464,   467,
     473,   472,   489,   489,   490,   490,   490,   490,   490,   490,
     494,   502,   509,   512,   520,   527,   531,   538,   541,   546,
     551,   558,   561,   570,   582,   594,   598,   598,   601,   608,
     615,   623,   630,   637,   645,   652,   659,   666
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
  "element_tabstring", "element_tabchar", "element_tabbool",
  "functions_struct", "$@1", "Action_function", "List_function",
  "function", "$@2", "$@3", "$@4", "$@5", "$@6", "instList_function",
  "inst_function", "return_statement_int", "return_statement_double",
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

#define YYPACT_NINF -270

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-270)))

#define YYTABLE_NINF -114

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -21,    26,    16,   -10,  -270,   161,     7,   136,   229,  -270,
      35,    48,    48,    40,    81,    99,  -270,  -270,   129,   133,
     172,   178,   185,   198,   202,  -270,  -270,    34,    49,    72,
      80,   159,   165,   169,   279,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,    48,  -270,    48,  -270,   134,   187,    17,  -270,
      21,   -33,   193,    25,    93,   200,    54,   119,   235,   111,
     135,   237,   115,   222,   243,   184,   231,    19,  -270,   247,
     265,    39,   290,  -270,   301,   316,    39,    23,   195,   225,
    -270,   261,   152,   307,   337,   152,   197,  -270,  -270,    48,
    -270,   171,  -270,  -270,   365,   367,   363,   375,   349,   202,
    -270,  -270,     5,   319,   376,  -270,  -270,     8,   114,   377,
    -270,  -270,    10,    14,   378,  -270,  -270,    11,    39,   379,
    -270,  -270,    12,   268,   380,  -270,  -270,   152,   381,  -270,
    -270,  -270,  -270,  -270,  -270,    73,  -270,  -270,  -270,    91,
      39,    39,  -270,    39,    39,    39,   331,   286,   308,   156,
     152,   288,   338,   304,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,    20,  -270,   332,   339,  -270,  -270,  -270,  -270,   100,
    -270,   385,   386,   387,   388,   389,    29,   342,   341,  -270,
    -270,   343,   344,   345,  -270,  -270,  -270,  -270,  -270,   346,
     348,   347,  -270,   320,   350,   352,   351,   320,   353,   358,
     355,  -270,  -270,   357,   288,  -270,   359,  -270,  -270,   195,
     195,   225,   225,  -270,   361,   393,   396,   402,   405,   304,
     274,   364,    39,    39,    39,    39,    39,    39,  -270,   156,
     156,   362,   307,   414,   242,   370,  -270,  -270,   372,   373,
     374,   382,   383,   368,   371,   384,   422,   390,   391,   123,
     392,   394,    39,   395,   397,    39,   398,   399,   423,   152,
    -270,  -270,  -270,  -270,  -270,  -270,   320,   320,   320,   320,
     320,   320,   242,  -270,  -270,  -270,  -270,   404,   279,  -270,
    -270,   242,   307,   307,   307,   307,   307,  -270,   425,   426,
    -270,   431,   335,  -270,  -270,   432,   433,   320,   436,   437,
     320,   438,   430,  -270,   288,  -270,  -270,   439,   210,   429,
     138,   182,   201,   209,   220,   400,  -270,   302,   401,  -270,
     305,   403,  -270,   309,   406,  -270,   311,   407,  -270,   313,
    -270,  -270,  -270,  -270,   408,   411,   412,   413,   415,  -270,
    -270,   340,  -270,  -270,   160,  -270,  -270,   204,  -270,  -270,
     130,  -270,  -270,   356,   242,   272,   272,   272,   272,   272,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,   272,  -270,  -270,   272,   272,   272,    85,  -270,
     416,   417,   418,   419,  -270,  -270,  -270,  -270,  -270
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    99,     0,     0,     0,     2,
       0,    99,     0,     0,     0,     0,    15,    17,     0,     0,
       0,     0,     0,     0,     0,    21,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     8,   138,    11,    12,    13,
      14,    10,    99,     7,     0,     5,   105,     0,     0,    19,
      45,     0,     0,    61,     0,     0,    48,     0,     0,    39,
       0,     0,    55,     0,     0,     0,     0,     0,    25,     0,
       0,     0,   159,   158,     0,     0,     0,     0,   152,   155,
     157,     0,     0,   149,     0,     0,     0,   127,     6,     0,
       4,   105,   100,   102,     0,     0,     0,     0,     0,     0,
      16,    18,     0,     0,     0,    27,    35,     0,     0,     0,
      30,    36,     0,     0,     0,    28,    33,     0,     0,     0,
      26,    32,     0,     0,     0,    29,    34,     0,     0,    31,
      22,    24,   129,   130,   159,     0,   119,   122,   121,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,   165,   166,   144,   146,   147,   145,
     148,     0,   143,     0,     0,   133,     9,   126,     3,   105,
     104,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,    42,     0,     0,    64,    56,    57,    60,    63,    59,
       0,     0,    50,    49,    46,     0,     0,    40,    37,     0,
       0,    53,    54,    52,    67,    68,     0,   128,   160,   150,
     151,   153,   154,   156,     0,     0,     0,     0,     0,   162,
       0,     0,     0,     0,     0,     0,     0,     0,   135,     0,
       0,     0,   149,     0,     0,     0,   101,   103,     0,     0,
       0,     0,     0,     0,    78,     0,     0,    81,     0,     0,
      72,     0,     0,    69,     0,     0,    75,     0,     0,     0,
     131,   168,   171,   169,   172,   167,   170,   173,   176,   174,
     177,   175,     0,   163,   164,   132,   142,     0,     0,   137,
     124,     0,   149,   149,   149,   149,   149,    20,     0,     0,
      41,     0,     0,    58,    62,     0,     0,    47,     0,     0,
      38,     0,     0,    51,    66,    65,   136,     0,     0,   139,
       0,     0,     0,     0,     0,     0,    95,     0,     0,    98,
       0,     0,    89,     0,     0,    86,     0,     0,    92,     0,
     125,   123,   140,   134,     0,     0,     0,     0,     0,    80,
      79,     0,    83,    82,     0,    74,    73,     0,    71,    70,
       0,    77,    76,     0,     0,     0,     0,     0,     0,     0,
      93,    94,    97,    96,    87,    88,    84,    85,    90,    91,
     141,   118,     0,   116,   117,     0,     0,     0,     0,   115,
      11,    12,    13,    14,   114,   106,   108,   110,   112
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,    -6,  -270,  -270,  -270,  -270,  -270,    13,   440,
    -270,   360,    -5,  -270,  -270,  -270,  -270,  -242,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
       9,  -270,  -270,  -270,   -82,  -270,  -270,  -270,  -270,  -270,
     -16,  -131,    75,    79,    90,    96,  -269,  -270,   179,    -8,
    -270,  -270,  -270,  -270,    53,   236,   -27,   230,   232,   329,
     -81,   326,   143,  -270
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    35,    36,    10,    16,    48,    17,    11,
      25,    67,   371,    60,    51,    57,    63,   187,    54,    66,
      61,    58,    64,    52,    55,   326,   323,   329,   317,   320,
      12,    13,    92,   169,    93,    94,    95,    96,    97,    98,
     372,   373,    37,    38,    39,    40,   279,   164,    86,   374,
     235,   272,   333,   354,   161,   162,   151,    78,    79,    80,
     152,   153,   154,   155
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    77,    26,   306,   165,    43,    45,   293,   177,   170,
       1,   182,   309,   190,   195,   199,     4,   134,    73,    68,
      44,   192,    14,   104,    18,   105,    87,   188,    49,    19,
      20,    21,    14,     3,    18,    22,    88,    23,    90,    19,
      20,    21,   134,    73,   135,    22,   205,    23,     5,   139,
     319,    89,    72,    73,    74,    75,   140,   141,     7,    15,
     178,   101,   131,   183,    76,   191,   196,   200,    46,   221,
     100,   231,   130,    69,    70,   102,   232,     8,   167,   107,
     103,   142,   243,   168,   108,   370,   193,   237,    47,    76,
      18,   197,    27,    71,    68,    19,    20,    21,    28,    76,
     204,    22,   363,    23,    29,  -111,   140,   141,   112,    30,
      31,  -107,    32,   113,    14,    33,  -109,   134,    73,   147,
     148,   184,    81,   220,   140,   141,   134,    73,   147,   148,
      82,   207,  -113,   366,   185,   186,    50,   367,   384,  -111,
      53,    18,   208,   185,   186,  -107,    19,    20,    21,   109,
    -109,   110,    22,   236,    23,   134,    73,   147,   148,   134,
      73,   147,   148,   149,   150,   117,  -113,   362,   294,   122,
     118,   131,   149,   150,   123,   114,  -111,   115,   305,    56,
     185,   186,  -107,     6,     7,    59,    91,  -109,    24,   334,
       8,   119,    62,   120,   232,   266,   267,   268,   269,   270,
     271,   149,   150,  -113,    27,    65,   150,    18,   364,    83,
      28,   365,    19,    20,    21,    84,    29,    27,    22,    85,
      23,    30,    31,    28,    32,   297,   280,    33,   300,    29,
     143,   144,   304,   335,    30,    31,    27,    32,   232,    99,
      33,   379,    28,   127,   379,   379,   379,   379,    29,    27,
     166,   106,   336,    30,    31,    28,    32,   232,   111,    33,
     337,    29,   145,   331,   280,   232,    30,    31,   146,    32,
      87,   338,    33,   280,   201,   202,   232,    18,   124,    27,
     125,    34,    19,    20,    21,    28,    27,   128,    22,   129,
      23,    29,    28,   116,   278,   121,    30,    31,    29,    32,
     167,   126,    33,    30,    31,   132,    32,   140,   141,    33,
     156,   157,   158,   159,   160,   222,   223,   224,   225,   226,
     227,   140,   141,   133,   179,   208,   180,   215,   216,   222,
     223,   224,   225,   226,   227,   310,   311,   312,   313,   314,
     375,   376,   377,   378,   163,   360,   280,   361,   136,   217,
     218,   229,   230,   140,   141,   185,   186,   340,   341,   137,
     343,   344,   368,   369,   346,   347,   349,   350,   352,   353,
     209,   210,   273,   274,   138,   211,   212,   171,   172,   173,
     174,   175,   214,   181,   189,   194,   198,   203,   206,   228,
     234,   233,   238,   239,   240,   241,   242,   244,   261,   247,
     245,   262,   246,   250,   248,   249,   251,   253,   263,   252,
     254,   264,   255,   256,   257,   265,   258,   277,   259,   260,
     275,   281,   282,   283,   284,   288,   287,   290,   315,   303,
     307,   316,   285,   286,   318,   321,   328,   322,   289,   324,
     325,   327,   330,   332,   291,   292,   295,   380,   296,   298,
      42,   299,   301,   302,   381,   339,   342,   308,   345,   176,
     355,   348,   351,   356,   357,   358,   382,   359,   276,   385,
     386,   387,   388,   383,   213,   219
};

static const yytype_uint16 yycheck[] =
{
       8,    28,     7,   272,    85,    11,    12,   249,     3,    91,
      31,     3,   281,     3,     3,     3,     0,     3,     4,    24,
      11,     7,    15,    56,     5,    58,    34,   108,    15,    10,
      11,    12,    15,     7,     5,    16,    42,    18,    44,    10,
      11,    12,     3,     4,    71,    16,   127,    18,    58,    76,
     292,    42,     3,     4,     5,     6,    33,    34,    23,    52,
      55,    48,    67,    55,    50,    55,    55,    55,    28,   150,
      53,    51,    53,    39,    40,    54,    56,    29,    86,    54,
      59,    58,    53,    89,    59,   354,   113,   169,     7,    50,
       5,   118,     7,    59,    99,    10,    11,    12,    13,    50,
     127,    16,   344,    18,    19,     5,    33,    34,    54,    24,
      25,    11,    27,    59,    15,    30,    16,     3,     4,     5,
       6,     7,    50,   150,    33,    34,     3,     4,     5,     6,
      50,    58,    32,     3,    20,    21,     7,     7,    53,     5,
       7,     5,    51,    20,    21,    11,    10,    11,    12,    56,
      16,    58,    16,    53,    18,     3,     4,     5,     6,     3,
       4,     5,     6,    49,    50,    54,    32,     7,   249,    54,
      59,   176,    49,    50,    59,    56,     5,    58,   259,     7,
      20,    21,    11,    22,    23,     7,    52,    16,    52,    51,
      29,    56,     7,    58,    56,   222,   223,   224,   225,   226,
     227,    49,    50,    32,     7,     7,    50,     5,     4,    50,
      13,     7,    10,    11,    12,    50,    19,     7,    16,    50,
      18,    24,    25,    13,    27,   252,   234,    30,   255,    19,
      35,    36,   259,    51,    24,    25,     7,    27,    56,    52,
      30,   372,    13,    59,   375,   376,   377,   378,    19,     7,
      53,    58,    51,    24,    25,    13,    27,    56,    58,    30,
      51,    19,    37,    53,   272,    56,    24,    25,     7,    27,
     278,    51,    30,   281,     6,     7,    56,     5,    56,     7,
      58,    52,    10,    11,    12,    13,     7,    56,    16,    58,
      18,    19,    13,    58,    52,    58,    24,    25,    19,    27,
     308,    58,    30,    24,    25,    58,    27,    33,    34,    30,
       3,     4,     5,     6,     7,    41,    42,    43,    44,    45,
      46,    33,    34,    58,     5,    51,     7,    41,    42,    41,
      42,    43,    44,    45,    46,   282,   283,   284,   285,   286,
     356,   357,   358,   359,     7,     5,   354,     7,    58,    41,
      42,    47,    48,    33,    34,    20,    21,    55,    56,    58,
      55,    56,     6,     7,    55,    56,    55,    56,    55,    56,
     140,   141,   229,   230,    58,   143,   144,    12,    11,    16,
       5,    32,    51,     7,     7,     7,     7,     7,     7,    51,
      51,    59,     7,     7,     7,     7,     7,    55,     5,    55,
      59,     5,    59,    55,    59,    59,    59,    55,     6,    59,
      59,     6,    59,    55,    59,    51,    59,     3,    59,    58,
      58,    51,    50,    50,    50,    54,    58,     5,     3,     6,
      26,     5,    50,    50,     3,     3,     6,     4,    54,     3,
       3,     3,     3,    14,    54,    54,    54,   372,    54,    54,
      10,    54,    54,    54,   375,    55,    55,   278,    55,    99,
      52,    55,    55,    52,    52,    52,   376,    52,   232,    53,
      53,    53,    53,   377,   145,   149
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    61,     7,     0,    58,    22,    23,    29,    62,
      65,    69,    90,    91,    15,    52,    66,    68,     5,    10,
      11,    12,    16,    18,    52,    70,    72,     7,    13,    19,
      24,    25,    27,    30,    52,    63,    64,   102,   103,   104,
     105,   109,    69,    62,    90,    62,    28,     7,    67,    68,
       7,    74,    83,     7,    78,    84,     7,    75,    81,     7,
      73,    80,     7,    76,    82,     7,    79,    71,    72,    39,
      40,    59,     3,     4,     5,     6,    50,   116,   117,   118,
     119,    50,    50,    50,    50,    50,   108,   109,    62,    90,
      62,    52,    92,    94,    95,    96,    97,    98,    99,    52,
      53,    68,    54,    59,    56,    58,    58,    54,    59,    56,
      58,    58,    54,    59,    56,    58,    58,    54,    59,    56,
      58,    58,    54,    59,    56,    58,    58,    59,    56,    58,
      53,    72,    58,    58,     3,   116,    58,    58,    58,   116,
      33,    34,    58,    35,    36,    37,     7,     5,     6,    49,
      50,   116,   120,   121,   122,   123,     3,     4,     5,     6,
       7,   114,   115,     7,   107,   120,    53,   109,    62,    93,
      94,    12,    11,    16,     5,    32,    71,     3,    55,     5,
       7,     7,     3,    55,     7,    20,    21,    77,   120,     7,
       3,    55,     7,   116,     7,     3,    55,   116,     7,     3,
      55,     6,     7,     7,   116,   120,     7,    58,    51,   117,
     117,   118,   118,   119,    51,    41,    42,    41,    42,   121,
     116,   120,    41,    42,    43,    44,    45,    46,    51,    47,
      48,    51,    56,    59,    51,   110,    53,    94,     7,     7,
       7,     7,     7,    53,    55,    59,    59,    55,    59,    59,
      55,    59,    59,    55,    59,    59,    55,    59,    59,    59,
      58,     5,     5,     6,     6,    51,   116,   116,   116,   116,
     116,   116,   111,   122,   122,    58,   115,     3,    52,   106,
     109,    51,    50,    50,    50,    50,    50,    58,    54,    54,
       5,    54,    54,    77,   120,    54,    54,   116,    54,    54,
     116,    54,    54,     6,   116,   120,   106,    26,   108,   106,
     114,   114,   114,   114,   114,     3,     5,    88,     3,    77,
      89,     3,     4,    86,     3,     3,    85,     3,     6,    87,
       3,    53,    14,   112,    51,    51,    51,    51,    51,    55,
      55,    56,    55,    55,    56,    55,    55,    56,    55,    55,
      56,    55,    55,    56,   113,    52,    52,    52,    52,    52,
       5,     7,     7,    77,     4,     7,     3,     7,     6,     7,
     106,    72,   100,   101,   109,   100,   100,   100,   100,   101,
     102,   103,   104,   105,    53,    53,    53,    53,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    61,    61,    61,    61,    62,    63,
      63,    64,    64,    64,    64,    65,    66,    66,    67,    67,
      68,    69,    70,    70,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    73,
      73,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    76,    76,    76,    76,    76,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    80,
      80,    80,    81,    81,    81,    82,    82,    82,    83,    83,
      83,    84,    84,    84,    85,    85,    85,    86,    86,    86,
      87,    87,    87,    88,    88,    88,    89,    89,    89,    91,
      90,    92,    92,    93,    93,    95,    94,    96,    94,    97,
      94,    98,    94,    99,    94,   100,   100,   101,   101,   102,
     103,   104,   105,   106,   106,   107,   108,   108,   109,   109,
     109,   109,   109,   110,   109,   111,   109,   109,   109,   112,
     113,   112,   114,   114,   115,   115,   115,   115,   115,   115,
     116,   116,   116,   117,   117,   117,   118,   118,   119,   119,
     119,   120,   120,   121,   121,   121,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     7,     6,     5,     6,     5,     2,     3,
       1,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       6,     2,     3,     1,     2,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     1,
       3,     5,     3,     3,     3,     1,     3,     5,     1,     3,
       3,     5,     3,     3,     3,     1,     1,     1,     5,     3,
       3,     1,     5,     3,     3,     5,     5,     3,     3,     4,
       7,     7,     4,     7,     7,     4,     7,     7,     4,     7,
       7,     4,     7,     7,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     0,
       3,     3,     1,     2,     1,     0,    10,     0,    10,     0,
      10,     0,    10,     0,     9,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     1,     5,     2,     1,     4,     3,
       3,     5,     5,     0,     7,     0,     6,     5,     1,     0,
       0,     3,     3,     1,     1,     1,     1,     1,     1,     0,
       3,     3,     1,     3,     3,     1,     3,     1,     1,     1,
       3,     1,     2,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3
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
#line 173 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : main ----------\n");}
#line 1655 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 174 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : type-var-functions-main ----------\n");}
#line 1661 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 175 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : var-functions-main ----------\n");}
#line 1667 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 176 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : functions-main ----------\n");}
#line 1673 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 177 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : type-var-main ----------\n");}
#line 1679 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 178 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : var-main ----------\n");}
#line 1685 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 197 "canlyse.y" /* yacc.c:1646  */
    {printf("Structure définie\n\n");}
#line 1691 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 212 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration d'entiers\n");}
#line 1697 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 214 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de caractères\n");}
#line 1703 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 216 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de réels\n");}
#line 1709 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 218 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de strings\n");}
#line 1715 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 221 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de booléens\n");}
#line 1721 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 223 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de constantes\n");}
#line 1727 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 227 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau d'entiers\n");}
#line 1733 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 229 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de réels\n");}
#line 1739 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 231 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de strings\n");}
#line 1745 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 233 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de caractères\n");}
#line 1751 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 235 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de booléens\n");}
#line 1757 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 246 "canlyse.y" /* yacc.c:1646  */
    {
   if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,1,"null",0);

    printf ("  ajout avec secuus ");
    affiche_dico();
   // afficher_tbq();

  }
 }
#line 1776 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 261 "canlyse.y" /* yacc.c:1646  */
    {   if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
     sprintf(str,"%s",(yyvsp[0].string));
    ajouter((yyvsp[-2].string),0,1,str,0);
    
    affiche_dico();
   // afficher_tbq();
  }
}
#line 1795 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 275 "canlyse.y" /* yacc.c:1646  */
    {
  if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,1,"null",0);
    affiche_dico();
  }
}
#line 1810 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 285 "canlyse.y" /* yacc.c:1646  */
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
     affiche_dico();
    afficher_tbq();

  }
}
#line 1832 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 381 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Functions ----------\n\n");}
#line 1838 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 387 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction int\n");}
#line 1844 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 387 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1850 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 388 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction double\n");}
#line 1856 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 388 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1862 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 389 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction string\n");}
#line 1868 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 389 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1874 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 390 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction char\n");}
#line 1880 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 390 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1886 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 391 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction void\n");}
#line 1892 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 391 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1898 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 405 "canlyse.y" /* yacc.c:1646  */
    {printf ("\nfooor devalartion");}
#line 1904 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 411 "canlyse.y" /* yacc.c:1646  */
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
       
     afficher_tbq();    
     affiche_dico();
      
    }
    else printf("\tERREUR : Erreur de semantique a la ligne %d. Type incompatible (type  conflict :!\n",line_count);
 
  }
    }
#line 1930 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 433 "canlyse.y" /* yacc.c:1646  */
    { 

   char str[20];
    sprintf(str,"%d",index_tbq);
     ajouter_quadruplet("+" , (yyvsp[-2].string) , 1,str);
 }
#line 1941 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 439 "canlyse.y" /* yacc.c:1646  */
    {
    char str[20];
    sprintf(str,"%d",index_tbq);
     ajouter_quadruplet("-" , (yyvsp[-2].string) , 1,str);
    }
#line 1951 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 444 "canlyse.y" /* yacc.c:1646  */
    { printf("READ \n"); }
#line 1957 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 445 "canlyse.y" /* yacc.c:1646  */
    {printf("WRITE \n"); }
#line 1963 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 447 "canlyse.y" /* yacc.c:1646  */
    {
  Lif=index_tbq;
  ajouter_quadruplet("bz","","","");
  }
#line 1972 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 452 "canlyse.y" /* yacc.c:1646  */
    {
  LWhile=index_tbq;
  ajouter_quadruplet("bz","","","");}
#line 1980 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 455 "canlyse.y" /* yacc.c:1646  */
    { 
  { 
    char str[20];
    sprintf(str,"%d",index_tbq);
    modifier_quadruplet(LWhile,"bz","","",str);
  }

}
#line 1993 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 463 "canlyse.y" /* yacc.c:1646  */
    { printf("FOR\n");}
#line 1999 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 464 "canlyse.y" /* yacc.c:1646  */
    {printf("Return\n");}
#line 2005 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 467 "canlyse.y" /* yacc.c:1646  */
    { printf("IF \n");
    char str[20];
    sprintf(str,"%d",index_tbq);
    modifier_quadruplet(Lif,"bne","","",str);
  }
#line 2015 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 473 "canlyse.y" /* yacc.c:1646  */
    {
    Lesle=index_tbq;
    ajouter_quadruplet("br","","","");
    char str[20];
    sprintf(str,"%d",index_tbq);
    modifier_quadruplet(Lif,"bz","","",str);
 
 }
#line 2028 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 480 "canlyse.y" /* yacc.c:1646  */
    {
    char str[20];
    sprintf(str,"%d",index_tbq);
    modifier_quadruplet(Lesle,"br","","",str);

 }
#line 2039 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 494 "canlyse.y" /* yacc.c:1646  */
    {
  	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	(yyval.string)=strdup(strcat(str,str_index));
    	ajouter_quadruplet("+",(yyvsp[-2].string),(yyvsp[0].string),(yyval.string));
    //	afficher_tbq();
   }
#line 2052 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 502 "canlyse.y" /* yacc.c:1646  */
    {
     	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	(yyval.string)=strdup(strcat(str,str_index));
    	ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),(yyval.string));
      }
#line 2064 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 509 "canlyse.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);}
#line 2070 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 512 "canlyse.y" /* yacc.c:1646  */
    {
    	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	(yyval.string)=strdup(strcat(str,str_index));
    	ajouter_quadruplet("*",(yyvsp[-2].string),(yyvsp[0].string),(yyval.string));
  
   }
#line 2083 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 520 "canlyse.y" /* yacc.c:1646  */
    { 
	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	(yyval.string)=strdup(strcat(str,str_index));
    	ajouter_quadruplet("/",(yyvsp[-2].string),(yyvsp[0].string),(yyval.string));
   }
#line 2095 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 527 "canlyse.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);
  }
#line 2102 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 531 "canlyse.y" /* yacc.c:1646  */
    {
      	char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	(yyval.string)=strdup(strcat(str,str_index));
      	ajouter_quadruplet("**",(yyvsp[-2].string),(yyvsp[0].string),(yyval.string));
     }
#line 2114 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 538 "canlyse.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);}
#line 2120 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 541 "canlyse.y" /* yacc.c:1646  */
    {
      char str[50];
      sprintf(str,"%f",(yyvsp[0].real));
       (yyval.string) = strdup(str);
      }
#line 2130 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 546 "canlyse.y" /* yacc.c:1646  */
    {
      char str[50];
      sprintf(str,"%d",(yyvsp[0].integer));
      (yyval.string) = strdup(str);
      }
#line 2140 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 551 "canlyse.y" /* yacc.c:1646  */
    {
      (yyval.string)=(yyvsp[-1].string);
      }
#line 2148 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 558 "canlyse.y" /* yacc.c:1646  */
    {
     (yyval.string) = (yyvsp[0].string); 
   printf(" the resuluts is %d ",(yyval.string) );
   }
#line 2157 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 561 "canlyse.y" /* yacc.c:1646  */
    {
          char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet(":=",(yyvsp[0].string),"",str);
}
#line 2169 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 570 "canlyse.y" /* yacc.c:1646  */
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
#line 2186 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 582 "canlyse.y" /* yacc.c:1646  */
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
#line 2203 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 594 "canlyse.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); 
   }
#line 2210 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 598 "canlyse.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);}
#line 2216 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 598 "canlyse.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[-1].string);}
#line 2222 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 601 "canlyse.y" /* yacc.c:1646  */
    { 
      char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].charecter),(yyvsp[0].charecter),str);
     }
#line 2234 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 608 "canlyse.y" /* yacc.c:1646  */
    { 
    char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2246 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 615 "canlyse.y" /* yacc.c:1646  */
    { 
    char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
    }
#line 2258 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 623 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].charecter),(yyvsp[0].charecter),str);
  }
#line 2270 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 630 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2282 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 637 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2294 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 645 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2306 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 652 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2318 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 659 "canlyse.y" /* yacc.c:1646  */
    {
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2330 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 666 "canlyse.y" /* yacc.c:1646  */
    { 
        char str_index[20];
  	sprintf(str_index,"%d",index_tbq);
  	char str[20]="r";
	  (yyval.string)=strdup(strcat(str,str_index));
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),str);
  }
#line 2342 "canlyse.tab.c" /* yacc.c:1646  */
    break;


#line 2346 "canlyse.tab.c" /* yacc.c:1646  */
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
#line 675 "canlyse.y" /* yacc.c:1906  */

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
