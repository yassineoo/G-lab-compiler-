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
#line 29 "canlyse.y" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int yylex();
int yyerror(const char *s);

#line 76 "canlyse.tab.c" /* yacc.c:339  */

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
#line 41 "canlyse.y" /* yacc.c:355  */

  int integer;
  double real;
  char charecter ;
  char *string;
  

#line 184 "canlyse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CANLYSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "canlyse.tab.c" /* yacc.c:358  */

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
#define YYLAST   536

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  402

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
       0,   108,   108,   109,   110,   111,   112,   113,   117,   118,
     118,   119,   120,   121,   122,   125,   126,   126,   128,   129,
     132,   136,   137,   137,   138,   139,   147,   149,   151,   153,
     156,   158,   162,   164,   166,   168,   170,   180,   181,   182,
     183,   184,   192,   193,   194,   195,   196,   200,   201,   202,
     203,   204,   209,   210,   211,   212,   213,   218,   218,   219,
     220,   221,   222,   223,   224,   225,   230,   231,   232,   233,
     241,   242,   245,   246,   249,   250,   253,   254,   257,   258,
     261,   262,   263,   266,   267,   268,   271,   272,   273,   277,
     278,   279,   283,   284,   285,   293,   293,   294,   294,   296,
     297,   300,   300,   301,   301,   302,   302,   303,   303,   304,
     304,   307,   308,   311,   311,   313,   314,   315,   316,   319,
     319,   321,   325,   326,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   353,   353,   354,   354,   354,
     354,   360,   361,   362,   365,   366,   367,   369,   370,   372,
     373,   379,   380,   381,   384,   385,   386,   388,   389,   390,
     392,   393,   400,   402,   406,   407,   408,   411,   411,   415,
     416,   417,   418,   420,   421,   422,   423,   425,   426,   427,
     428,   431,   432,   433,   434
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

#define YYPACT_NINF -271

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-271)))

