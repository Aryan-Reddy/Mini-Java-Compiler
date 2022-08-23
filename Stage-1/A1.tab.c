/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "A1.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <assert.h>
	char *func(char **,int);
	void freeAll(char **,int);
	int __DEFEXPCNT = 0;
	int __DEFSTMTCNT = 0;
	struct mapExpDefinitions
	{
		char *id;
		int whatToCopy[100];
		int lenCopy;
		char *strs[100];
	};
	struct mapStmtDefinitions
	{
		char *id;
		int whatToCopy[100];
		int lenCopy;
		char *strs[100];
	};
	struct mapExpDefinitions defEXP[100];
	struct mapStmtDefinitions defStmt[100];

#line 97 "A1.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_A1_TAB_H_INCLUDED
# define YY_YY_A1_TAB_H_INCLUDED
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
    ENDFILE = 258,
    CLASS = 259,
    IDENTIFIER = 260,
    OC = 261,
    CC = 262,
    PUBLIC = 263,
    STATIC = 264,
    VOID = 265,
    MAIN = 266,
    OB = 267,
    CB = 268,
    STRING = 269,
    OSQ = 270,
    CSQ = 271,
    SEMICOLON = 272,
    INT = 273,
    COMMA = 274,
    RETURN = 275,
    BOOLEAN = 276,
    EQ = 277,
    EXTENDS = 278,
    AND = 279,
    OR = 280,
    NE = 281,
    LE = 282,
    ADD = 283,
    SUB = 284,
    MUL = 285,
    DIV = 286,
    DOT = 287,
    LENGTH = 288,
    TRUE = 289,
    FALSE = 290,
    THIS = 291,
    NEW = 292,
    NOT = 293,
    SYSTEM = 294,
    OUT = 295,
    PRINTLN = 296,
    DST = 297,
    DST0 = 298,
    DST1 = 299,
    DST2 = 300,
    DEXP = 301,
    DEXP0 = 302,
    DEXP1 = 303,
    DEXP2 = 304,
    IF = 305,
    ELSE = 306,
    WHILE = 307,
    NUMBER = 308,
    MYSTERY = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "A1.y"

	char * text;

#line 208 "A1.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_A1_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   331

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  264

#define YYUNDEFTOK  2
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    45,    45,    58,    69,    81,    91,   103,   113,   124,
     135,   147,   157,   168,   179,   191,   201,   212,   223,   234,
     246,   256,   268,   278,   289,   300,   311,   322,   333,   344,
     356,   366,   377,   388,   399,   410,   422,   432,   443,   455,
     465,   476,   487,   498,   509,   520,   531,   542,   610,   621,
     632,   643,   654,   665,   676,   687,   698,   709,   720,   731,
     742,   811,   822,   833,   844,   855,   866,   877,   888,   899,
     911,   922,   933,   944,   955,   974,  1045,  1120,  1221,  1239,
    1310,  1386,  1488
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDFILE", "CLASS", "IDENTIFIER", "OC",
  "CC", "PUBLIC", "STATIC", "VOID", "MAIN", "OB", "CB", "STRING", "OSQ",
  "CSQ", "SEMICOLON", "INT", "COMMA", "RETURN", "BOOLEAN", "EQ", "EXTENDS",
  "AND", "OR", "NE", "LE", "ADD", "SUB", "MUL", "DIV", "DOT", "LENGTH",
  "TRUE", "FALSE", "THIS", "NEW", "NOT", "SYSTEM", "OUT", "PRINTLN", "DST",
  "DST0", "DST1", "DST2", "DEXP", "DEXP0", "DEXP1", "DEXP2", "IF", "ELSE",
  "WHILE", "NUMBER", "MYSTERY", "$accept", "goal", "MainClass",
  "typeDeclarationKleen", "macroDefinitionKleen", "typeDeclaration",
  "typeIdentifierSCKleen", "typeIdentifierSCKleenP",
  "methodDeclarationKleen", "typeIdentifierSC", "typeIdentifier",
  "cmtypeIdentifier", "cmtypeIdentifierKleen", "methodArgs",
  "methodDeclaration", "statementKleenP", "statementKleen", "type",
  "cmExpressionKleen", "cmExpression", "expressionS", "statement",
  "expression", "primaryExpression", "macroDefinition",
  "cmIdentifierkleenP", "macroDefStatement", "macroDefExpression",
  "integer", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF (-198)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -198,    13,   149,  -198,    23,    31,    42,    50,    53,    61,
      64,    71,    80,  -198,  -198,  -198,  -198,    83,    87,    96,
     105,   113,   117,   121,   124,   129,    12,   134,   107,   130,
     139,   143,   146,   133,   150,   152,  -198,   156,  -198,   145,
     144,   170,   165,   160,   161,   169,   171,   164,     8,   176,
     157,  -198,   181,   183,   184,    14,   187,   195,  -198,   196,
     191,   194,     4,  -198,   201,   194,   203,    14,  -198,  -198,
    -198,     3,    14,  -198,   204,   141,  -198,    14,   205,     2,
     210,   207,   215,     5,    20,  -198,  -198,   189,   211,   212,
    -198,    34,   216,    91,    14,   213,   217,   218,  -198,  -198,
      25,    25,    25,    25,    25,    25,    25,    25,    25,     1,
     214,   219,  -198,   220,  -198,   112,  -198,   208,   223,  -198,
     222,  -198,   224,   227,    14,    14,    14,    85,   197,    14,
      14,  -198,  -198,   226,   221,   225,  -198,   228,    14,  -198,
     229,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   230,
    -198,  -198,    14,   231,  -198,     2,  -198,  -198,  -198,     2,
     233,  -198,  -198,   236,   234,   235,  -198,   232,   238,   240,
      88,    14,  -198,    14,  -198,   225,  -198,   239,  -198,    14,
     241,  -198,   244,   115,   242,   100,   243,   237,  -198,   198,
     108,   108,  -198,   248,  -198,  -198,  -198,   249,  -198,     2,
    -198,   252,  -198,  -198,    14,   251,   192,  -198,  -198,  -198,
    -198,   253,   254,   255,    14,   108,   246,   262,   263,  -198,
     257,  -198,     2,  -198,    59,   245,   256,  -198,    20,    14,
      82,  -198,    76,  -198,   247,  -198,   258,    14,  -198,   125,
      14,  -198,   200,   264,   259,    14,   260,   250,  -198,   267,
     261,   273,   265,  -198,   274,  -198,   271,  -198,    14,   272,
     269,   280,   281,  -198
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,    71,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,     0,    11,     0,
       0,     0,     0,    30,     0,     0,    64,     0,    62,    63,
      65,     0,     0,    82,     0,    58,    61,     0,     0,    15,
       0,     0,     0,     0,     0,    30,    74,     0,     0,     0,
      29,     0,     0,     0,    39,     0,     0,     0,    68,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    33,    32,     0,    10,     0,     0,    11,
       0,    73,     0,     0,    39,     0,     0,     0,     0,     0,
       0,    75,    30,     0,     0,    36,    69,     0,     0,    64,
       0,    48,    49,    50,    51,    52,    53,    54,    55,     0,
      57,    79,     0,     0,     8,     0,    14,    16,    17,    15,
       0,    30,    72,     0,     0,     0,    40,     0,     0,     0,
       0,     0,    60,     0,    38,    36,    67,     0,    56,    39,
       0,    31,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,    76,     0,    37,    35,    66,     0,    80,    22,
       9,     0,    77,    47,     0,     0,    45,    46,    81,    59,
      20,     0,     0,     0,     0,     0,    21,     0,     0,    43,
       0,    44,     0,    19,     0,     0,     0,    18,    34,     0,
       0,    13,     0,    28,     0,    41,     0,     0,    12,     0,
       0,    27,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,    24,     0,    25,     0,    23,     0,     0,
       0,     0,     0,     3
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,  -198,  -198,  -198,  -198,   127,  -198,   131,  -197,
    -154,  -198,  -198,  -198,  -198,    62,   -60,  -198,   114,  -198,
    -122,  -186,   -55,   104,  -198,   266,  -198,  -198,  -198
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,    26,     2,    38,    79,   230,   115,   116,
     117,   223,   216,   211,   156,   232,    62,   118,   174,   175,
     134,    90,   135,    75,    14,    83,    15,    16,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,   182,   163,    91,   206,   207,   149,   112,    96,    84,
      85,    86,    95,     3,    58,    36,    37,    98,   122,    66,
     113,    97,   110,   114,   123,   127,    67,   231,    17,   221,
     139,    59,   124,   238,   150,   125,    18,    67,   233,    84,
      85,   131,   126,    87,   233,   210,   241,    19,    68,    69,
      70,    71,    72,   241,    88,    20,    89,   197,    21,    68,
      69,    70,    71,    72,   228,    85,    22,    73,   227,    23,
     164,   165,   170,    87,   168,   169,    24,   113,    73,   229,
     114,    84,    85,   177,    88,    25,    89,   228,    85,    27,
      84,    85,   166,    84,    85,   192,   240,   180,    87,    28,
     113,   185,   237,   114,   133,    84,    85,   202,    29,    88,
     123,    89,    40,    84,    85,    87,   193,    30,   194,   154,
     155,    87,   200,   155,    87,    31,    88,    87,    89,    32,
      84,    85,    88,    33,    89,    88,    34,    89,    88,    87,
      89,    35,    39,    41,    42,   245,    45,    87,    43,   213,
      88,    44,    89,     4,    49,    46,   100,    47,    88,   220,
      89,    48,    61,    50,    87,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   236,    88,    51,    89,    52,    53,
      54,    55,   244,    57,    56,   246,    60,    63,    64,    65,
     250,     5,     6,     7,     8,     9,    10,    11,    12,    77,
      78,    80,    81,   259,   140,   141,   142,   143,   144,   145,
     146,   147,   148,    82,    92,    94,   119,    99,   111,   120,
     121,   128,   132,   129,   130,   157,   136,   151,   158,   137,
     161,   152,   162,   138,   172,   153,   160,   167,   171,   205,
     247,   176,   179,   215,   173,   178,   159,   181,   184,   186,
     187,   190,   188,   191,   198,   196,   199,   212,   201,   204,
     203,   208,   209,   214,   189,   222,   217,   218,   224,   225,
     226,   248,   219,   235,   253,   243,   249,   251,   254,   242,
     255,   257,   252,   258,   234,   260,   261,   262,   263,   195,
     183,     0,   239,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93
};

