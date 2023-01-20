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















#line 150 "canlyse.tab.c" /* yacc.c:339  */

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
#line 106 "canlyse.y" /* yacc.c:355  */

  int integer;
  double real;
  char charecter ;
  char* string;
  

#line 258 "canlyse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CANLYSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 275 "canlyse.tab.c" /* yacc.c:358  */

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
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
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
       0,   169,   169,   170,   171,   172,   173,   174,   178,   179,
     179,   180,   181,   182,   183,   186,   187,   187,   189,   190,
     193,   197,   198,   198,   199,   200,   208,   210,   212,   214,
     217,   219,   223,   225,   227,   229,   231,   241,   256,   271,
     281,   305,   306,   307,   308,   309,   312,   313,   314,   315,
     316,   319,   320,   321,   322,   323,   325,   325,   326,   327,
     328,   329,   330,   331,   332,   335,   336,   337,   338,   341,
     342,   342,   344,   345,   345,   347,   348,   348,   350,   351,
     351,   353,   354,   354,   356,   357,   358,   360,   361,   362,
     364,   365,   366,   368,   369,   370,   372,   373,   374,   377,
     377,   378,   378,   380,   381,   383,   383,   384,   384,   385,
     385,   386,   386,   387,   387,   389,   390,   392,   392,   394,
     395,   396,   397,   400,   400,   401,   403,   404,   407,   470,
     471,   472,   473,   474,   476,   477,   478,   479,   483,   483,
     484,   484,   484,   484,   484,   484,   488,   495,   500,   504,
     509,   514,   519,   524,   527,   532,   537,   545,   547,   551,
     552,   553,   556,   556,   559,   563,   564,   570,   571,   572,
     574,   575,   576,   577
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
  "FORDecalartion", "instList", "inst", "ParmetersList", "Parmeter",
  "Expression", "Term", "Fact", "Fact2", "LogicExpression",
  "LogicExpression1", "LogicExpression2", "LogicExpression3", YY_NULLPTR
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

#define YYPACT_NINF -245

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-245)))

