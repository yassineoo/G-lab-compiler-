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
	
	















#line 133 "canlyse.tab.c" /* yacc.c:339  */

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
#line 89 "canlyse.y" /* yacc.c:355  */

  int integer;
  double real;
  char charecter ;
  char *string;
  

#line 241 "canlyse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CANLYSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 258 "canlyse.tab.c" /* yacc.c:358  */

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
#define YYLAST   529

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  191
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  421

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
       0,   156,   156,   157,   158,   159,   160,   161,   165,   166,
     166,   167,   168,   169,   170,   173,   174,   174,   176,   177,
     180,   184,   185,   185,   186,   187,   195,   197,   199,   201,
     204,   206,   210,   212,   214,   216,   218,   228,   241,   254,
     264,   284,   285,   286,   287,   288,   291,   292,   293,   294,
     295,   298,   299,   300,   301,   302,   304,   304,   305,   306,
     307,   308,   309,   310,   311,   314,   315,   316,   317,   318,
     321,   322,   322,   324,   325,   325,   327,   328,   328,   330,
     331,   331,   333,   334,   334,   336,   337,   338,   340,   341,
     342,   344,   345,   346,   348,   349,   350,   352,   353,   354,
     357,   357,   358,   358,   360,   361,   363,   363,   364,   364,
     365,   365,   366,   366,   367,   367,   369,   370,   372,   372,
     374,   375,   376,   377,   380,   380,   381,   383,   384,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     401,   401,   402,   402,   402,   402,   402,   402,   406,   407,
     408,   410,   411,   412,   414,   415,   417,   418,   422,   423,
     424,   426,   427,   428,   430,   431,   432,   434,   435,   438,
     440,   444,   445,   446,   449,   449,   452,   453,   454,   455,
     457,   458,   459,   460,   462,   463,   464,   465,   466,   467,
     468,   469
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
  "Expression", "Term", "Fact", "Fact2", "IntExpression", "IntTerm",
  "IntFact", "IntFact2", "LogicExpression", "LogicExpression1",
  "LogicExpression2", "LogicExpression3", YY_NULLPTR
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

#define YYPACT_NINF -277

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-277)))