#define YYTABLE_NINF -110

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -12,    26,    57,    40,  -271,    89,    22,   196,   287,  -271,
      39,   113,   113,    79,   195,   198,  -271,  -271,   209,   217,
     246,   250,   275,   286,   406,  -271,  -271,   158,   238,   106,
     249,   254,   260,   266,   335,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,   113,  -271,   113,  -271,   163,   244,     2,  -271,
     -11,    30,   265,    65,    70,   271,   135,   122,   282,   193,
     220,   300,   236,   264,   303,   337,   270,    20,  -271,   326,
     361,    25,  -271,  -271,   387,   392,    25,    27,    97,   386,
    -271,   132,   174,    34,  -271,   444,   234,   409,   447,   234,
     262,  -271,  -271,   113,  -271,   125,  -271,  -271,   443,   445,
     441,   453,   427,   406,  -271,  -271,     4,   340,   454,  -271,
    -271,     9,   155,   455,  -271,  -271,    10,    63,   456,  -271,
    -271,    11,     8,   457,  -271,  -271,    13,   225,   458,  -271,
    -271,   234,   459,  -271,  -271,  -271,  -271,  -271,   153,   212,
    -271,  -271,   148,   226,    43,    43,  -271,    43,    43,    43,
      19,    19,  -271,    19,    19,    19,    19,   416,   292,   315,
     259,   234,   358,   364,   417,   219,  -271,  -271,  -271,  -271,
    -271,  -271,    36,  -271,   401,   418,   419,  -271,  -271,  -271,
      78,  -271,   464,   465,   466,   467,   468,   111,   421,   420,
    -271,  -271,   422,   423,   424,  -271,  -271,  -271,  -271,  -271,
     425,   430,   428,  -271,    43,   349,   429,   434,   432,  -271,
      19,   360,   433,   435,   436,  -271,  -271,   437,   358,  -271,
     438,  -271,  -271,  -271,  -271,    97,    97,   386,   386,  -271,
     174,   174,    34,    34,  -271,  -271,  -271,   472,   475,   476,
     480,   219,   330,   344,   442,    43,    43,    43,    43,    43,
      43,    19,    19,    19,    19,    19,    19,   294,   259,   259,
    -271,  -271,   491,   294,   294,  -271,  -271,   448,   449,   450,
     451,   452,   446,  -271,   460,   498,  -271,   461,   230,  -271,
     462,    43,  -271,   463,    19,  -271,   469,   499,   234,  -271,
    -271,  -271,  -271,  -271,   349,   349,   349,   349,   349,   349,
     360,   360,   360,   360,   360,   360,   335,  -271,  -271,  -271,
    -271,   481,  -271,   492,   409,   409,   409,   409,   409,  -271,
     503,  -271,   359,  -271,  -271,   505,   349,   507,   360,   506,
    -271,   358,  -271,   278,   508,   294,    74,   134,   141,   145,
     149,  -271,   365,  -271,   374,  -271,   376,  -271,   378,  -271,
     380,  -271,  -271,  -271,   470,   473,   474,   477,   478,  -271,
     346,  -271,    14,  -271,   184,  -271,   160,  -271,   431,   325,
     325,   325,   325,   325,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,   325,  -271,  -271,   325,   325,
     325,    90,  -271,   471,   479,   482,   483,  -271,  -271,  -271,
    -271,  -271
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    95,     0,     0,     0,     2,
       0,    95,     0,     0,     0,     0,    15,    17,     0,     0,
       0,     0,     0,     0,     0,    21,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     8,   134,    11,    12,    13,
      14,    10,    95,     7,     0,     5,   101,     0,     0,    19,
      46,     0,     0,    62,     0,     0,    49,     0,     0,    39,
       0,     0,    56,     0,     0,     0,     0,     0,    25,     0,
       0,     0,   160,   149,     0,     0,     0,     0,   143,   146,
     148,     0,   153,   156,   159,     0,     0,     0,     0,     0,
       0,   123,     6,     0,     4,   101,    96,    98,     0,     0,
       0,     0,     0,     0,    16,    18,     0,     0,     0,    27,
      35,     0,     0,     0,    30,    36,     0,     0,     0,    28,
      33,     0,     0,     0,    26,    32,     0,     0,     0,    29,
      34,     0,     0,    31,    22,    24,   126,   127,     0,     0,
     118,   117,     0,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   162,   166,   167,   137,   139,
     140,   138,     0,   136,     0,     0,     0,     9,   122,     3,
     101,   100,     0,     0,     0,     0,     0,     0,     0,     0,
      44,    45,    43,     0,     0,    65,    57,    58,    61,    64,
      60,     0,     0,    51,     0,    50,    47,     0,     0,    41,
       0,    40,    37,     0,     0,    54,    55,    53,    68,    69,
       0,   124,   125,   150,   161,   141,   142,   144,   145,   147,
     151,   152,   154,   155,   157,   158,   128,     0,     0,     0,
       0,   163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   135,     0,     0,     0,    97,    99,     0,     0,     0,
       0,     0,     0,    76,     0,     0,    78,     0,     0,    72,
       0,     0,    70,     0,     0,    74,     0,     0,     0,   169,
     173,   170,   174,   168,   171,   175,   179,   177,   180,   178,
     172,   176,   183,   181,   184,   182,     0,   132,   120,   164,
     165,     0,   133,   130,     0,     0,     0,     0,     0,    20,
       0,    42,     0,    59,    63,     0,    48,     0,    38,     0,
      52,    67,    66,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    94,     0,    85,     0,    82,     0,    88,
       0,   119,   121,   131,     0,     0,     0,     0,     0,    77,
       0,    79,     0,    73,     0,    71,     0,    75,     0,     0,
       0,     0,     0,     0,    89,    90,    93,    92,    83,    84,
      80,    81,    86,    87,   114,     0,   112,   113,     0,     0,
       0,     0,   111,    11,    12,    13,    14,   110,   102,   104,
     106,   108
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -271,  -271,    12,  -271,  -271,  -271,  -271,  -271,     3,   509,
    -271,   410,    -4,  -271,  -271,  -271,  -271,  -270,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
      42,  -271,  -271,  -271,   -89,  -271,  -271,  -271,  -271,  -271,
      55,  -117,   133,   139,   131,   138,  -254,  -271,   215,    -8,
      52,  -167,   -27,   295,   296,   382,   -26,   291,   293,   297,
     -85,   373,   190,  -271
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    35,    36,    10,    16,    48,    17,    11,
      25,    67,   384,    60,    51,    57,    63,   198,    54,    66,
      61,    58,    64,    52,    55,   348,   346,   350,   342,   344,
      12,    13,    96,   180,    97,    98,    99,   100,   101,   102,
     385,   386,    37,    38,    39,    40,   307,   175,    90,   387,
     172,   173,   162,    78,    79,    80,   163,    82,    83,    84,
     164,   165,   166,   167
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    77,    81,    26,   176,   261,   181,   188,   323,   312,
     313,    72,   193,   201,   207,   209,   213,    14,    49,     1,
      68,   376,    72,    43,    45,    18,    91,   199,    72,    73,
      19,    20,    21,     3,   196,   197,    22,    14,    23,   168,
     169,   170,   171,   106,   138,   139,   219,    73,   107,   142,
     143,   105,   343,    44,    92,   104,    94,     4,   210,   189,
     144,   145,     7,   135,   194,   202,   208,    73,   214,   210,
     203,   155,   156,   134,    15,    76,   244,   168,   169,   170,
     171,   353,   178,  -107,    93,   146,   108,   260,   109,  -103,
     205,   266,   377,   204,  -105,    18,   211,    27,     5,    68,
      19,    20,    21,    28,   218,   179,    22,    46,    23,    29,
    -109,     6,     7,   204,    30,    31,    18,    32,     8,   111,
      33,    19,    20,    21,   112,   354,   113,    22,   114,    23,
    -107,   265,   147,   148,   242,   243,  -103,   168,   169,   170,
     171,  -105,     8,   397,   168,   169,   170,   171,   168,   169,
     170,   171,   168,   169,   170,   171,    85,  -109,    72,    73,
     158,   159,   195,   380,   272,   150,   151,   381,  -107,   261,
     261,   261,   261,   261,  -103,   196,   197,   142,   118,  -105,
     119,   144,   145,   135,   143,   355,   144,   145,   378,   116,
     152,   379,   356,   324,   117,  -109,   357,    69,    70,   223,
     358,    18,    47,   332,   160,   161,    19,    20,    21,   153,
     154,   221,    22,    14,    23,    95,    50,    71,   294,   295,
     296,   297,   298,   299,    53,   300,   301,   302,   303,   304,
     305,   215,   216,    72,    73,   158,   159,    72,    73,   158,
     159,    72,    73,    74,    75,   150,   151,   121,    24,   308,
     196,   197,   122,    56,   326,   308,   308,    59,   328,   150,
     151,   331,    72,    73,   158,   159,   258,   259,   392,    27,
     222,   392,   392,   392,   392,    28,   123,   224,   124,   160,
     161,    29,    62,   160,   161,    27,    30,    31,    76,    32,
     126,    28,    33,    65,    27,   127,   103,    29,    91,    86,
      28,    27,    30,    31,    87,    32,    29,    28,    33,   161,
      88,    30,    31,    29,    32,   177,    89,    33,    30,    31,
     128,    32,   129,   110,    33,   178,   132,   308,   133,   115,
      18,   351,    27,   237,   238,    19,    20,    21,    28,    34,
     120,    22,    27,    23,    29,   190,   306,   191,    28,    30,
      31,   374,    32,   375,    29,    33,   239,   240,   125,    30,
      31,   130,    32,   144,   145,    33,   336,   337,   338,   339,
     340,   245,   246,   247,   248,   249,   250,   150,   151,   196,
     197,   223,   144,   145,   136,   251,   252,   253,   254,   255,
     256,   144,   145,   150,   151,   224,   131,   150,   151,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,    18,   168,   169,   170,   171,    19,    20,    21,   137,
     359,   360,    22,   149,    23,   388,   389,   390,   391,   361,
     362,   363,   364,   365,   366,   367,   368,   382,   383,   225,
     226,   230,   231,   227,   228,   140,   232,   233,   309,   310,
     141,   157,   234,   235,   174,   182,   183,   184,   185,   186,
     262,   192,   200,   206,   212,   217,   220,   236,   257,   263,
     264,   267,   268,   269,   270,   271,   273,   289,   276,   274,
     290,   275,   291,   277,   278,   279,   292,   280,   281,   282,
     285,   283,   284,   293,   311,   286,   287,   288,   314,   315,
     316,   317,   318,   321,   319,   330,   335,   334,   341,   345,
     347,   352,   349,   187,   320,   322,   325,   327,   393,    42,
     395,   333,   369,   329,   398,   370,   371,   394,   396,   372,
     373,   229,   399,   241,     0,   400,   401
};