#define YYTABLE_NINF -114

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    32,    15,   -11,  -245,   109,     7,   129,   217,  -245,
      49,    63,    63,   118,   130,    90,  -245,  -245,   145,   159,
     177,   196,   211,   215,   203,  -245,  -245,    21,    47,   113,
     181,   198,   205,   208,   277,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,    63,  -245,    63,  -245,   137,   194,     1,  -245,
     120,   -13,   233,   150,    -1,   245,   151,    57,   268,   184,
     119,   292,   195,   127,   303,   309,   136,    18,  -245,   312,
     313,    29,   314,  -245,   315,   316,    29,   -16,   176,   332,
    -245,   368,   152,   305,   369,   152,   163,  -245,  -245,    63,
    -245,   175,  -245,  -245,   365,   367,   363,   375,   349,   203,
    -245,  -245,     3,   254,   376,  -245,  -245,     8,   115,   377,
    -245,  -245,     9,    17,   378,  -245,  -245,    10,    29,   379,
    -245,  -245,    11,    70,   380,  -245,  -245,   152,   381,  -245,
    -245,  -245,  -245,  -245,  -245,    41,  -245,  -245,  -245,   116,
      29,    29,  -245,    29,    29,    29,   331,   280,   283,   156,
     152,   286,   338,   295,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,   201,  -245,   333,   339,   340,  -245,  -245,  -245,   101,
    -245,   386,   387,   388,   389,   390,    98,   343,   341,  -245,
    -245,   342,   344,   345,  -245,  -245,  -245,  -245,  -245,   346,
     347,   348,  -245,   311,   350,   351,   352,   311,   354,   355,
     356,  -245,  -245,   357,   286,  -245,   358,  -245,  -245,   176,
     176,   332,   332,  -245,   360,   398,   403,   406,   408,   295,
     272,   370,    29,    29,    29,    29,    29,    29,   226,   156,
     156,   361,   305,   417,   226,   226,  -245,  -245,   372,   373,
     374,   382,   383,   371,   384,   385,   420,   391,   392,   123,
     393,   394,    29,   395,   396,    29,   397,   399,   421,   152,
    -245,  -245,  -245,  -245,  -245,  -245,   311,   311,   311,   311,
     311,   311,   277,  -245,  -245,  -245,  -245,  -245,  -245,   400,
    -245,   414,   305,   305,   305,   305,   305,  -245,   427,   426,
    -245,   431,   326,  -245,  -245,   432,   433,   311,   437,   438,
     311,   439,   430,  -245,   286,  -245,   210,   440,   226,   219,
     221,   225,   241,   243,   401,  -245,   293,   402,  -245,   296,
     404,  -245,   298,   405,  -245,   300,   407,  -245,   302,  -245,
    -245,  -245,   409,   411,   412,   413,   415,  -245,  -245,   288,
    -245,  -245,   104,  -245,  -245,    66,  -245,  -245,    34,  -245,
    -245,   353,   255,   255,   255,   255,   255,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,   255,  -245,
    -245,   255,   255,   255,    77,  -245,   416,   418,   419,   422,
    -245,  -245,  -245,  -245,  -245
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    99,     0,     0,     0,     2,
       0,    99,     0,     0,     0,     0,    15,    17,     0,     0,
       0,     0,     0,     0,     0,    21,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     8,   137,    11,    12,    13,
      14,    10,    99,     7,     0,     5,   105,     0,     0,    19,
      45,     0,     0,    61,     0,     0,    48,     0,     0,    39,
       0,     0,    55,     0,     0,     0,     0,     0,    25,     0,
       0,     0,   155,   154,     0,     0,     0,     0,   148,   151,
     153,     0,     0,   145,     0,     0,     0,   127,     6,     0,
       4,   105,   100,   102,     0,     0,     0,     0,     0,     0,
      16,    18,     0,     0,     0,    27,    35,     0,     0,     0,
      30,    36,     0,     0,     0,    28,    33,     0,     0,     0,
      26,    32,     0,     0,     0,    29,    34,     0,     0,    31,
      22,    24,   129,   130,   155,     0,   119,   122,   121,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,   161,   162,   140,   142,   143,   141,
     144,     0,   139,     0,     0,     0,     9,   126,     3,   105,
     104,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,    42,     0,     0,    64,    56,    57,    60,    63,    59,
       0,     0,    50,    49,    46,     0,     0,    40,    37,     0,
       0,    53,    54,    52,    67,    68,     0,   128,   156,   146,
     147,   149,   150,   152,     0,     0,     0,     0,     0,   158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,     0,   101,   103,     0,     0,
       0,     0,     0,     0,    78,     0,     0,    81,     0,     0,
      72,     0,     0,    69,     0,     0,    75,     0,     0,     0,
     131,   164,   167,   165,   168,   163,   166,   169,   172,   170,
     173,   171,     0,   135,   124,   159,   160,   132,   138,     0,
     136,   133,   145,   145,   145,   145,   145,    20,     0,     0,
      41,     0,     0,    58,    62,     0,     0,    47,     0,     0,
      38,     0,     0,    51,    66,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,     0,    98,     0,
       0,    89,     0,     0,    86,     0,     0,    92,     0,   123,
     125,   134,     0,     0,     0,     0,     0,    80,    79,     0,
      83,    82,     0,    74,    73,     0,    71,    70,     0,    77,
      76,     0,     0,     0,     0,     0,     0,    93,    94,    97,
      96,    87,    88,    84,    85,    90,    91,   118,     0,   116,
     117,     0,     0,     0,     0,   115,    11,    12,    13,    14,
     114,   106,   108,   110,   112
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -245,  -245,    -4,  -245,  -245,  -245,  -245,  -245,    20,   434,
    -245,   359,    -5,  -245,  -245,  -245,  -245,  -244,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
      14,  -245,  -245,  -245,   -88,  -245,  -245,  -245,  -245,  -245,
     -15,   -85,    84,    83,    94,    82,  -225,  -245,   202,    -8,
      51,   236,   -27,   222,   223,   325,   -81,   324,   135,  -245
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    35,    36,    10,    16,    48,    17,    11,
      25,    67,   367,    60,    51,    57,    63,   187,    54,    66,
      61,    58,    64,    52,    55,   325,   322,   328,   316,   319,
      12,    13,    92,   169,    93,    94,    95,    96,    97,    98,
     368,   369,    37,    38,    39,    40,   273,   164,    86,   370,
     161,   162,   151,    78,    79,    80,   152,   153,   154,   155
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    77,    26,   170,   165,   293,   177,    43,    45,   280,
     281,   182,   190,   195,   199,     4,    14,   140,   141,    68,
     134,    73,    14,    18,   192,    44,    87,   188,    19,    20,
      21,     1,   134,    73,    22,    49,    23,   363,    88,     3,
      90,   364,   142,   104,   135,   105,   205,     5,   318,   139,
      72,    73,    74,    75,   100,   109,    89,   110,   178,    15,
      69,    70,   131,   183,   191,   196,   200,    76,   101,   221,
     361,   130,     7,   362,   140,   141,   201,   202,   167,    76,
      71,   237,    18,   331,    27,   168,   193,    19,    20,    21,
      28,   197,     8,    22,    68,    23,    29,    76,   360,   207,
     204,    30,    31,    18,    32,    14,  -111,    33,    19,    20,
      21,   359,  -107,   114,    22,   115,    23,  -109,   134,    73,
     147,   148,   184,   220,   185,   186,   134,    73,   147,   148,
     380,     6,     7,  -113,    18,   185,   186,    47,     8,    19,
      20,    21,  -111,   185,   186,    22,    46,    23,  -107,   140,
     141,   243,    50,  -109,   236,   134,    73,   147,   148,   134,
      73,   147,   148,    81,   149,   150,    53,   208,   294,  -113,
      27,   131,   149,   150,   102,   119,    28,   120,   305,   103,
    -111,    24,    29,   124,    56,   125,  -107,    30,    31,    91,
      32,  -109,   128,    33,   129,   266,   267,   268,   269,   270,
     271,   149,   150,    59,   107,   112,   150,  -113,    18,   108,
     113,   143,   144,    19,    20,    21,   166,    27,    62,    22,
     274,    23,    65,    28,    27,   297,   274,   274,   300,    29,
      28,    82,   304,    27,    30,    31,    29,    32,   117,    28,
      33,    30,    31,   118,    32,    29,    99,    33,    83,   122,
      30,    31,   231,    32,   123,    84,    33,   232,    85,   179,
      18,   180,    27,   329,    87,    19,    20,    21,    28,    34,
     332,    22,   333,    23,    29,   232,   334,   232,   272,    30,
      31,   232,    32,   375,    27,    33,   375,   375,   375,   375,
      28,   106,   335,   357,   336,   358,    29,   232,   167,   232,
     274,    30,    31,   111,    32,   140,   141,    33,   156,   157,
     158,   159,   160,   222,   223,   224,   225,   226,   227,   140,
     141,   215,   216,   208,   217,   218,   116,   222,   223,   224,
     225,   226,   227,   309,   310,   311,   312,   313,   371,   372,
     373,   374,   229,   230,   140,   141,   185,   186,   338,   339,
     121,   341,   342,   344,   345,   347,   348,   350,   351,   365,
     366,   126,   209,   210,   275,   276,   211,   212,   127,   145,
     132,   133,   136,   137,   138,   146,   163,   171,   172,   173,
     174,   175,   214,   181,   189,   194,   198,   203,   206,   228,
     234,   235,   233,   238,   239,   240,   241,   242,   244,   247,
     245,   246,   250,   261,   248,   249,   253,   251,   262,   252,
     256,   254,   263,   255,   264,   257,   258,   259,   260,   277,
     279,   265,   282,   283,   284,   290,   307,   303,   308,   287,
     314,   315,   285,   286,   317,   320,   327,   321,   288,   289,
     323,   324,   326,   330,    42,   291,   292,   295,   296,   298,
     299,   301,   376,   302,   377,   379,   337,   340,   176,   343,
     346,   352,   349,   353,   354,   355,   378,   356,   278,   381,
     213,   382,   383,   219,   306,   384
};