#define YYTABLE_NINF -115

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,    28,    47,     1,  -277,    52,    43,   150,   254,  -277,
      54,    58,    58,    55,    96,    92,  -277,  -277,   109,   149,
     178,   192,   204,   218,   285,  -277,  -277,    70,   133,    90,
     210,   226,   230,   248,   292,  -277,  -277,  -277,  -277,  -277,
    -277,  -277,    58,  -277,    58,  -277,   164,   121,     4,  -277,
     -34,   -25,   174,   111,   191,   181,   113,   216,   250,   120,
     231,   266,   122,   246,   279,   209,   267,    18,  -277,   288,
     305,    38,  -277,  -277,   345,   368,    38,    60,    88,   291,
    -277,    64,   315,   180,  -277,   376,    50,   375,   420,    50,
     182,  -277,  -277,    58,  -277,   166,  -277,  -277,   418,   421,
     415,   428,   402,   285,  -277,  -277,     6,   328,   429,  -277,
    -277,     7,   138,   430,  -277,  -277,    11,    65,   431,  -277,
    -277,    12,    10,   432,  -277,  -277,    13,   287,   433,  -277,
    -277,    50,   434,  -277,  -277,  -277,  -277,  -277,    99,   157,
    -277,  -277,   200,   203,    20,    20,  -277,    20,    20,    20,
      10,    10,  -277,    10,    10,    10,    10,   384,   319,   352,
     147,    50,   325,   331,   391,   348,  -277,  -277,  -277,  -277,
    -277,  -277,  -277,   152,  -277,   385,   392,   394,  -277,  -277,
    -277,    32,  -277,   439,   440,   441,   442,   443,    68,   396,
     393,  -277,  -277,   395,   398,   397,  -277,  -277,  -277,  -277,
    -277,   399,   400,   401,  -277,    20,   364,   403,   404,   405,
      10,   366,   406,   411,   409,  -277,  -277,   410,   325,   331,
    -277,   412,  -277,  -277,  -277,  -277,    88,    88,   291,   291,
    -277,   315,   315,   180,   180,  -277,  -277,   414,   452,   456,
     457,   461,   348,   297,   311,   419,    20,    20,    20,    20,
      20,    20,    10,    10,    10,    10,    10,    10,   258,   147,
     147,   416,   375,   470,   258,   258,  -277,  -277,   425,   426,
     427,   435,   436,   422,   424,   437,   474,   438,   444,   143,
     445,   446,    20,   447,   448,    10,   449,   450,   475,    50,
    -277,  -277,  -277,  -277,  -277,  -277,   364,   364,   364,   364,
     364,   364,   366,   366,   366,   366,   366,   366,   292,  -277,
    -277,  -277,  -277,  -277,  -277,   458,  -277,   468,   375,   375,
     375,   375,   375,  -277,   480,   482,  -277,   485,   381,  -277,
    -277,   486,   489,   364,   487,   491,   366,   492,   490,  -277,
     325,  -277,   239,   494,   258,   154,   189,   197,   219,   235,
     451,  -277,   349,   453,  -277,   351,   454,  -277,   353,   455,
    -277,   355,   459,  -277,   357,  -277,  -277,  -277,   460,   463,
     464,   465,   466,  -277,  -277,   342,  -277,  -277,   193,  -277,
    -277,   123,  -277,  -277,    14,  -277,  -277,   408,   302,   302,
     302,   302,   302,  -277,  -277,  -277,  -277,  -277,  -277,  -277,
    -277,  -277,  -277,  -277,   302,  -277,  -277,   302,   302,   302,
     101,  -277,   467,   469,   471,   472,  -277,  -277,  -277,  -277,
    -277
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,   100,     0,     0,     0,     2,
       0,   100,     0,     0,     0,     0,    15,    17,     0,     0,
       0,     0,     0,     0,     0,    21,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     8,   139,    11,    12,    13,
      14,    10,   100,     7,     0,     5,   106,     0,     0,    19,
      45,     0,     0,    61,     0,     0,    48,     0,     0,    39,
       0,     0,    55,     0,     0,     0,     0,     0,    25,     0,
       0,     0,   167,   156,     0,     0,     0,     0,   150,   153,
     155,     0,   160,   163,   166,     0,     0,   147,     0,     0,
       0,   128,     6,     0,     4,   106,   101,   103,     0,     0,
       0,     0,     0,     0,    16,    18,     0,     0,     0,    27,
      35,     0,     0,     0,    30,    36,     0,     0,     0,    28,
      33,     0,     0,     0,    26,    32,     0,     0,     0,    29,
      34,     0,     0,    31,    22,    24,   131,   132,     0,     0,
     123,   122,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   173,   174,   142,   144,
     145,   143,   146,     0,   141,     0,     0,     0,     9,   127,
       3,   106,   105,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,    42,     0,     0,    64,    56,    57,    60,
      63,    59,     0,     0,    50,     0,    49,    46,     0,     0,
       0,    40,    37,     0,     0,    53,    54,    52,    67,    68,
      69,     0,   129,   130,   157,   168,   148,   149,   151,   152,
     154,   158,   159,   161,   162,   164,   165,     0,     0,     0,
       0,     0,   170,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,     0,     0,     0,   102,   104,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    82,     0,     0,
      73,     0,     0,    70,     0,     0,    76,     0,     0,     0,
     133,   176,   180,   177,   181,   175,   178,   182,   186,   184,
     187,   185,   179,   183,   190,   188,   191,   189,     0,   137,
     125,   171,   172,   134,   140,     0,   138,   135,   147,   147,
     147,   147,   147,    20,     0,     0,    41,     0,     0,    58,
      62,     0,     0,    47,     0,     0,    38,     0,     0,    51,
      66,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,     0,    99,     0,     0,    90,     0,     0,
      87,     0,     0,    93,     0,   124,   126,   136,     0,     0,
       0,     0,     0,    81,    80,     0,    84,    83,     0,    75,
      74,     0,    72,    71,     0,    78,    77,     0,     0,     0,
       0,     0,     0,    94,    95,    98,    97,    88,    89,    85,
      86,    91,    92,   119,     0,   117,   118,     0,     0,     0,
       0,   116,    11,    12,    13,    14,   115,   107,   109,   111,
     113
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -277,  -277,    -4,  -277,  -277,  -277,  -277,  -277,     3,   495,
    -277,   423,    -2,  -277,  -277,  -277,  -277,  -276,  -277,  -277,
    -277,  -277,  -277,  -277,  -277,  -277,  -277,  -277,  -277,  -277,
      21,  -277,  -277,  -277,   -89,  -277,  -277,  -277,  -277,  -277,
       0,  -166,   103,   104,   105,   110,  -253,  -277,   213,    -8,
      66,   261,   -27,   272,   271,   378,   -26,   270,   269,   273,
     -85,   369,   165,  -277
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    35,    36,    10,    16,    48,    17,    11,
      25,    67,   403,    60,    51,    57,    63,   199,    54,    66,
      61,    58,    64,    52,    55,   361,   358,   364,   352,   355,
      12,    13,    96,   181,    97,    98,    99,   100,   101,   102,
     404,   405,    37,    38,    39,    40,   309,   176,    90,   406,
     173,   174,   162,    78,    79,    80,   163,    82,    83,    84,
     164,   165,   166,   167
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    77,    81,   329,   177,    26,   182,    43,    45,   189,
     194,   316,   317,    72,   202,   208,   213,   399,    49,    14,
     106,   400,    68,    18,    73,   107,    91,   200,    19,    20,
      21,   108,    44,   109,    22,     3,    23,  -112,    92,     1,
      94,    72,    73,  -108,   138,   139,   220,     4,  -110,   142,
     143,   105,   354,    72,    73,   158,   159,   104,    14,     5,
     210,   190,   195,    93,  -114,   135,   203,   209,   214,    73,
     205,   134,   204,    18,     6,     7,   245,     7,    19,    20,
      21,     8,   179,    46,    22,   266,    23,     8,    76,   180,
     206,   367,   267,   144,   145,    15,   211,   150,   151,   160,
     161,    68,   396,    47,   218,   219,    18,    14,    27,    69,
      70,    19,    20,    21,    28,   205,    50,    22,   146,    23,
      29,   273,   152,   147,   148,    30,    31,   397,    32,    71,
     398,    33,   144,   145,   243,   244,    72,    73,    74,    75,
      85,    72,    73,   158,   159,   196,    72,    73,   158,   159,
      72,    73,   158,   159,   416,    18,    53,   222,   197,   198,
      19,    20,    21,   197,   198,   111,    22,   116,    23,  -112,
     112,  -112,   117,   103,   121,  -108,   126,  -108,   142,   122,
    -110,   127,  -110,    76,   143,    56,   135,   160,   161,    27,
     150,   151,   160,   161,   330,    28,  -114,   161,  -114,    59,
     395,    29,    24,   261,   341,   368,    30,    31,   262,    32,
     262,    62,    33,   197,   198,   223,    95,   155,   156,   296,
     297,   298,   299,   300,   301,    65,   302,   303,   304,   305,
     306,   307,   110,   144,   145,   178,   150,   151,   411,   115,
     369,   411,   411,   411,   411,   262,    27,   113,   370,   114,
     310,   224,    28,   262,   225,   333,   310,   310,    29,   336,
      86,    27,   340,    30,    31,    27,    32,    28,   131,    33,
     371,    28,   118,    29,   119,   262,    87,    29,    30,    31,
      88,    32,    30,    31,    33,    32,   372,   123,    33,   124,
      18,   262,   365,   215,   216,    19,    20,    21,    89,    27,
      91,    22,   128,    23,   129,    28,    34,    18,   120,    27,
     308,    29,    19,    20,    21,    28,    30,    31,    22,    32,
      23,    29,    33,   132,   125,   133,    30,    31,   149,    32,
     144,   145,    33,   191,   179,   192,   310,   130,   246,   247,
     248,   249,   250,   251,   150,   151,   136,   393,   224,   394,
     153,   154,   252,   253,   254,   255,   256,   257,   144,   145,
     238,   239,   225,   137,   150,   151,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   168,   169,
     170,   171,   172,   157,   345,   346,   347,   348,   349,   407,
     408,   409,   410,   240,   241,   259,   260,   144,   145,   150,
     151,   197,   198,   140,   374,   375,   377,   378,   380,   381,
     383,   384,   386,   387,   401,   402,   226,   227,   228,   229,
     231,   232,   233,   234,   311,   312,   141,   175,   235,   236,
     183,   185,   184,   186,   187,   237,   193,   201,   207,   212,
     217,   221,   258,   264,   263,   265,   268,   269,   270,   271,
     272,   274,   275,   277,   276,   280,   278,   291,   279,   283,
     281,   292,   282,   293,   284,   285,   286,   294,   287,   288,
     295,   289,   290,   315,   313,   318,   319,   320,   324,   326,
     323,   339,   344,   350,   343,   321,   322,   351,   353,   356,
     359,   325,   327,   357,   360,   362,   363,   366,   328,   331,
     332,   334,   335,   337,   338,    42,   373,   412,   376,   379,
     382,   413,   388,   414,   385,   389,   390,   391,   392,   415,
     417,   342,   418,   314,   419,   420,   188,   230,     0,   242
};