static const yytype_int16 yycheck[] =
{
       8,    28,    28,     7,    89,   172,    95,     3,   278,   263,
     264,     3,     3,     3,     3,     7,     3,    15,    15,    31,
      24,     7,     3,    11,    12,     5,    34,   112,     3,     4,
      10,    11,    12,     7,    20,    21,    16,    15,    18,     3,
       4,     5,     6,    54,    71,    71,   131,     4,    59,    76,
      76,    48,   322,    11,    42,    53,    44,     0,    50,    55,
      33,    34,    23,    67,    55,    55,    55,     4,    55,    50,
       7,    37,    38,    53,    52,    50,   161,     3,     4,     5,
       6,   335,    90,     5,    42,    58,    56,    51,    58,    11,
     117,   180,   362,    50,    16,     5,   122,     7,    58,   103,
      10,    11,    12,    13,   131,    93,    16,    28,    18,    19,
      32,    22,    23,    50,    24,    25,     5,    27,    29,    54,
      30,    10,    11,    12,    59,    51,    56,    16,    58,    18,
       5,    53,    35,    36,   161,   161,    11,     3,     4,     5,
       6,    16,    29,    53,     3,     4,     5,     6,     3,     4,
       5,     6,     3,     4,     5,     6,    50,    32,     3,     4,
       5,     6,     7,     3,    53,    33,    34,     7,     5,   336,
     337,   338,   339,   340,    11,    20,    21,   204,    56,    16,
      58,    33,    34,   187,   210,    51,    33,    34,     4,    54,
      58,     7,    51,   278,    59,    32,    51,    39,    40,    51,
      51,     5,     7,   288,    49,    50,    10,    11,    12,    35,
      36,    58,    16,    15,    18,    52,     7,    59,   245,   246,
     247,   248,   249,   250,     7,   251,   252,   253,   254,   255,
     256,     6,     7,     3,     4,     5,     6,     3,     4,     5,
       6,     3,     4,     5,     6,    33,    34,    54,    52,   257,
      20,    21,    59,     7,   281,   263,   264,     7,   284,    33,
      34,   288,     3,     4,     5,     6,    47,    48,   385,     7,
      58,   388,   389,   390,   391,    13,    56,    51,    58,    49,
      50,    19,     7,    49,    50,     7,    24,    25,    50,    27,
      54,    13,    30,     7,     7,    59,    52,    19,   306,    50,
      13,     7,    24,    25,    50,    27,    19,    13,    30,    50,
      50,    24,    25,    19,    27,    53,    50,    30,    24,    25,
      56,    27,    58,    58,    30,   333,    56,   335,    58,    58,
       5,    53,     7,    41,    42,    10,    11,    12,    13,    52,
      58,    16,     7,    18,    19,     5,    52,     7,    13,    24,
      25,     5,    27,     7,    19,    30,    41,    42,    58,    24,
      25,    58,    27,    33,    34,    30,   314,   315,   316,   317,
     318,    41,    42,    43,    44,    45,    46,    33,    34,    20,
      21,    51,    33,    34,    58,    41,    42,    43,    44,    45,
      46,    33,    34,    33,    34,    51,    59,    33,    34,    41,
      42,    43,    44,    45,    46,    41,    42,    43,    44,    45,
      46,     5,     3,     4,     5,     6,    10,    11,    12,    58,
      55,    56,    16,    37,    18,   370,   371,   372,   373,    55,
      56,    55,    56,    55,    56,    55,    56,     6,     7,   144,
     145,   150,   151,   147,   148,    58,   153,   154,   258,   259,
      58,     7,   155,   156,     7,    12,    11,    16,     5,    32,
      59,     7,     7,     7,     7,     7,     7,    51,    51,    51,
      51,     7,     7,     7,     7,     7,    55,     5,    55,    59,
       5,    59,     6,    59,    59,    55,     6,    59,    59,    55,
      55,    59,    59,    51,     3,    59,    59,    59,    50,    50,
      50,    50,    50,     5,    58,     6,    14,    26,     5,     4,
       3,     3,     6,   103,    54,    54,    54,    54,   385,    10,
     389,   306,    52,    54,    53,    52,    52,   388,   390,    52,
      52,   149,    53,   160,    -1,    53,    53
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
       5,     6,   110,   111,     7,   107,   120,    53,   109,    62,
      93,    94,    12,    11,    16,     5,    32,    71,     3,    55,
       5,     7,     7,     3,    55,     7,    20,    21,    77,   120,
       7,     3,    55,     7,    50,   112,     7,     3,    55,     7,
      50,   116,     7,     3,    55,     6,     7,     7,   112,   120,
       7,    58,    58,    51,    51,   113,   113,   114,   114,   115,
     117,   117,   118,   118,   119,   119,    51,    41,    42,    41,
      42,   121,   112,   116,   120,    41,    42,    43,    44,    45,
      46,    41,    42,    43,    44,    45,    46,    51,    47,    48,
      51,   111,    59,    51,    51,    53,    94,     7,     7,     7,
       7,     7,    53,    55,    59,    59,    55,    59,    59,    55,
      59,    59,    55,    59,    59,    55,    59,    59,    59,     5,
       5,     6,     6,    51,   112,   112,   112,   112,   112,   112,
     116,   116,   116,   116,   116,   116,    52,   106,   109,   122,
     122,     3,   106,   106,    50,    50,    50,    50,    50,    58,
      54,     5,    54,    77,   120,    54,   112,    54,   116,    54,
       6,   112,   120,   108,    26,    14,   110,   110,   110,   110,
     110,     5,    88,    77,    89,     4,    86,     3,    85,     6,
      87,    53,     3,   106,    51,    51,    51,    51,    51,    55,
      56,    55,    56,    55,    56,    55,    56,    55,    56,    52,
      52,    52,    52,    52,     5,     7,     7,    77,     4,     7,
       3,     7,     6,     7,    72,   100,   101,   109,   100,   100,
     100,   100,   101,   102,   103,   104,   105,    53,    53,    53,
      53,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    61,    61,    61,    61,    62,    63,
      63,    64,    64,    64,    64,    65,    66,    66,    67,    67,
      68,    69,    70,    70,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    73,
      73,    73,    74,    74,    74,    74,    74,    75,    75,    75,
      75,    75,    76,    76,    76,    76,    76,    77,    77,    78,
      78,    78,    78,    78,    78,    78,    79,    79,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    88,
      88,    88,    89,    89,    89,    91,    90,    92,    92,    93,
      93,    95,    94,    96,    94,    97,    94,    98,    94,    99,
      94,   100,   100,   101,   101,   102,   103,   104,   105,   106,
     106,   107,   108,   108,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   111,
     111,   112,   112,   112,   113,   113,   113,   114,   114,   115,
     115,   116,   116,   116,   117,   117,   117,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   121,   122,   122,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     7,     6,     5,     6,     5,     2,     3,
       1,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       6,     2,     3,     1,     2,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     1,
       3,     3,     5,     3,     3,     3,     1,     3,     5,     1,
       3,     3,     5,     3,     3,     3,     1,     1,     1,     5,
       3,     3,     1,     5,     3,     3,     5,     5,     3,     3,
       4,     7,     4,     7,     4,     7,     4,     7,     4,     7,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     0,     3,     3,     1,     2,
       1,     0,    10,     0,    10,     0,    10,     0,    10,     0,
       9,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       1,     5,     2,     1,     4,     4,     3,     3,     4,     4,
       5,     7,     5,     5,     1,     2,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     1,     3,     1,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       1,     3,     1,     2,     3,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3
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
#line 108 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : main ----------\n");}
#line 1598 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : type-var-functions-main ----------\n");}
#line 1604 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : var-functions-main ----------\n");}
#line 1610 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : functions-main ----------\n");}
#line 1616 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : type-var-main ----------\n");}
#line 1622 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Programme bien structuré : var-main ----------\n");}
#line 1628 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 132 "canlyse.y" /* yacc.c:1646  */
    {printf("Structure définie\n\n");}
#line 1634 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 147 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration d'entiers\n");}
#line 1640 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 149 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de caractères\n");}
#line 1646 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 151 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de réels\n");}
#line 1652 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 153 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de strings\n");}
#line 1658 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 156 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de booléens\n");}
#line 1664 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 158 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de constantes\n");}
#line 1670 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 162 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau d'entiers\n");}
#line 1676 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 164 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de réels\n");}
#line 1682 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 166 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de strings\n");}
#line 1688 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 168 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de caractères\n");}
#line 1694 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 170 "canlyse.y" /* yacc.c:1646  */
    {printf("Déclaration de tableau de booléens\n");}
#line 1700 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 293 "canlyse.y" /* yacc.c:1646  */
    {printf("\n---------- Functions ----------\n\n");}
#line 1706 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 300 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction int\n");}
#line 1712 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 300 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1718 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 301 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction double\n");}
#line 1724 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 301 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1730 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 302 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction string\n");}
#line 1736 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 302 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1742 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 303 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction char\n");}
#line 1748 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 303 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1754 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 304 "canlyse.y" /* yacc.c:1646  */
    {printf("Fonction void\n");}
#line 1760 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 304 "canlyse.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1766 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 321 "canlyse.y" /* yacc.c:1646  */
    {printf ("\nfooor devalartion");}
#line 1772 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 334 "canlyse.y" /* yacc.c:1646  */
    { printf("Assign %f \n " , (yyvsp[-1].real)); }
#line 1778 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 335 "canlyse.y" /* yacc.c:1646  */
    { printf("Assign %d \n " , (yyvsp[-1].integer)); }
#line 1784 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 336 "canlyse.y" /* yacc.c:1646  */
    { printf("Inc\n "); }
#line 1790 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 337 "canlyse.y" /* yacc.c:1646  */
    { printf("Dec\n "); }
#line 1796 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 338 "canlyse.y" /* yacc.c:1646  */
    { printf("READ \n"); }
#line 1802 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 339 "canlyse.y" /* yacc.c:1646  */
    {printf("WRITE \n"); }
#line 1808 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 340 "canlyse.y" /* yacc.c:1646  */
    { printf("IF \n"); }
#line 1814 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 341 "canlyse.y" /* yacc.c:1646  */
    {printf("IF ELSE \n");}
#line 1820 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 342 "canlyse.y" /* yacc.c:1646  */
    { printf("WHILE \n") ;}
#line 1826 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 343 "canlyse.y" /* yacc.c:1646  */
    { printf("FOR\n");}
#line 1832 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 344 "canlyse.y" /* yacc.c:1646  */
    {printf("Return\n");}
#line 1838 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 360 "canlyse.y" /* yacc.c:1646  */
    {(yyval.real)=(yyvsp[-2].real)+(yyvsp[0].real); }
#line 1844 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 361 "canlyse.y" /* yacc.c:1646  */
    { (yyval.real)=(yyvsp[-2].real)-(yyvsp[0].real); }
#line 1850 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 365 "canlyse.y" /* yacc.c:1646  */
    {(yyval.real)=(yyvsp[-2].real)*(yyvsp[0].real); }
#line 1856 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 366 "canlyse.y" /* yacc.c:1646  */
    { (yyval.real)= (yyvsp[-2].real)/(yyvsp[0].real); }
#line 1862 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 369 "canlyse.y" /* yacc.c:1646  */
    { (yyval.real)=pow((yyvsp[-2].real),(yyvsp[0].real)); }
#line 1868 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 372 "canlyse.y" /* yacc.c:1646  */
    { (yyval.real)=(yyvsp[0].real); }
#line 1874 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 373 "canlyse.y" /* yacc.c:1646  */
    { (yyval.real)=(yyvsp[-1].real); }
#line 1880 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 379 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer)=(yyvsp[-2].integer)+(yyvsp[0].integer); }
#line 1886 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 380 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=(yyvsp[-2].integer)-(yyvsp[0].integer); }
#line 1892 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 384 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer)=(yyvsp[-2].integer)*(yyvsp[0].integer); }
#line 1898 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 385 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=(int) (yyvsp[-2].integer)/(yyvsp[0].integer); }
#line 1904 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 388 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=pow((yyvsp[-2].integer),(yyvsp[0].integer)); }
#line 1910 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 389 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=(yyvsp[-2].integer)%(yyvsp[0].integer); }
#line 1916 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 392 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=(yyvsp[0].integer); }
#line 1922 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 393 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer)=(yyvsp[-1].integer); }
#line 1928 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 400 "canlyse.y" /* yacc.c:1646  */
    {
     (yyval.integer) = (yyvsp[0].integer); 
   printf(" the resuluts is %d ",(yyval.integer) );}
#line 1936 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 402 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer) = 1-(yyvsp[0].integer); 
    printf(" the resuluts is ------------------ %d ",(yyval.integer) );}