static const yytype_uint16 yycheck[] =
{
       8,    28,     7,    91,    85,   249,     3,    11,    12,   234,
     235,     3,     3,     3,     3,     0,    15,    33,    34,    24,
       3,     4,    15,     5,     7,    11,    34,   108,    10,    11,
      12,    31,     3,     4,    16,    15,    18,     3,    42,     7,
      44,     7,    58,    56,    71,    58,   127,    58,   292,    76,
       3,     4,     5,     6,    53,    56,    42,    58,    55,    52,
      39,    40,    67,    55,    55,    55,    55,    50,    48,   150,
       4,    53,    23,     7,    33,    34,     6,     7,    86,    50,
      59,   169,     5,   308,     7,    89,   113,    10,    11,    12,
      13,   118,    29,    16,    99,    18,    19,    50,   342,    58,
     127,    24,    25,     5,    27,    15,     5,    30,    10,    11,
      12,     7,    11,    56,    16,    58,    18,    16,     3,     4,
       5,     6,     7,   150,    20,    21,     3,     4,     5,     6,
      53,    22,    23,    32,     5,    20,    21,     7,    29,    10,
      11,    12,     5,    20,    21,    16,    28,    18,    11,    33,
      34,    53,     7,    16,    53,     3,     4,     5,     6,     3,
       4,     5,     6,    50,    49,    50,     7,    51,   249,    32,
       7,   176,    49,    50,    54,    56,    13,    58,   259,    59,
       5,    52,    19,    56,     7,    58,    11,    24,    25,    52,
      27,    16,    56,    30,    58,   222,   223,   224,   225,   226,
     227,    49,    50,     7,    54,    54,    50,    32,     5,    59,
      59,    35,    36,    10,    11,    12,    53,     7,     7,    16,
     228,    18,     7,    13,     7,   252,   234,   235,   255,    19,
      13,    50,   259,     7,    24,    25,    19,    27,    54,    13,
      30,    24,    25,    59,    27,    19,    52,    30,    50,    54,
      24,    25,    51,    27,    59,    50,    30,    56,    50,     5,
       5,     7,     7,    53,   272,    10,    11,    12,    13,    52,
      51,    16,    51,    18,    19,    56,    51,    56,    52,    24,
      25,    56,    27,   368,     7,    30,   371,   372,   373,   374,
      13,    58,    51,     5,    51,     7,    19,    56,   306,    56,
     308,    24,    25,    58,    27,    33,    34,    30,     3,     4,
       5,     6,     7,    41,    42,    43,    44,    45,    46,    33,
      34,    41,    42,    51,    41,    42,    58,    41,    42,    43,
      44,    45,    46,   282,   283,   284,   285,   286,   353,   354,
     355,   356,    47,    48,    33,    34,    20,    21,    55,    56,
      58,    55,    56,    55,    56,    55,    56,    55,    56,     6,
       7,    58,   140,   141,   229,   230,   143,   144,    59,    37,
      58,    58,    58,    58,    58,     7,     7,    12,    11,    16,
       5,    32,    51,     7,     7,     7,     7,     7,     7,    51,
      51,    51,    59,     7,     7,     7,     7,     7,    55,    55,
      59,    59,    55,     5,    59,    59,    55,    59,     5,    59,
      55,    59,     6,    59,     6,    59,    59,    59,    58,    58,
       3,    51,    50,    50,    50,     5,    26,     6,    14,    58,
       3,     5,    50,    50,     3,     3,     6,     4,    54,    54,
       3,     3,     3,     3,    10,    54,    54,    54,    54,    54,
      54,    54,   368,    54,   371,   373,    55,    55,    99,    55,
      55,    52,    55,    52,    52,    52,   372,    52,   232,    53,
     145,    53,    53,   149,   272,    53
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
      40,    59,     3,     4,     5,     6,    50,   112,   113,   114,
     115,    50,    50,    50,    50,    50,   108,   109,    62,    90,
      62,    52,    92,    94,    95,    96,    97,    98,    99,    52,
      53,    68,    54,    59,    56,    58,    58,    54,    59,    56,
      58,    58,    54,    59,    56,    58,    58,    54,    59,    56,
      58,    58,    54,    59,    56,    58,    58,    59,    56,    58,
      53,    72,    58,    58,     3,   112,    58,    58,    58,   112,
      33,    34,    58,    35,    36,    37,     7,     5,     6,    49,
      50,   112,   116,   117,   118,   119,     3,     4,     5,     6,
       7,   110,   111,     7,   107,   116,    53,   109,    62,    93,
      94,    12,    11,    16,     5,    32,    71,     3,    55,     5,
       7,     7,     3,    55,     7,    20,    21,    77,   116,     7,
       3,    55,     7,   112,     7,     3,    55,   112,     7,     3,
      55,     6,     7,     7,   112,   116,     7,    58,    51,   113,
     113,   114,   114,   115,    51,    41,    42,    41,    42,   117,
     112,   116,    41,    42,    43,    44,    45,    46,    51,    47,
      48,    51,    56,    59,    51,    51,    53,    94,     7,     7,
       7,     7,     7,    53,    55,    59,    59,    55,    59,    59,
      55,    59,    59,    55,    59,    59,    55,    59,    59,    59,
      58,     5,     5,     6,     6,    51,   112,   112,   112,   112,
     112,   112,    52,   106,   109,   118,   118,    58,   111,     3,
     106,   106,    50,    50,    50,    50,    50,    58,    54,    54,
       5,    54,    54,    77,   116,    54,    54,   112,    54,    54,
     112,    54,    54,     6,   112,   116,   108,    26,    14,   110,
     110,   110,   110,   110,     3,     5,    88,     3,    77,    89,
       3,     4,    86,     3,     3,    85,     3,     6,    87,    53,
       3,   106,    51,    51,    51,    51,    51,    55,    55,    56,
      55,    55,    56,    55,    55,    56,    55,    55,    56,    55,
      55,    56,    52,    52,    52,    52,    52,     5,     7,     7,
      77,     4,     7,     3,     7,     6,     7,    72,   100,   101,
     109,   100,   100,   100,   100,   101,   102,   103,   104,   105,
      53,    53,    53,    53,    53
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
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   112,   112,   112,   113,
     113,   113,   114,   114,   115,   115,   115,   116,   116,   117,
     117,   117,   118,   118,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119
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
       3,     5,     5,     5,     7,     5,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     0,     3,     3,     1,     3,
       3,     1,     3,     1,     1,     1,     3,     1,     2,     3,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3
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
#line 169 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : main ----------\n");}
#line 1648 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 170 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : type-var-functions-main ----------\n");}
#line 1654 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 171 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : var-functions-main ----------\n");}
#line 1660 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 172 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : functions-main ----------\n");}
#line 1666 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 173 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : type-var-main ----------\n");}
#line 1672 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 174 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : var-main ----------\n");}
#line 1678 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 193 "canlyse.y" /* yacc.c:1646  */
    {printf("Structure définie\n\n");}
#line 1684 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 208 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration d'entiers\n");}
#line 1690 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 210 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de caractères\n");}
#line 1696 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 212 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de réels\n");}
#line 1702 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 214 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de strings\n");}
#line 1708 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 217 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de booléens\n");}
#line 1714 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 219 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de constantes\n");}
#line 1720 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 223 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau d'entiers\n");}
#line 1726 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 225 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de réels\n");}
#line 1732 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 227 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de strings\n");}
#line 1738 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 229 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de caractères\n");}
#line 1744 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 231 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de booléens\n");}
#line 1750 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 242 "canlyse.y" /* yacc.c:1646  */
    {
   if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,1,"null",0);

    printf ("  ajout avec secuus ");
    affiche_dico();
    afficher_tbq();

  }
 }