static const yytype_int16 yycheck[] =
{
       8,    28,    28,   279,    89,     7,    95,    11,    12,     3,
       3,   264,   265,     3,     3,     3,     3,     3,    15,    15,
      54,     7,    24,     5,     4,    59,    34,   112,    10,    11,
      12,    56,    11,    58,    16,     7,    18,     5,    42,    31,
      44,     3,     4,    11,    71,    71,   131,     0,    16,    76,
      76,    48,   328,     3,     4,     5,     6,    53,    15,    58,
      50,    55,    55,    42,    32,    67,    55,    55,    55,     4,
      50,    53,     7,     5,    22,    23,   161,    23,    10,    11,
      12,    29,    90,    28,    16,    53,    18,    29,    50,    93,
     117,   344,   181,    33,    34,    52,   122,    33,    34,    49,
      50,   103,   378,     7,   131,   131,     5,    15,     7,    39,
      40,    10,    11,    12,    13,    50,     7,    16,    58,    18,
      19,    53,    58,    35,    36,    24,    25,     4,    27,    59,
       7,    30,    33,    34,   161,   161,     3,     4,     5,     6,
      50,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       3,     4,     5,     6,    53,     5,     7,    58,    20,    21,
      10,    11,    12,    20,    21,    54,    16,    54,    18,     5,
      59,     5,    59,    52,    54,    11,    54,    11,   205,    59,
      16,    59,    16,    50,   210,     7,   188,    49,    50,     7,
      33,    34,    49,    50,   279,    13,    32,    50,    32,     7,
       7,    19,    52,    51,   289,    51,    24,    25,    56,    27,
      56,     7,    30,    20,    21,    58,    52,    37,    38,   246,
     247,   248,   249,   250,   251,     7,   252,   253,   254,   255,
     256,   257,    58,    33,    34,    53,    33,    34,   404,    58,
      51,   407,   408,   409,   410,    56,     7,    56,    51,    58,
     258,    51,    13,    56,    51,   282,   264,   265,    19,   285,
      50,     7,   289,    24,    25,     7,    27,    13,    59,    30,
      51,    13,    56,    19,    58,    56,    50,    19,    24,    25,
      50,    27,    24,    25,    30,    27,    51,    56,    30,    58,
       5,    56,    53,     6,     7,    10,    11,    12,    50,     7,
     308,    16,    56,    18,    58,    13,    52,     5,    58,     7,
      52,    19,    10,    11,    12,    13,    24,    25,    16,    27,
      18,    19,    30,    56,    58,    58,    24,    25,    37,    27,
      33,    34,    30,     5,   342,     7,   344,    58,    41,    42,
      43,    44,    45,    46,    33,    34,    58,     5,    51,     7,
      35,    36,    41,    42,    43,    44,    45,    46,    33,    34,
      41,    42,    51,    58,    33,    34,    41,    42,    43,    44,
      45,    46,    41,    42,    43,    44,    45,    46,     3,     4,
       5,     6,     7,     7,   318,   319,   320,   321,   322,   389,
     390,   391,   392,    41,    42,    47,    48,    33,    34,    33,
      34,    20,    21,    58,    55,    56,    55,    56,    55,    56,
      55,    56,    55,    56,     6,     7,   144,   145,   147,   148,
     150,   151,   153,   154,   259,   260,    58,     7,   155,   156,
      12,    16,    11,     5,    32,    51,     7,     7,     7,     7,
       7,     7,    51,    51,    59,    51,     7,     7,     7,     7,
       7,    55,    59,    55,    59,    55,    59,     5,    59,    55,
      59,     5,    59,     6,    59,    59,    55,     6,    59,    59,
      51,    59,    58,     3,    58,    50,    50,    50,    54,     5,
      58,     6,    14,     3,    26,    50,    50,     5,     3,     3,
       3,    54,    54,     4,     3,     3,     6,     3,    54,    54,
      54,    54,    54,    54,    54,    10,    55,   404,    55,    55,
      55,   407,    52,   408,    55,    52,    52,    52,    52,   409,
      53,   308,    53,   262,    53,    53,   103,   149,    -1,   160
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
     115,   116,   117,   118,   119,    50,    50,    50,    50,    50,
     108,   109,    62,    90,    62,    52,    92,    94,    95,    96,
      97,    98,    99,    52,    53,    68,    54,    59,    56,    58,
      58,    54,    59,    56,    58,    58,    54,    59,    56,    58,
      58,    54,    59,    56,    58,    58,    54,    59,    56,    58,
      58,    59,    56,    58,    53,    72,    58,    58,   112,   116,
      58,    58,   112,   116,    33,    34,    58,    35,    36,    37,
      33,    34,    58,    35,    36,    37,    38,     7,     5,     6,
      49,    50,   112,   116,   120,   121,   122,   123,     3,     4,
       5,     6,     7,   110,   111,     7,   107,   120,    53,   109,
      62,    93,    94,    12,    11,    16,     5,    32,    71,     3,
      55,     5,     7,     7,     3,    55,     7,    20,    21,    77,
     120,     7,     3,    55,     7,    50,   112,     7,     3,    55,
      50,   116,     7,     3,    55,     6,     7,     7,   112,   116,
     120,     7,    58,    58,    51,    51,   113,   113,   114,   114,
     115,   117,   117,   118,   118,   119,   119,    51,    41,    42,
      41,    42,   121,   112,   116,   120,    41,    42,    43,    44,
      45,    46,    41,    42,    43,    44,    45,    46,    51,    47,
      48,    51,    56,    59,    51,    51,    53,    94,     7,     7,
       7,     7,     7,    53,    55,    59,    59,    55,    59,    59,
      55,    59,    59,    55,    59,    59,    55,    59,    59,    59,
      58,     5,     5,     6,     6,    51,   112,   112,   112,   112,
     112,   112,   116,   116,   116,   116,   116,   116,    52,   106,
     109,   122,   122,    58,   111,     3,   106,   106,    50,    50,
      50,    50,    50,    58,    54,    54,     5,    54,    54,    77,
     120,    54,    54,   112,    54,    54,   116,    54,    54,     6,
     112,   120,   108,    26,    14,   110,   110,   110,   110,   110,
       3,     5,    88,     3,    77,    89,     3,     4,    86,     3,
       3,    85,     3,     6,    87,    53,     3,   106,    51,    51,
      51,    51,    51,    55,    55,    56,    55,    55,    56,    55,
      55,    56,    55,    55,    56,    55,    55,    56,    52,    52,
      52,    52,    52,     5,     7,     7,    77,     4,     7,     3,
       7,     6,     7,    72,   100,   101,   109,   100,   100,   100,
     100,   101,   102,   103,   104,   105,    53,    53,    53,    53,
      53
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
      78,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      80,    80,    80,    81,    81,    81,    82,    82,    82,    83,
      83,    83,    84,    84,    84,    85,    85,    85,    86,    86,
      86,    87,    87,    87,    88,    88,    88,    89,    89,    89,
      91,    90,    92,    92,    93,    93,    95,    94,    96,    94,
      97,    94,    98,    94,    99,    94,   100,   100,   101,   101,
     102,   103,   104,   105,   106,   106,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   110,   111,   111,   111,   111,   111,   111,   112,   112,
     112,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   117,   117,   117,   118,   118,   118,   119,   119,   120,
     120,   121,   121,   121,   122,   122,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123
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
       3,     1,     5,     3,     3,     5,     5,     3,     3,     3,
       4,     7,     7,     4,     7,     7,     4,     7,     7,     4,
       7,     7,     4,     7,     7,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       0,     3,     3,     1,     2,     1,     0,    10,     0,    10,
       0,    10,     0,    10,     0,     9,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     1,     5,     2,     1,     4,
       4,     3,     3,     5,     5,     5,     7,     5,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     0,     3,     3,
       1,     3,     3,     1,     3,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     1,     3,     1,
       2,     3,     3,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3
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
#line 156 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : main ----------\n");}
#line 1662 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 157 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : type-var-functions-main ----------\n");}
#line 1668 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 158 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : var-functions-main ----------\n");}
#line 1674 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 159 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : functions-main ----------\n");}
#line 1680 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 160 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : type-var-main ----------\n");}
#line 1686 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 161 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : var-main ----------\n");}
#line 1692 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 180 "canlyse.y" /* yacc.c:1646  */
    {printf("Structure définie\n\n");}
#line 1698 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 195 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration d'entiers\n");}
#line 1704 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 197 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de caractères\n");}
#line 1710 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 199 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de réels\n");}
#line 1716 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 201 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de strings\n");}
#line 1722 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 204 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de booléens\n");}
#line 1728 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 206 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de constantes\n");}
#line 1734 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 210 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau d'entiers\n");}
#line 1740 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 212 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de réels\n");}
#line 1746 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 214 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de strings\n");}
#line 1752 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 216 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de caractères\n");}
#line 1758 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 218 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de booléens\n");}
#line 1764 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 229 "canlyse.y" /* yacc.c:1646  */
    {
   if (recherche((yyvsp[0].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    ajouter((yyvsp[0].string),0,1,"null",0);

    printf ("  ajout avec secuus ");
    affiche_dico();
  }
 }
#line 1781 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 242 "canlyse.y" /* yacc.c:1646  */
    {   if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str[20]; 
     sprintf(str,"%d",(yyvsp[0].integer));
    ajouter((yyvsp[-2].string),0,1,str,0);
    
    affiche_dico();
  }
}
#line 1798 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 254 "canlyse.y" /* yacc.c:1646  */
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
#line 1813 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 264 "canlyse.y" /* yacc.c:1646  */
    {

   if (recherche((yyvsp[-2].string)) !=NULL) {
    printf (" variable deja declarie");
    // ajouter une qdp  (,,,) -------------- ? a confirmer 
  }
  else { 
    char  str1[20]; 
     sprintf(str1,"%d",(yyvsp[0].integer));
    ajouter((yyvsp[-2].string),0,1,str1,0);
    affiche_dico();
  }
}
#line 1831 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 357 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Functions ----------\n\n");}
#line 1837 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 363 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction int\n");}
#line 1843 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 363 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1849 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 364 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction double\n");}
#line 1855 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 364 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1861 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 365 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction string\n");}
#line 1867 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 365 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1873 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 366 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction char\n");}
#line 1879 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 366 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1885 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 367 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction void\n");}
#line 1891 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 367 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1897 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 381 "canlyse.y" /* yacc.c:1646  */
    {printf ("\nfooor devalartion");}
#line 1903 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 387 "canlyse.y" /* yacc.c:1646  */
    { printf("Assign %f \n " , (yyvsp[-1].real)); }
#line 1909 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 388 "canlyse.y" /* yacc.c:1646  */
    { printf("Assign %d \n " , (yyvsp[-1].integer)); }
#line 1915 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 389 "canlyse.y" /* yacc.c:1646  */
    { printf("Inc\n "); }
#line 1921 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 390 "canlyse.y" /* yacc.c:1646  */
    { printf("Dec\n "); }
#line 1927 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 391 "canlyse.y" /* yacc.c:1646  */
    { printf("READ \n"); }
#line 1933 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 392 "canlyse.y" /* yacc.c:1646  */
    {printf("WRITE \n"); }
#line 1939 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 393 "canlyse.y" /* yacc.c:1646  */
    { printf("IF \n"); }
#line 1945 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 394 "canlyse.y" /* yacc.c:1646  */
    {printf("IF ELSE \n");}
#line 1951 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 395 "canlyse.y" /* yacc.c:1646  */
    { printf("WHILE \n") ;}
#line 1957 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 396 "canlyse.y" /* yacc.c:1646  */
    { printf("FOR\n");}
#line 1963 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 397 "canlyse.y" /* yacc.c:1646  */
    {printf("Return\n");}
#line 1969 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 406 "canlyse.y" /* yacc.c:1646  */
    {(yyval.real)=(yyvsp[-2].real)+(yyvsp[0].real); }
#line 1975 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 407 "canlyse.y" /* yacc.c:1646  */
    { (yyval.real)=(yyvsp[-2].real)-(yyvsp[0].real); }
#line 1981 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 410 "canlyse.y" /* yacc.c:1646  */
    {(yyval.real)=(yyvsp[-2].real)*(yyvsp[0].real); }
#line 1987 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 411 "canlyse.y" /* yacc.c:1646  */
    { (yyval.real)= (yyvsp[-2].real)/(yyvsp[0].real); }
#line 1993 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 414 "canlyse.y" /* yacc.c:1646  */
    { (yyval.real)=pow((yyvsp[-2].real),(yyvsp[0].real)); }
#line 1999 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 417 "canlyse.y" /* yacc.c:1646  */
    { (yyval.real)=(yyvsp[0].real); }
#line 2005 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 418 "canlyse.y" /* yacc.c:1646  */
    { (yyval.real)=(yyvsp[-1].real); }
#line 2011 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 422 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer)=(yyvsp[-2].integer)+(yyvsp[0].integer); }
#line 2017 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 423 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=(yyvsp[-2].integer)-(yyvsp[0].integer); }
#line 2023 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 426 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer)=(yyvsp[-2].integer)*(yyvsp[0].integer); }
#line 2029 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 427 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=(int) (yyvsp[-2].integer)/(yyvsp[0].integer); }
#line 2035 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 430 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=pow((yyvsp[-2].integer),(yyvsp[0].integer)); }
#line 2041 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 431 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=(yyvsp[-2].integer)%(yyvsp[0].integer); }
#line 2047 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 434 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=(yyvsp[0].integer); }
#line 2053 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 435 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=(yyvsp[-1].integer); }
#line 2059 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 438 "canlyse.y" /* yacc.c:1646  */
    {
     (yyval.integer) = (yyvsp[0].integer); 
   printf(" the resuluts is %d ",(yyval.integer) );}
#line 2067 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 440 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer) = 1-(yyvsp[0].integer); 
    printf(" the resuluts is ------------------ %d ",(yyval.integer) );}
#line 2074 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 444 "canlyse.y" /* yacc.c:1646  */
    {  if (((yyvsp[-2].integer)==1) && ((yyvsp[0].integer)==1)) {(yyval.integer)=1;} else (yyval.integer)=0;   }
#line 2080 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 445 "canlyse.y" /* yacc.c:1646  */
    {  if (((yyvsp[-2].integer)==0) && ((yyvsp[0].integer)==0)) {(yyval.integer)=0;} else (yyval.integer)=1 ;}
#line 2086 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 446 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[0].integer);  }
#line 2092 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 449 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[0].integer);}
#line 2098 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 449 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-1].integer);}
#line 2104 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 452 "canlyse.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].charecter) == (yyvsp[0].charecter) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2110 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 453 "canlyse.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].string) == (yyvsp[0].string) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2116 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 454 "canlyse.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].real) == (yyvsp[0].real) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2122 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 455 "canlyse.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].integer) == (yyvsp[0].integer) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2128 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 457 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].charecter) != (yyvsp[0].charecter) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2134 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 458 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].string) != (yyvsp[0].string) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2140 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 459 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].real) != (yyvsp[0].real) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2146 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 460 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].integer) != (yyvsp[0].integer) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2152 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 462 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].real) < (yyvsp[0].real) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2158 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 463 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].real) <= (yyvsp[0].real) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2164 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 464 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].real) > (yyvsp[0].real) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2170 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 465 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].real) >= (yyvsp[0].real) ) (yyval.integer) = 1;  else (yyval.integer) = 0 ;}
#line 2176 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 466 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].integer) < (yyvsp[0].integer) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2182 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 467 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].integer) <= (yyvsp[0].integer) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2188 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 468 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].integer) > (yyvsp[0].integer) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2194 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 469 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].integer) >= (yyvsp[0].integer) ) (yyval.integer) = 1;  else (yyval.integer) = 0 ;}
#line 2200 "canlyse.tab.c" /* yacc.c:1646  */
    break;


#line 2204 "canlyse.tab.c" /* yacc.c:1646  */
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
#line 472 "canlyse.y" /* yacc.c:1906  */

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