#line 1943 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 406 "canlyse.y" /* yacc.c:1646  */
    {  if (((yyvsp[-2].integer)==1) && ((yyvsp[0].integer)==1)) {(yyval.integer)=1;} else (yyval.integer)=0;   }
#line 1949 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 407 "canlyse.y" /* yacc.c:1646  */
    {  if (((yyvsp[-2].integer)==0) && ((yyvsp[0].integer)==0)) {(yyval.integer)=0;} else (yyval.integer)=1 ;}
#line 1955 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 408 "canlyse.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[0].integer);  }
#line 1961 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 411 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[0].integer);}
#line 1967 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 411 "canlyse.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-1].integer);}
#line 1973 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 415 "canlyse.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].charecter) == (yyvsp[0].charecter) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 1979 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 416 "canlyse.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].string) == (yyvsp[0].string) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 1985 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 417 "canlyse.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].real) == (yyvsp[0].real) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 1991 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 418 "canlyse.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].integer) == (yyvsp[0].integer) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 1997 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 420 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].charecter) != (yyvsp[0].charecter) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2003 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 421 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].string) != (yyvsp[0].string) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2009 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 422 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].real) != (yyvsp[0].real) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2015 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 423 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].integer) != (yyvsp[0].integer) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2021 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 425 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].real) < (yyvsp[0].real) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2027 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 426 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].real) <= (yyvsp[0].real) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2033 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 427 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].real) > (yyvsp[0].real) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2039 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 428 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].real) >= (yyvsp[0].real) ) (yyval.integer) = 1;  else (yyval.integer) = 0 ;}
#line 2045 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 431 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].integer) < (yyvsp[0].integer) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2051 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 432 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].integer) <= (yyvsp[0].integer) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2057 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 433 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].integer) > (yyvsp[0].integer) ) (yyval.integer) = 1; else (yyval.integer) = 0 ;}
#line 2063 "canlyse.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 434 "canlyse.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].integer) >= (yyvsp[0].integer) ) (yyval.integer) = 1;  else (yyval.integer) = 0 ;}
#line 2069 "canlyse.tab.c" /* yacc.c:1646  */
    break;


#line 2073 "canlyse.tab.c" /* yacc.c:1646  */
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
#line 440 "canlyse.y" /* yacc.c:1906  */



























int yyerror(const char *s) {
  printf("%s\n",s);
}

int main(void) {
  yyparse();
}






