#line 1769 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 257 "canlyse.y" /* yacc.c:1646  */
    {   if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
     sprintf(str,"%s",(yyvsp[0].string));
    ajouter((yyvsp[-2].string),0,1,str,0);
    
    affiche_dico();
    afficher_tbq();
  }
}
#line 1788 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 271 "canlyse.y" /* yacc.c:1646  */
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
#line 1803 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 281 "canlyse.y" /* yacc.c:1646  */
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
#line 1825 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 377 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Functions ----------\n\n");}
#line 1831 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 383 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction int\n");}
#line 1837 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 383 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1843 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 384 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction double\n");}
#line 1849 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 384 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1855 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 385 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction string\n");}
#line 1861 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 385 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1867 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 386 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction char\n");}
#line 1873 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 386 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1879 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 387 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction void\n");}
#line 1885 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 387 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1891 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 401 "canlyse.y" /* yacc.c:1646  */
    {printf ("\nfooor devalartion");}
#line 1897 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 407 "canlyse.y" /* yacc.c:1646  */
    { 
   


  if (recherche((yyvsp[-3].string)) ==NULL) {
    printf (" variable non decalrie");
  }
  else { 
    desc_identif* var  =  recherche((yyvsp[-3].string)) ;
    if (var->type == 2){

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
#line 1931 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 470 "canlyse.y" /* yacc.c:1646  */
    { printf("Inc\n "); }
#line 1937 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 471 "canlyse.y" /* yacc.c:1646  */
    { printf("Dec\n "); }
#line 1943 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 472 "canlyse.y" /* yacc.c:1646  */
    { printf("READ \n"); }
#line 1949 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 473 "canlyse.y" /* yacc.c:1646  */
    {printf("WRITE \n"); }
#line 1955 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 475 "canlyse.y" /* yacc.c:1646  */
    { printf("IF \n"); }
#line 1961 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 476 "canlyse.y" /* yacc.c:1646  */
    {printf("IF ELSE \n");}
#line 1967 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 477 "canlyse.y" /* yacc.c:1646  */
    { printf("WHILE \n") ;}
#line 1973 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 478 "canlyse.y" /* yacc.c:1646  */
    { printf("FOR\n");}
#line 1979 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 479 "canlyse.y" /* yacc.c:1646  */
    {printf("Return\n");}
#line 1985 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 488 "canlyse.y" /* yacc.c:1646  */
    {
    (yyval.string)="r";
    ajouter_quadruplet("+",(yyvsp[-2].string),(yyvsp[0].string),"r");
    printf("|%s,------,%s|",(yyvsp[-2].string),(yyvsp[0].string));
    afficher_tbq();

   }
#line 1997 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 495 "canlyse.y" /* yacc.c:1646  */
    {
     (yyval.string)="r";
    ajouter_quadruplet("-",(yyvsp[-2].string),(yyvsp[0].string),"r");

      }
#line 2007 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 500 "canlyse.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);
  printf("/n term: %s ",(yyval.string));}
#line 2014 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 504 "canlyse.y" /* yacc.c:1646  */
    {
    (yyval.string)="r";
    ajouter_quadruplet("*",(yyvsp[-2].string),(yyvsp[0].string),"r");
  
   }
#line 2024 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 509 "canlyse.y" /* yacc.c:1646  */
    { 
    (yyval.string)= "r";
    ajouter_quadruplet("/",(yyvsp[-2].string),(yyvsp[0].string),"r");

   }
#line 2034 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 514 "canlyse.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);
  
  }
#line 2042 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 519 "canlyse.y" /* yacc.c:1646  */
    {
      (yyval.string)="r"; 
      ajouter_quadruplet("**",(yyvsp[-2].string),(yyvsp[0].string),"r");

     }
#line 2052 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 524 "canlyse.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);}
#line 2058 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 527 "canlyse.y" /* yacc.c:1646  */
    {
      char str[50];
      sprintf(str,"%f",(yyvsp[0].real));
       (yyval.string) = str;
      }
#line 2068 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 532 "canlyse.y" /* yacc.c:1646  */
    {
      char str[50];
      sprintf(str,"%d",(yyvsp[0].integer));
       (yyval.string) = str;
      }
#line 2078 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 537 "canlyse.y" /* yacc.c:1646  */
    {
      (yyval.string)=(yyvsp[-1].string);
      }
#line 2086 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 545 "canlyse.y" /* yacc.c:1646  */
    {
     (yyval.integer) = (yyvsp[0].integer); 
   printf(" the resuluts is %d ",(yyval.integer) );}
#line 2094 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 547 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer) = 1-(yyvsp[0].integer); 
    printf(" the resuluts is ------------------ %d ",(yyval.integer) );}