static const yytype_int16 yycheck[] =
{
      55,   155,   124,    63,   190,   191,     5,     5,     5,     5,
       6,     7,    67,     0,     6,     3,     4,    72,    13,     5,
      18,    18,    77,    21,    19,    85,    12,   224,     5,   215,
       5,    23,    12,   230,    33,    15,     5,    12,   224,     5,
       6,     7,    22,    39,   230,   199,   232,     5,    34,    35,
      36,    37,    38,   239,    50,     5,    52,   179,     5,    34,
      35,    36,    37,    38,     5,     6,     5,    53,   222,     5,
     125,   126,   132,    39,   129,   130,     5,    18,    53,    20,
      21,     5,     6,   138,    50,     5,    52,     5,     6,     6,
       5,     6,     7,     5,     6,     7,    20,   152,    39,    12,
      18,   161,    20,    21,    13,     5,     6,     7,    12,    50,
      19,    52,     5,     5,     6,    39,   171,    12,   173,     7,
       8,    39,     7,     8,    39,    12,    50,    39,    52,    12,
       5,     6,    50,    12,    52,    50,    12,    52,    50,    39,
      52,    12,     8,    13,     5,    20,    13,    39,     5,   204,
      50,     5,    52,     4,     9,     5,    15,     5,    50,   214,
      52,     5,     5,    19,    39,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   229,    50,     6,    52,    13,    19,
      19,    12,   237,    19,    13,   240,    10,     6,     5,     5,
     245,    42,    43,    44,    45,    46,    47,    48,    49,    12,
       5,     5,    11,   258,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    19,    13,    12,     6,    13,    13,    12,
       5,    32,     6,    12,    12,    17,    13,    13,     5,    12,
       6,    12,     5,    15,    13,    15,    14,    40,    12,    41,
      40,    13,    12,    51,    19,    16,   119,    16,    15,    13,
      16,    13,    17,    13,    13,    16,    12,     5,    16,    22,
      17,    13,    13,    12,    32,    19,    13,    13,     6,     6,
      13,     7,    17,    17,     7,    17,    17,    17,    17,    32,
       7,     7,    32,    12,    39,    13,    17,     7,     7,   175,
     159,    -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    56,    59,     0,     4,    42,    43,    44,    45,    46,
      47,    48,    49,    57,    79,    81,    82,     5,     5,     5,
       5,     5,     5,     5,     5,     5,    58,     6,    12,    12,
      12,    12,    12,    12,    12,    12,     3,     4,    60,     8,
       5,    13,     5,     5,     5,    13,     5,     5,     5,     9,
      19,     6,    13,    19,    19,    12,    13,    19,     6,    23,
      10,     5,    71,     6,     5,     5,     5,    12,    34,    35,
      36,    37,    38,    53,    77,    78,    83,    12,     5,    61,
       5,    11,    19,    80,     5,     6,     7,    39,    50,    52,
      76,    71,    13,    80,    12,    77,     5,    18,    77,    13,
      15,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      77,    13,     5,    18,    21,    63,    64,    65,    72,     6,
      12,     5,    13,    19,    12,    15,    22,    71,    32,    12,
      12,     7,     6,    13,    75,    77,    13,    12,    15,     5,
      78,    78,    78,    78,    78,    78,    78,    78,    78,     5,
      33,    13,    12,    15,     7,     8,    69,    17,     5,    61,
      14,     6,     5,    75,    77,    77,     7,    40,    77,    77,
      71,    12,    13,    19,    73,    74,    13,    77,    16,    12,
      77,    16,    65,    63,    15,    71,    13,    16,    17,    32,
      13,    13,     7,    77,    77,    73,    16,    75,    13,    12,
       7,    16,     7,    17,    22,    41,    76,    76,    13,    13,
      65,    68,     5,    77,    12,    51,    67,    13,    13,    17,
      77,    76,    19,    66,     6,     6,    13,    65,     5,    20,
      62,    64,    70,    76,    39,    17,    77,    20,    64,    70,
      20,    76,    32,    17,    77,    20,    77,    40,     7,    17,
      77,    17,    32,     7,    17,     7,    41,     7,    12,    77,
      13,    17,     7,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    58,    58,    59,    59,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    65,    66,    67,
      67,    68,    68,    69,    69,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    72,    73,    73,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    81,    82,    82,
      82,    82,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,    25,     2,     0,     2,     0,     6,     8,
       2,     0,     2,     1,     2,     0,     2,     2,     2,     2,
       0,     2,     0,    12,    11,    11,    10,     2,     1,     2,
       0,     3,     1,     1,     1,     2,     0,     2,     2,     0,
       3,     9,     4,     7,     7,     5,     5,     5,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     1,     6,
       4,     1,     1,     1,     1,     1,     5,     4,     2,     3,
       1,     1,     3,     2,     7,     8,    10,    11,     7,     8,
      10,    11,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 46 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-3].text);strs[1]= (yyvsp[-2].text);strs[2]= (yyvsp[-1].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);	
	printf("%s",(yyval.text));
	return 0;
}
#line 1577 "A1.tab.c"
    break;

  case 3:
#line 59 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(25,sizeof(char *));
	strs[0]= (yyvsp[-24].text);strs[1]= (yyvsp[-23].text);strs[2]= (yyvsp[-22].text);strs[3]= (yyvsp[-21].text);strs[4]= (yyvsp[-20].text);strs[5]= (yyvsp[-19].text);strs[6]= (yyvsp[-18].text);strs[7]= (yyvsp[-17].text);strs[8]= (yyvsp[-16].text);strs[9]= (yyvsp[-15].text);strs[10]= (yyvsp[-14].text);strs[11]= (yyvsp[-13].text);strs[12]= (yyvsp[-12].text);strs[13]= (yyvsp[-11].text);strs[14]= (yyvsp[-10].text);strs[15]= (yyvsp[-9].text);strs[16]= (yyvsp[-8].text);strs[17]= (yyvsp[-7].text);strs[18]= (yyvsp[-6].text);strs[19]= (yyvsp[-5].text);strs[20]= (yyvsp[-4].text);strs[21]= (yyvsp[-3].text);strs[22]= (yyvsp[-2].text);strs[23]= (yyvsp[-1].text);strs[24]= (yyvsp[0].text);
	final = func(strs,25);
	freeAll(strs,25);
	(yyval.text) = final;
	free(strs);
}
#line 1592 "A1.tab.c"
    break;

  case 4:
#line 70 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1607 "A1.tab.c"
    break;

  case 5:
#line 81 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	(yyval.text) = final;
	free(strs);
}
#line 1622 "A1.tab.c"
    break;

  case 6:
#line 92 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1637 "A1.tab.c"
    break;

  case 7:
#line 103 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	(yyval.text) = final;
	free(strs);
}
#line 1652 "A1.tab.c"
    break;

  case 8:
#line 114 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(6,sizeof(char *));
	strs[0]= (yyvsp[-5].text);strs[1]= (yyvsp[-4].text);strs[2]= (yyvsp[-3].text);strs[3]= (yyvsp[-2].text);strs[4]= (yyvsp[-1].text);strs[5]= (yyvsp[0].text);
	final = func(strs,6);
	freeAll(strs,6);
	(yyval.text) = final;
	free(strs);	
}
#line 1667 "A1.tab.c"
    break;

  case 9:
#line 125 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(8,sizeof(char *));
	strs[0]= (yyvsp[-7].text);strs[1]= (yyvsp[-6].text);strs[2]= (yyvsp[-5].text);strs[3]= (yyvsp[-4].text);strs[4]= (yyvsp[-3].text);strs[5]= (yyvsp[-2].text);strs[6]= (yyvsp[-1].text);strs[7]= (yyvsp[0].text);
	final = func(strs,8);
	freeAll(strs,8);
	(yyval.text) = final;
	free(strs);
}
#line 1682 "A1.tab.c"
    break;

  case 10:
#line 136 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1697 "A1.tab.c"
    break;

  case 11:
#line 147 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	(yyval.text) = final;
	free(strs);
}
#line 1712 "A1.tab.c"
    break;

  case 12:
#line 158 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1727 "A1.tab.c"
    break;

  case 13:
#line 169 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 1742 "A1.tab.c"
    break;

  case 14:
#line 180 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1757 "A1.tab.c"
    break;

  case 15:
#line 191 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	(yyval.text) = final;
	free(strs);
}
#line 1772 "A1.tab.c"
    break;

  case 16:
#line 202 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1787 "A1.tab.c"
    break;

  case 17:
#line 213 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1802 "A1.tab.c"
    break;

  case 18:
#line 224 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1817 "A1.tab.c"
    break;

  case 19:
#line 235 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1832 "A1.tab.c"
    break;

  case 20:
#line 246 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	(yyval.text) = final;
	free(strs);
}
#line 1847 "A1.tab.c"
    break;

  case 21:
#line 257 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1862 "A1.tab.c"
    break;

  case 22:
#line 268 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	(yyval.text) = final;
	free(strs);
}
#line 1877 "A1.tab.c"
    break;

  case 23:
#line 279 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(12,sizeof(char *));
	strs[0]= (yyvsp[-11].text);strs[1]= (yyvsp[-10].text);strs[2]= (yyvsp[-9].text);strs[3]= (yyvsp[-8].text);strs[4]= (yyvsp[-7].text);strs[5]= (yyvsp[-6].text);strs[6]= (yyvsp[-5].text);strs[7]= (yyvsp[-4].text);strs[8]= (yyvsp[-3].text);strs[9]= (yyvsp[-2].text);strs[10]= (yyvsp[-1].text);strs[11]= (yyvsp[0].text);
	final = func(strs,12);
	freeAll(strs,12);
	(yyval.text) = final;
	free(strs);
}
#line 1892 "A1.tab.c"
    break;

  case 24:
#line 290 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(11,sizeof(char *));
	strs[0]= (yyvsp[-10].text);strs[1]= (yyvsp[-9].text);strs[2]= (yyvsp[-8].text);strs[3]= (yyvsp[-7].text);strs[4]= (yyvsp[-6].text);strs[5]= (yyvsp[-5].text);strs[6]= (yyvsp[-4].text);strs[7]= (yyvsp[-3].text);strs[8]= (yyvsp[-2].text);strs[9]= (yyvsp[-1].text);strs[10]= (yyvsp[0].text);
	final = func(strs,11);
	freeAll(strs,11);
	(yyval.text) = final;
	free(strs);
}
#line 1907 "A1.tab.c"
    break;

  case 25:
#line 301 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(11,sizeof(char *));
	strs[0]= (yyvsp[-10].text);strs[1]= (yyvsp[-9].text);strs[2]= (yyvsp[-8].text);strs[3]= (yyvsp[-7].text);strs[4]= (yyvsp[-6].text);strs[5]= (yyvsp[-5].text);strs[6]= (yyvsp[-4].text);strs[7]= (yyvsp[-3].text);strs[8]= (yyvsp[-2].text);strs[9]= (yyvsp[-1].text);strs[10]= (yyvsp[0].text);
	final = func(strs,11);
	freeAll(strs,11);
	(yyval.text) = final;
	free(strs);
}
#line 1922 "A1.tab.c"
    break;

  case 26:
#line 312 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(10,sizeof(char *));
	strs[0]= (yyvsp[-9].text);strs[1]= (yyvsp[-8].text);strs[2]= (yyvsp[-7].text);strs[3]= (yyvsp[-6].text);strs[4]= (yyvsp[-5].text);strs[5]= (yyvsp[-4].text);strs[6]= (yyvsp[-3].text);strs[7]= (yyvsp[-2].text);strs[8]= (yyvsp[-1].text);strs[9]= (yyvsp[0].text);
	final = func(strs,10);
	freeAll(strs,10);
	(yyval.text) = final;
	free(strs);
}
#line 1937 "A1.tab.c"
    break;

  case 27:
#line 323 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1952 "A1.tab.c"
    break;

  case 28:
#line 334 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);	
}
#line 1967 "A1.tab.c"
    break;

  case 29:
#line 345 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 1982 "A1.tab.c"
    break;

  case 30:
#line 356 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	(yyval.text) = final;
	free(strs);
}
#line 1997 "A1.tab.c"
    break;

  case 31:
#line 367 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2012 "A1.tab.c"
    break;

  case 32:
#line 378 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 2027 "A1.tab.c"
    break;

  case 33:
#line 389 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 2042 "A1.tab.c"
    break;

  case 34:
#line 400 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 2057 "A1.tab.c"
    break;

  case 35:
#line 411 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 2072 "A1.tab.c"
    break;

  case 36:
#line 422 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	(yyval.text) = final;
	free(strs);
}
#line 2087 "A1.tab.c"
    break;

  case 37:
#line 433 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);	
}
#line 2102 "A1.tab.c"
    break;

  case 38:
#line 444 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 2117 "A1.tab.c"
    break;

  case 39:
#line 455 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	(yyval.text) = final;
	free(strs);
}
#line 2132 "A1.tab.c"
    break;

  case 40:
#line 466 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2147 "A1.tab.c"
    break;

  case 41:
#line 477 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(9,sizeof(char *));
	strs[0]= (yyvsp[-8].text);strs[1]= (yyvsp[-7].text);strs[2]= (yyvsp[-6].text);strs[3]= (yyvsp[-5].text);strs[4]= (yyvsp[-4].text);strs[5]= (yyvsp[-3].text);strs[6]= (yyvsp[-2].text);strs[7]= (yyvsp[-1].text);strs[8]= (yyvsp[0].text);
	final = func(strs,9);
	freeAll(strs,9);
	(yyval.text) = final;
	free(strs);
}
#line 2162 "A1.tab.c"
    break;

  case 42:
#line 488 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(4,sizeof(char *));
	strs[0]= (yyvsp[-3].text);strs[1]= (yyvsp[-2].text);strs[2]= (yyvsp[-1].text);strs[3]= (yyvsp[0].text);
	final = func(strs,4);
	freeAll(strs,4);
	(yyval.text) = final;
	free(strs);
}
#line 2177 "A1.tab.c"
    break;

  case 43:
#line 499 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(7,sizeof(char *));
	strs[0]= (yyvsp[-6].text);strs[1]= (yyvsp[-5].text);strs[2]= (yyvsp[-4].text);strs[3]= (yyvsp[-3].text);strs[4]= (yyvsp[-2].text);strs[5]= (yyvsp[-1].text);strs[6]= (yyvsp[0].text);
	final = func(strs,7);
	freeAll(strs,7);
	(yyval.text) = final;
	free(strs);
}
#line 2192 "A1.tab.c"
    break;

  case 44:
#line 510 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(7,sizeof(char *));
	strs[0]= (yyvsp[-6].text);strs[1]= (yyvsp[-5].text);strs[2]= (yyvsp[-4].text);strs[3]= (yyvsp[-3].text);strs[4]= (yyvsp[-2].text);strs[5]= (yyvsp[-1].text);strs[6]= (yyvsp[0].text);
	final = func(strs,7);
	freeAll(strs,7);
	(yyval.text) = final;
	free(strs);
}
#line 2207 "A1.tab.c"
    break;

  case 45:
#line 521 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(5,sizeof(char *));
	strs[0]= (yyvsp[-4].text);strs[1]= (yyvsp[-3].text);strs[2]= (yyvsp[-2].text);strs[3]= (yyvsp[-1].text);strs[4]= (yyvsp[0].text);
	final = func(strs,5);
	freeAll(strs,5);
	(yyval.text) = final;
	free(strs);
}
#line 2222 "A1.tab.c"
    break;

  case 46:
#line 532 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(5,sizeof(char *));
	strs[0]= (yyvsp[-4].text);strs[1]= (yyvsp[-3].text);strs[2]= (yyvsp[-2].text);strs[3]= (yyvsp[-1].text);strs[4]= (yyvsp[0].text);
	final = func(strs,5);
	freeAll(strs,5);
	(yyval.text) = final;
	free(strs);
}
#line 2237 "A1.tab.c"
    break;

  case 47:
#line 543 "A1.y"
{
	int index = -1;
	for(int i = 0;i < __DEFSTMTCNT;i++)
	{
		if(strcmp(defStmt[i].id,(yyvsp[-4].text))==0)
		{
			index = i;
			break;
		}
	}
	if(index == -1)
	{
		char *final;
		char **strs;
		strs = (char **)calloc(5,sizeof(char *));
		strs[0]= (yyvsp[-4].text);strs[1]= (yyvsp[-3].text);strs[2]= (yyvsp[-2].text);strs[3]= (yyvsp[-1].text);strs[4]= (yyvsp[0].text);
		final = func(strs,5);
		freeAll(strs,5);
		(yyval.text) = final;
		free(strs);
	}
	else
	{
		(yyval.text) = (char *)calloc(1011,sizeof(char *));
		(yyval.text)[0] = '\0';
		strcat((yyval.text),"{");
		int args = 0;
		int l = strlen((yyvsp[-2].text));
		char idents[10][50];
		int c = 0;
		for(int i = 0;i < l;i++)
		{
			if((yyvsp[-2].text)[i]==' ') continue;
			if((yyvsp[-2].text)[i]==',')
			{
				idents[args][c] = '\0';
				args++;
				c = 0;
			}
			else
			{
				idents[args][c] = (yyvsp[-2].text)[i];
				c++;
			}
		}
		if(c!=0)
		{
			idents[args][c] = '\0';
			args++;
		}
		for(int i = 0;i < defStmt[index].lenCopy;i++)
		{
			if(defStmt[index].whatToCopy[i] >= 1000)
			{
				int a = defStmt[index].whatToCopy[i] - 1000;
				strcat((yyval.text),idents[a]);
			}
			else
			{
				int a = defStmt[index].whatToCopy[i];
				strcat((yyval.text),defStmt[index].strs[a]);
			}
			strcat((yyval.text)," ");
		}
		strcat((yyval.text),"} ");
	}
}
#line 2309 "A1.tab.c"
    break;

  case 48:
#line 611 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2324 "A1.tab.c"
    break;

  case 49:
#line 622 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2339 "A1.tab.c"
    break;

  case 50:
#line 633 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2354 "A1.tab.c"
    break;

  case 51:
#line 644 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2369 "A1.tab.c"
    break;

  case 52:
#line 655 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2384 "A1.tab.c"
    break;

  case 53:
#line 666 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2399 "A1.tab.c"
    break;

  case 54:
#line 677 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2414 "A1.tab.c"
    break;

  case 55:
#line 688 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2429 "A1.tab.c"
    break;

  case 56:
#line 699 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(4,sizeof(char *));
	strs[0]= (yyvsp[-3].text);strs[1]= (yyvsp[-2].text);strs[2]= (yyvsp[-1].text);strs[3]= (yyvsp[0].text);
	final = func(strs,4);
	freeAll(strs,4);
	(yyval.text) = final;
	free(strs);
}
#line 2444 "A1.tab.c"
    break;

  case 57:
#line 710 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2459 "A1.tab.c"
    break;

  case 58:
#line 721 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 2474 "A1.tab.c"
    break;

  case 59:
#line 732 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(6,sizeof(char *));
	strs[0]= (yyvsp[-5].text);strs[1]= (yyvsp[-4].text);strs[2]= (yyvsp[-3].text);strs[3]= (yyvsp[-2].text);strs[4]= (yyvsp[-1].text);strs[5]= (yyvsp[0].text);
	final = func(strs,6);
	freeAll(strs,6);
	(yyval.text) = final;
	free(strs);
}
#line 2489 "A1.tab.c"
    break;

  case 60:
#line 743 "A1.y"
{
	int index = -1;
	for(int i = 0;i < __DEFEXPCNT;i++)
	{
		if(strcmp(defEXP[i].id,(yyvsp[-3].text))==0)
		{
			index = i;
			break;
		}
	}
	if(index == -1)
	{
		char *final;
		char **strs;
		strs = (char **)calloc(4,sizeof(char *));
		strs[0]= (yyvsp[-3].text);strs[1]= (yyvsp[-2].text);strs[2]= (yyvsp[-1].text);strs[3]= (yyvsp[0].text);
		final = func(strs,4);
		freeAll(strs,4);
		(yyval.text) = final;
		free(strs);
	}
	else
	{
		(yyval.text) = (char *)calloc(1011,sizeof(char *));
		(yyval.text)[0] = '\0';
		strcat((yyval.text),"(");
		int args = 0;
		int l = strlen((yyvsp[-1].text));
		char idents[10][33];
		int c = 0;
		for(int i = 0;i < l;i++)
		{
			if((yyvsp[-1].text)[i]==' ') continue;
			if((yyvsp[-1].text)[i]==',')
			{
				idents[args][c] = '\0';
				args++;
				c = 0;
			}
			else
			{
				idents[args][c] = (yyvsp[-1].text)[i];
				c++;
			}
		}
		if(c!=0)
		{
			idents[args][c] = '\0';
			args++;
		}
		for(int i = 0;i < defEXP[index].lenCopy;i++)
		{
			if(defEXP[index].whatToCopy[i] >= 1000)
			{
				int a = defEXP[index].whatToCopy[i] - 1000;
				strcat((yyval.text),idents[a]);
			}
			else
			{
				int a = defEXP[index].whatToCopy[i];
				strcat((yyval.text),defEXP[index].strs[a]);
			}
			strcat((yyval.text)," ");
		}
		strcat((yyval.text),") ");
	}

}
#line 2562 "A1.tab.c"
    break;

  case 61:
#line 812 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 2577 "A1.tab.c"
    break;

  case 62:
#line 823 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 2592 "A1.tab.c"
    break;

  case 63:
#line 834 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 2607 "A1.tab.c"
    break;

  case 64:
#line 845 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 2622 "A1.tab.c"
    break;

  case 65:
#line 856 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 2637 "A1.tab.c"
    break;

  case 66:
#line 867 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(5,sizeof(char *));
	strs[0]= (yyvsp[-4].text);strs[1]= (yyvsp[-3].text);strs[2]= (yyvsp[-2].text);strs[3]= (yyvsp[-1].text);strs[4]= (yyvsp[0].text);
	final = func(strs,5);
	freeAll(strs,5);
	(yyval.text) = final;
	free(strs);
}
#line 2652 "A1.tab.c"
    break;

  case 67:
#line 878 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(4,sizeof(char *));
	strs[0]= (yyvsp[-3].text);strs[1]= (yyvsp[-2].text);strs[2]= (yyvsp[-1].text);strs[3]= (yyvsp[0].text);
	final = func(strs,4);
	freeAll(strs,4);
	(yyval.text) = final;
	free(strs);
}
#line 2667 "A1.tab.c"
    break;

  case 68:
#line 889 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);
}
#line 2682 "A1.tab.c"
    break;

  case 69:
#line 900 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2697 "A1.tab.c"
    break;

  case 70:
#line 912 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 2712 "A1.tab.c"
    break;

  case 71:
#line 923 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 2727 "A1.tab.c"
    break;

  case 72:
#line 934 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= (yyvsp[-2].text);strs[1]= (yyvsp[-1].text);strs[2]= (yyvsp[0].text);
	final = func(strs,3);
	freeAll(strs,3);
	(yyval.text) = final;
	free(strs);
}
#line 2742 "A1.tab.c"
    break;

  case 73:
#line 945 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= (yyvsp[-1].text);strs[1]= (yyvsp[0].text);
	final = func(strs,2);
	freeAll(strs,2);
	(yyval.text) = final;
	free(strs);	
}
#line 2757 "A1.tab.c"
    break;

  case 74:
#line 956 "A1.y"
{

	__DEFSTMTCNT++;
	assert(__DEFSTMTCNT <= 100);
	int idLen = strlen((yyvsp[-5].text));
	int index = __DEFSTMTCNT-1;
	defStmt[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defStmt[index].id)[0] = '\0';
	strcat(defStmt[index].id,(yyvsp[-5].text));
	defStmt[index].lenCopy = 1;
	int stmtLen = strlen((yyvsp[-1].text));
	defStmt[index].strs[0] = (char *)calloc(stmtLen+1,sizeof(char));
	defStmt[index].strs[0][0] = '\0';
	defStmt[index].whatToCopy[0] = 0;
	strcat(defStmt[index].strs[0],(yyvsp[-1].text));
	(yyval.text) = (char *) malloc(sizeof(char));
	(yyval.text)[0] = '\0';
}
#line 2780 "A1.tab.c"
    break;

  case 75:
#line 975 "A1.y"
{
	__DEFSTMTCNT++;
	assert(__DEFSTMTCNT <= 100);
	int idLen = strlen((yyvsp[-6].text));
	int index = __DEFSTMTCNT-1;
	defStmt[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defStmt[index].id)[0] = '\0';
	strcat(defStmt[index].id,(yyvsp[-6].text));
	char arg[33];
	arg[0] = '\0';
	strcat(arg,(yyvsp[-4].text));	
	int argLen = strlen((yyvsp[-4].text));
	int stmtLen = strlen((yyvsp[-1].text));
	int p = -1;
	int strCnt = 0;
	defStmt[index].lenCopy = 0;
	for(int i = 0;i < stmtLen;i++)
	{
		int poss = 1;
		int j;
		for(j = i;(j < stmtLen) && (j < i + argLen);j++)
		{
			if(arg[j-i]!=(yyvsp[-1].text)[j])
			{
				poss = 0;
			}
		}
		if(j != i + argLen || ((yyvsp[-1].text)[j]!='\0' && (yyvsp[-1].text)[j] != ' ')) poss = 0;
		if(poss)
		{
			int len = i - p - 1;
			if(len > 0)
			{
				defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
				defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
				defStmt[index].lenCopy++;
				int c =0;
				for(int k = p + 1;k < i;k++)
				{
					defStmt[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
					c++;
				}
				defStmt[index].strs[strCnt][c] = '\0';
				strCnt++;
			}
			defStmt[index].whatToCopy[defStmt[index].lenCopy] = 1000;
			defStmt[index].lenCopy++;
			p = i + argLen - 1;
		}

	}
	int len = stmtLen - p - 1;
	if(len > 0)
	{
		defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
		defStmt[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < stmtLen;k++)
		{
			defStmt[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
			c++;
		}
		defStmt[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	(yyval.text) = (char *) malloc(sizeof(char));
	(yyval.text)[0] = '\0';

}
#line 2855 "A1.tab.c"
    break;

  case 76:
#line 1046 "A1.y"
{
	__DEFSTMTCNT++;
	assert(__DEFSTMTCNT <= 100);
	int idLen = strlen((yyvsp[-8].text));
	int index = __DEFSTMTCNT-1;
	defStmt[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defStmt[index].id)[0] = '\0';
	strcat(defStmt[index].id,(yyvsp[-8].text));	
	char arg[2][33];arg[0][0] = '\0';arg[1][0] = '\0';
	strcat(arg[0],(yyvsp[-6].text));
	strcat(arg[1],(yyvsp[-4].text));
	int argLen[2];	
	argLen[0] = strlen((yyvsp[-6].text));
	argLen[1] = strlen((yyvsp[-4].text));
	int stmtLen = strlen((yyvsp[-1].text));
	int p = -1;
	int strCnt = 0;
	defStmt[index].lenCopy = 0;
	for(int i = 0;i < stmtLen;i++)
	{
		for(int a = 0;a < 2;a++)
		{
			int poss = 1;
			int j;
			for(j = i;(j < stmtLen) && (j < i + argLen[a]);j++)
			{
				if(arg[a][j-i]!=(yyvsp[-1].text)[j])
				{
					poss = 0;
				}
			}
			if(j != i + argLen[a] || ((yyvsp[-1].text)[j]!='\0' && (yyvsp[-1].text)[j] != ' ')) poss = 0;
			if(poss)
			{
				int len = i - p - 1;
				if(len > 0)
				{
					defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
					defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
					defStmt[index].lenCopy++;
					int c =0;
					for(int k = p + 1;k < i;k++)
					{
						defStmt[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
						c++;
					}
					defStmt[index].strs[strCnt][c] = '\0';
					strCnt++;
				}
				defStmt[index].whatToCopy[defStmt[index].lenCopy] = 1000+a;
				defStmt[index].lenCopy++;
				p = i + argLen[a] - 1;
			}
		}

	}
	int len = stmtLen - p - 1;
	if(len > 0)
	{
		defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
		defStmt[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < stmtLen;k++)
		{
			defStmt[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
			c++;
		}
		defStmt[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	(yyval.text) = (char *) malloc(sizeof(char));
	(yyval.text)[0] = '\0';
}
#line 2934 "A1.tab.c"
    break;

  case 77:
#line 1121 "A1.y"
{
	__DEFSTMTCNT++;
	assert(__DEFSTMTCNT <= 100);
	int idLen = strlen((yyvsp[-9].text));
	int index = __DEFSTMTCNT-1;
	defStmt[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defStmt[index].id)[0] = '\0';
	strcat(defStmt[index].id,(yyvsp[-9].text));
	int argCnt =  2;	
	char arg[10][33];
	arg[0][0] = '\0';
	arg[1][0] = '\0';
	strcat(arg[0],(yyvsp[-7].text));
	strcat(arg[1],(yyvsp[-5].text));
	int argLen[10];
	argLen[0] = strlen(arg[0]);
	argLen[1] = strlen(arg[1]);
	int cmIDLen = strlen((yyvsp[-4].text));
	for(int i = 0;i < cmIDLen;i++)
	{
		if((yyvsp[-4].text)[i]==',')
		{
			int c = 0;
			int j;
			for(j = i+2;j < cmIDLen;j++)
			{
				if((yyvsp[-4].text)[j]==' ' || (yyvsp[-4].text)[j] == '\0')
				{
					arg[argCnt][c] = '\0';
					c++;
					argLen[argCnt] = c-1;
					argCnt++;
					break;
				}
				arg[argCnt][c] = (yyvsp[-4].text)[j];
				c++;
			}
			i = j - 1;
		}
	}
	int stmtLen = strlen((yyvsp[-1].text));
	int p = -1;
	int strCnt = 0;
	defStmt[index].lenCopy = 0;
	for(int i = 0;i < stmtLen;i++)
	{
		for(int a = 0;a < argCnt;a++)
		{
			int poss = 1;
			int j;
			for(j = i;(j < stmtLen) && (j < i + argLen[a]);j++)
			{
				if(arg[a][j-i]!=(yyvsp[-1].text)[j])
				{
					poss = 0;
				}
			}
			if(j != i + argLen[a] || ((yyvsp[-1].text)[j]!='\0' && (yyvsp[-1].text)[j] != ' ')) poss = 0;
			if(poss)
			{
				int len = i - p - 1;
				if(len > 0)
				{
					defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
					defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
					defStmt[index].lenCopy++;
					int c =0;
					for(int k = p + 1;k < i;k++)
					{
						defStmt[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
						c++;
					}
					defStmt[index].strs[strCnt][c] = '\0';
					strCnt++;
				}
				defStmt[index].whatToCopy[defStmt[index].lenCopy] = 1000+a;
				defStmt[index].lenCopy++;
				p = i + argLen[a] - 1;
			}
		}

	}
	int len = stmtLen - p - 1;
	if(len > 0)
	{
		defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
		defStmt[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < stmtLen;k++)
		{
			defStmt[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
			c++;
		}
		defStmt[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	(yyval.text) = (char *) malloc(sizeof(char));
	(yyval.text)[0] = '\0';
}
#line 3039 "A1.tab.c"
    break;

  case 78:
#line 1222 "A1.y"
{
	__DEFEXPCNT++;
	assert(__DEFEXPCNT <= 100);
	int idLen = strlen((yyvsp[-5].text));
	int index = __DEFEXPCNT-1;
	defEXP[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defEXP[index].id)[0] = '\0';
	strcat(defEXP[index].id,(yyvsp[-5].text));
	defEXP[index].lenCopy = 1;
	int expLen = strlen((yyvsp[-1].text));
	defEXP[index].strs[0] = (char *)calloc(expLen+1,sizeof(char));
	defEXP[index].strs[0][0] = '\0';
	defEXP[index].whatToCopy[0] = 0;
	strcat(defEXP[index].strs[0],(yyvsp[-1].text));
	(yyval.text) = (char *) malloc(sizeof(char));
	(yyval.text)[0] = '\0';
}
#line 3061 "A1.tab.c"
    break;

  case 79:
#line 1240 "A1.y"
{
	__DEFEXPCNT++;
	assert(__DEFEXPCNT <= 100);
	int idLen = strlen((yyvsp[-6].text));
	int index = __DEFEXPCNT-1;
	defEXP[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defEXP[index].id)[0] = '\0';
	strcat(defEXP[index].id,(yyvsp[-6].text));
	char arg[33];
	arg[0] = '\0';
	strcat(arg,(yyvsp[-4].text));	
	int argLen = strlen((yyvsp[-4].text));
	int expLen = strlen((yyvsp[-1].text));
	int p = -1;
	int strCnt = 0;
	defEXP[index].lenCopy = 0;
	for(int i = 0;i < expLen;i++)
	{
		int poss = 1;
		int j;
		for(j = i;(j < expLen) && (j < i + argLen);j++)
		{
			if(arg[j-i]!=(yyvsp[-1].text)[j])
			{
				poss = 0;
			}
		}
		if(j != i + argLen || ((yyvsp[-1].text)[j]!='\0' && (yyvsp[-1].text)[j] != ' ')) poss = 0;
		if(poss)
		{
			int len = i - p - 1;
			if(len > 0)
			{
				defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
				defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
				defEXP[index].lenCopy++;
				int c =0;
				for(int k = p + 1;k < i;k++)
				{
					defEXP[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
					c++;
				}
				defEXP[index].strs[strCnt][c] = '\0';
				strCnt++;
			}
			defEXP[index].whatToCopy[defEXP[index].lenCopy] = 1000;
			defEXP[index].lenCopy++;
			p = i + argLen - 1;
		}

	}
	int len = expLen - p - 1;
	if(len > 0)
	{
		defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
		defEXP[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < expLen;k++)
		{
			defEXP[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
			c++;
		}
		defEXP[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	(yyval.text) = (char *) malloc(sizeof(char));
	(yyval.text)[0] = '\0';

}
#line 3136 "A1.tab.c"
    break;

  case 80:
#line 1311 "A1.y"
{
	__DEFEXPCNT++;
	assert(__DEFEXPCNT <= 100);
	int idLen = strlen((yyvsp[-8].text));
	int index = __DEFEXPCNT-1;
	defEXP[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defEXP[index].id)[0] = '\0';
	strcat(defEXP[index].id,(yyvsp[-8].text));	
	char arg[2][33];arg[0][0] = '\0';arg[1][0] = '\0';
	strcat(arg[0],(yyvsp[-6].text));
	strcat(arg[1],(yyvsp[-4].text));
	int argLen[2];	
	argLen[0] = strlen((yyvsp[-6].text));
	argLen[1] = strlen((yyvsp[-4].text));
	int expLen = strlen((yyvsp[-1].text));
	int p = -1;
	int strCnt = 0;
	defEXP[index].lenCopy = 0;
	for(int i = 0;i < expLen;i++)
	{
		for(int a = 0;a < 2;a++)
		{
			int poss = 1;
			int j;
			for(j = i;(j < expLen) && (j < i + argLen[a]);j++)
			{
				if(arg[a][j-i]!=(yyvsp[-1].text)[j])
				{
					poss = 0;
				}
			}
			if(j != i + argLen[a] || ((yyvsp[-1].text)[j]!='\0' && (yyvsp[-1].text)[j] != ' ')) poss = 0;
			if(poss)
			{
				int len = i - p - 1;
				if(len > 0)
				{
					defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
					defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
					defEXP[index].lenCopy++;
					int c =0;
					for(int k = p + 1;k < i;k++)
					{
						defEXP[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
						c++;
					}
					defEXP[index].strs[strCnt][c] = '\0';
					strCnt++;
				}
				defEXP[index].whatToCopy[defEXP[index].lenCopy] = 1000+a;
				defEXP[index].lenCopy++;
				p = i + argLen[a] - 1;
			}
		}

	}
	int len = expLen - p - 1;
	if(len > 0)
	{
		defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
		defEXP[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < expLen;k++)
		{
			defEXP[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
			c++;
		}
		defEXP[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	(yyval.text) = (char *) malloc(sizeof(char));
	(yyval.text)[0] = '\0';

}
#line 3216 "A1.tab.c"
    break;

  case 81:
#line 1387 "A1.y"
{
	__DEFEXPCNT++;
	assert(__DEFEXPCNT <= 100);
	int idLen = strlen((yyvsp[-9].text));
	int index = __DEFEXPCNT-1;
	defEXP[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defEXP[index].id)[0] = '\0';
	strcat(defEXP[index].id,(yyvsp[-9].text));
	int argCnt =  2;	
	char arg[10][33];
	arg[0][0] = '\0';
	arg[1][0] = '\0';
	strcat(arg[0],(yyvsp[-7].text));
	strcat(arg[1],(yyvsp[-5].text));
	int argLen[10];
	argLen[0] = strlen(arg[0]);
	argLen[1] = strlen(arg[1]);
	int cmIDLen = strlen((yyvsp[-4].text));
	for(int i = 0;i < cmIDLen;i++)
	{
		if((yyvsp[-4].text)[i]==',')
		{
			int c = 0;
			int j;
			for(j = i+2;j < cmIDLen;j++)
			{
				if((yyvsp[-4].text)[j]==' ' || (yyvsp[-4].text)[j] == '\0')
				{
					arg[argCnt][c] = '\0';
					c++;
					argLen[argCnt] = c-1;
					argCnt++;
					break;
				}
				arg[argCnt][c] = (yyvsp[-4].text)[j];
				c++;
			}
			i = j - 1;
		}
	}
	int expLen = strlen((yyvsp[-1].text));
	int p = -1;
	int strCnt = 0;
	defEXP[index].lenCopy = 0;
	for(int i = 0;i < expLen;i++)
	{
		for(int a = 0;a < argCnt;a++)
		{
			int poss = 1;
			int j;
			for(j = i;(j < expLen) && (j < i + argLen[a]);j++)
			{
				if(arg[a][j-i]!=(yyvsp[-1].text)[j])
				{
					poss = 0;
				}
			}
			if(j != i + argLen[a] || ((yyvsp[-1].text)[j]!='\0' && (yyvsp[-1].text)[j] != ' ')) poss = 0;
			if(poss)
			{
				int len = i - p - 1;
				if(len > 0)
				{
					defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
					defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
					defEXP[index].lenCopy++;
					int c =0;
					for(int k = p + 1;k < i;k++)
					{
						defEXP[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
						c++;
					}
					defEXP[index].strs[strCnt][c] = '\0';
					strCnt++;
				}
				defEXP[index].whatToCopy[defEXP[index].lenCopy] = 1000+a;
				defEXP[index].lenCopy++;
				p = i + argLen[a] - 1;
			}
		}

	}
	int len = expLen - p - 1;
	if(len > 0)
	{
		defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
		defEXP[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < expLen;k++)
		{
			defEXP[index].strs[strCnt][c] = (yyvsp[-1].text)[k];
			c++;
		}
		defEXP[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	(yyval.text) = (char *) malloc(sizeof(char));
	(yyval.text)[0] = '\0';

}
#line 3322 "A1.tab.c"
    break;

  case 82:
#line 1489 "A1.y"
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= (yyvsp[0].text);
	final = func(strs,1);
	freeAll(strs,1);
	(yyval.text) = final;
	free(strs);
}
#line 3337 "A1.tab.c"
    break;


#line 3341 "A1.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 1499 "A1.y"

char *func(char **strs,int cnt)
{
	int totLen = 0;
	int i;
	for(i = 0;i < cnt;i++)
	{
		totLen += strlen(strs[i]);
	}
	char *final = (char *) calloc(totLen+1+cnt,sizeof(char));
	i = 0;
	int j;
	for(j = 0;j < cnt;j++)
	{
		int k;
		int len = strlen(strs[j]);
		for(k = 0;k < len;k++)
		{
			final[i] = strs[j][k];
			i++;
		}
		final[i] = ' ';
		i++;
	}
	final[i]  = '\0';
	return final;
}
void freeAll(char **strs,int cnt)
{
	int i;
	for(i = 0;i < cnt;i++)
	{
		free(strs[i]);
	}
} 
int yyerror(char *s)
{
	printf("//Failed to parse input code\n");
	return 0;
}


int main(int argc, char **argv)
{
	//#ifdef YYDEBUG
	 	//yydebug = 1;
	//#endif
	yyparse();
	printf("\n");
	return 0;
}