#line 2101 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 551 "canlyse.y" /* yacc.c:1646  */
    {  if (((yyvsp[-2].integer)==1) && ((yyvsp[0].integer)==1)) {(yyval.integer)=1;} else (yyval.integer)=0;   }
#line 2107 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 552 "canlyse.y" /* yacc.c:1646  */
    {  if (((yyvsp[-2].integer)==0) && ((yyvsp[0].integer)==0)) {(yyval.integer)=0;} else (yyval.integer)=1 ;}
#line 2113 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 553 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[0].integer);  }
#line 2119 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 556 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[0].integer);}
#line 2125 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 556 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-1].integer);}
#line 2131 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 559 "canlyse.y" /* yacc.c:1646  */
    { 
    if ((yyvsp[-2].charecter) == (yyvsp[0].charecter) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;
    // ajouter_quadruplet(""); 
     }
#line 2140 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 563 "canlyse.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].string) == (yyvsp[0].string) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2146 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 564 "canlyse.y" /* yacc.c:1646  */
    { 
    //ajouter_quadruplet("-",$1,$2,"r"+index_tbq);


    }
#line 2156 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 570 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].charecter) != (yyvsp[0].charecter) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2162 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 571 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].string) != (yyvsp[0].string) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2168 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 572 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].string) != (yyvsp[0].string) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2174 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 574 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].string) < (yyvsp[0].string) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2180 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 575 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].string) <= (yyvsp[0].string) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2186 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 576 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].string) > (yyvsp[0].string) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2192 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 577 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].string) >= (yyvsp[0].string) ) (yyval.integer) = 1;  else (yyval.integer) = 0 ;}
#line 2198 "canlyse.tab.c" /* yacc.c:1646  */
    break;


#line 2202 "canlyse.tab.c" /* yacc.c:1646  */
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
#line 580 "canlyse.y" /* yacc.c:1906  */

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
