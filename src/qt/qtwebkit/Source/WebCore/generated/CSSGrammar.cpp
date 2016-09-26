/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         cssyyparse
#define yylex           cssyylex
#define yyerror         cssyyerror
#define yydebug         cssyydebug
#define yynerrs         cssyynerrs


/* Copy the first part of user declarations.  */
#line 1 "generated/CSSGrammar.y" /* yacc.c:339  */


/*
 *  Copyright (C) 2002-2003 Lars Knoll (knoll@kde.org)
 *  Copyright (C) 2004, 2005, 2006, 2007, 2008, 2009, 2010 Apple Inc. All rights reserved.
 *  Copyright (C) 2006 Alexey Proskuryakov (ap@nypop.com)
 *  Copyright (C) 2008 Eric Seidel <eric@webkit.org>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "config.h"

#include "CSSParser.h"
#include "CSSParserMode.h"
#include "CSSPrimitiveValue.h"
#include "CSSPropertyNames.h"
#include "CSSSelector.h"
#include "CSSSelectorList.h"
#include "Document.h"
#include "HTMLNames.h"
#include "MediaList.h"
#include "MediaQueryExp.h"
#include "StyleRule.h"
#include "StyleSheetContents.h"
#include "WebKitCSSKeyframeRule.h"
#include "WebKitCSSKeyframesRule.h"
#include <wtf/FastMalloc.h>
#include <stdlib.h>
#include <string.h>

using namespace WebCore;
using namespace HTMLNames;

#define YYMALLOC fastMalloc
#define YYFREE fastFree

#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 10000
#define YYDEBUG 0

#if YYDEBUG > 0
#include <wtf/text/CString.h>
#define YYPRINT(File,Type,Value) if (isCSSTokenAString(Type)) YYFPRINTF(File, "%s", String((Value).string).utf8().data())
#endif


#line 134 "generated/CSSGrammar.cpp" /* yacc.c:339  */

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
   by #include "CSSGrammar.hpp".  */
#ifndef YY_CSSYY_GENERATED_CSSGRAMMAR_HPP_INCLUDED
# define YY_CSSYY_GENERATED_CSSGRAMMAR_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int cssyydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_EOF = 0,
    LOWEST_PREC = 258,
    UNIMPORTANT_TOK = 259,
    WHITESPACE = 260,
    SGML_CD = 261,
    INCLUDES = 262,
    DASHMATCH = 263,
    BEGINSWITH = 264,
    ENDSWITH = 265,
    CONTAINS = 266,
    STRING = 267,
    IDENT = 268,
    NTH = 269,
    HEX = 270,
    IDSEL = 271,
    IMPORT_SYM = 272,
    PAGE_SYM = 273,
    MEDIA_SYM = 274,
    FONT_FACE_SYM = 275,
    CHARSET_SYM = 276,
    NAMESPACE_SYM = 277,
    VARFUNCTION = 278,
    WEBKIT_RULE_SYM = 279,
    WEBKIT_DECLS_SYM = 280,
    WEBKIT_KEYFRAME_RULE_SYM = 281,
    WEBKIT_KEYFRAMES_SYM = 282,
    WEBKIT_VALUE_SYM = 283,
    WEBKIT_MEDIAQUERY_SYM = 284,
    WEBKIT_SELECTOR_SYM = 285,
    WEBKIT_REGION_RULE_SYM = 286,
    WEBKIT_VIEWPORT_RULE_SYM = 287,
    TOPLEFTCORNER_SYM = 288,
    TOPLEFT_SYM = 289,
    TOPCENTER_SYM = 290,
    TOPRIGHT_SYM = 291,
    TOPRIGHTCORNER_SYM = 292,
    BOTTOMLEFTCORNER_SYM = 293,
    BOTTOMLEFT_SYM = 294,
    BOTTOMCENTER_SYM = 295,
    BOTTOMRIGHT_SYM = 296,
    BOTTOMRIGHTCORNER_SYM = 297,
    LEFTTOP_SYM = 298,
    LEFTMIDDLE_SYM = 299,
    LEFTBOTTOM_SYM = 300,
    RIGHTTOP_SYM = 301,
    RIGHTMIDDLE_SYM = 302,
    RIGHTBOTTOM_SYM = 303,
    ATKEYWORD = 304,
    IMPORTANT_SYM = 305,
    MEDIA_ONLY = 306,
    MEDIA_NOT = 307,
    MEDIA_AND = 308,
    REMS = 309,
    CHS = 310,
    QEMS = 311,
    EMS = 312,
    EXS = 313,
    PXS = 314,
    CMS = 315,
    MMS = 316,
    INS = 317,
    PTS = 318,
    PCS = 319,
    DEGS = 320,
    RADS = 321,
    GRADS = 322,
    TURNS = 323,
    MSECS = 324,
    SECS = 325,
    HERTZ = 326,
    KHERTZ = 327,
    DIMEN = 328,
    INVALIDDIMEN = 329,
    PERCENTAGE = 330,
    FLOATTOKEN = 331,
    INTEGER = 332,
    VW = 333,
    VH = 334,
    VMIN = 335,
    VMAX = 336,
    DPPX = 337,
    DPI = 338,
    DPCM = 339,
    URI = 340,
    FUNCTION = 341,
    ANYFUNCTION = 342,
    NOTFUNCTION = 343,
    CALCFUNCTION = 344,
    MINFUNCTION = 345,
    MAXFUNCTION = 346,
    VAR_DEFINITION = 347,
    UNICODERANGE = 348
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 90 "generated/CSSGrammar.y" /* yacc.c:355  */

bool boolean;
char character;
int integer;
double number;
CSSParserString string;

StyleRuleBase* rule;
Vector<RefPtr<StyleRuleBase> >* ruleList;
CSSParserSelector* selector;
Vector<OwnPtr<CSSParserSelector> >* selectorList;
CSSSelector::MarginBoxType marginBox;
CSSSelector::Relation relation;
MediaQuerySet* mediaList;
MediaQuery* mediaQuery;
MediaQuery::Restrictor mediaQueryRestrictor;
MediaQueryExp* mediaQueryExp;
CSSParserValue value;
CSSParserValueList* valueList;
Vector<OwnPtr<MediaQueryExp> >* mediaQueryExpList;
StyleKeyframe* keyframe;
Vector<RefPtr<StyleKeyframe> >* keyframeRuleList;
float val;
CSSPropertyID id;
CSSParser::Location location;

#line 296 "generated/CSSGrammar.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int cssyyparse (CSSParser* parser);

#endif /* !YY_CSSYY_GENERATED_CSSGRAMMAR_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 117 "generated/CSSGrammar.y" /* yacc.c:358  */


static inline int cssyyerror(void*, const char*)
{
return 1;
}

static inline bool isCSSTokenAString(int yytype)
{
switch (yytype) {
case IDENT:
case STRING:
case NTH:
case HEX:
case IDSEL:
case DIMEN:
case INVALIDDIMEN:
case URI:
case FUNCTION:
case ANYFUNCTION:
case NOTFUNCTION:
case CALCFUNCTION:
case MINFUNCTION:
case MAXFUNCTION:
case VAR_DEFINITION:
case UNICODERANGE:
return true;
default:
return false;
}
}


#line 343 "generated/CSSGrammar.cpp" /* yacc.c:358  */

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1660

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  119
/* YYNRULES -- Number of rules.  */
#define YYNRULES  335
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  600

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   112,     2,   113,     2,     2,
     103,   101,    20,   105,   104,   108,    18,   111,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    17,   102,
       2,   110,   107,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,   109,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,    21,   100,   106,     2,     2,     2,
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
      15,    16,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   407,   407,   408,   409,   410,   411,   412,   413,   420,
     426,   432,   438,   450,   456,   473,   474,   477,   479,   480,
     483,   485,   490,   491,   495,   496,   500,   507,   509,   514,
     518,   523,   525,   532,   533,   534,   535,   536,   537,   538,
     539,   555,   558,   559,   560,   564,   565,   576,   577,   588,
     589,   590,   591,   592,   605,   606,   607,   608,   609,   610,
     614,   621,   627,   630,   633,   637,   641,   648,   652,   655,
     658,   664,   665,   669,   670,   674,   680,   683,   689,   702,
     706,   713,   716,   722,   725,   728,   734,   738,   745,   748,
     752,   757,   764,   770,   776,   782,   788,   791,   794,   801,
     894,   900,   906,   907,   911,   912,   920,   926,   930,   938,
     939,   951,   957,   963,   975,   979,   986,   990,   997,  1002,
    1009,  1010,  1014,  1014,  1022,  1025,  1028,  1031,  1034,  1037,
    1040,  1043,  1046,  1049,  1052,  1055,  1058,  1061,  1064,  1067,
    1073,  1079,  1083,  1087,  1140,  1151,  1157,  1185,  1186,  1187,
    1191,  1192,  1196,  1197,  1201,  1207,  1214,  1220,  1226,  1232,
    1237,  1245,  1253,  1259,  1265,  1268,  1272,  1280,  1287,  1293,
    1294,  1295,  1299,  1302,  1307,  1312,  1315,  1320,  1328,  1335,
    1342,  1348,  1354,  1361,  1364,  1370,  1376,  1383,  1394,  1395,
    1396,  1400,  1410,  1416,  1421,  1427,  1432,  1441,  1444,  1447,
    1450,  1453,  1456,  1462,  1463,  1467,  1478,  1487,  1517,  1531,
    1541,  1551,  1569,  1587,  1588,  1591,  1596,  1599,  1602,  1608,
    1612,  1616,  1622,  1629,  1635,  1645,  1661,  1665,  1671,  1676,
    1684,  1690,  1696,  1697,  1701,  1702,  1706,  1710,  1726,  1730,
    1733,  1736,  1742,  1743,  1744,  1745,  1751,  1752,  1753,  1754,
    1755,  1756,  1757,  1765,  1768,  1771,  1774,  1780,  1781,  1782,
    1783,  1784,  1785,  1786,  1787,  1788,  1789,  1790,  1791,  1792,
    1793,  1794,  1795,  1796,  1797,  1798,  1799,  1800,  1807,  1808,
    1809,  1810,  1811,  1812,  1813,  1814,  1818,  1826,  1835,  1846,
    1847,  1854,  1858,  1861,  1864,  1867,  1872,  1874,  1878,  1894,
    1895,  1899,  1903,  1916,  1928,  1932,  1935,  1950,  1958,  1965,
    1968,  1974,  1982,  1990,  1993,  1999,  2002,  2008,  2026,  2032,
    2033,  2037,  2040,  2040,  2040,  2040,  2040,  2040,  2040,  2040,
    2046,  2051,  2053,  2054,  2055,  2056
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "TOKEN_EOF", "error", "$undefined", "LOWEST_PREC", "UNIMPORTANT_TOK",
  "WHITESPACE", "SGML_CD", "INCLUDES", "DASHMATCH", "BEGINSWITH",
  "ENDSWITH", "CONTAINS", "STRING", "IDENT", "NTH", "HEX", "IDSEL", "':'",
  "'.'", "'['", "'*'", "'|'", "IMPORT_SYM", "PAGE_SYM", "MEDIA_SYM",
  "FONT_FACE_SYM", "CHARSET_SYM", "NAMESPACE_SYM", "VARFUNCTION",
  "WEBKIT_RULE_SYM", "WEBKIT_DECLS_SYM", "WEBKIT_KEYFRAME_RULE_SYM",
  "WEBKIT_KEYFRAMES_SYM", "WEBKIT_VALUE_SYM", "WEBKIT_MEDIAQUERY_SYM",
  "WEBKIT_SELECTOR_SYM", "WEBKIT_REGION_RULE_SYM",
  "WEBKIT_VIEWPORT_RULE_SYM", "TOPLEFTCORNER_SYM", "TOPLEFT_SYM",
  "TOPCENTER_SYM", "TOPRIGHT_SYM", "TOPRIGHTCORNER_SYM",
  "BOTTOMLEFTCORNER_SYM", "BOTTOMLEFT_SYM", "BOTTOMCENTER_SYM",
  "BOTTOMRIGHT_SYM", "BOTTOMRIGHTCORNER_SYM", "LEFTTOP_SYM",
  "LEFTMIDDLE_SYM", "LEFTBOTTOM_SYM", "RIGHTTOP_SYM", "RIGHTMIDDLE_SYM",
  "RIGHTBOTTOM_SYM", "ATKEYWORD", "IMPORTANT_SYM", "MEDIA_ONLY",
  "MEDIA_NOT", "MEDIA_AND", "REMS", "CHS", "QEMS", "EMS", "EXS", "PXS",
  "CMS", "MMS", "INS", "PTS", "PCS", "DEGS", "RADS", "GRADS", "TURNS",
  "MSECS", "SECS", "HERTZ", "KHERTZ", "DIMEN", "INVALIDDIMEN",
  "PERCENTAGE", "FLOATTOKEN", "INTEGER", "VW", "VH", "VMIN", "VMAX",
  "DPPX", "DPI", "DPCM", "URI", "FUNCTION", "ANYFUNCTION", "NOTFUNCTION",
  "CALCFUNCTION", "MINFUNCTION", "MAXFUNCTION", "VAR_DEFINITION",
  "UNICODERANGE", "'{'", "'}'", "')'", "';'", "'('", "','", "'+'", "'~'",
  "'>'", "'-'", "']'", "'='", "'/'", "'#'", "'%'", "$accept", "stylesheet",
  "webkit_rule", "webkit_keyframe_rule", "webkit_decls", "webkit_value",
  "webkit_mediaquery", "webkit_selector", "maybe_space", "maybe_sgml",
  "maybe_charset", "closing_brace", "closing_parenthesis", "charset",
  "ignored_charset", "rule_list", "valid_rule", "rule", "block_rule_list",
  "region_block_rule_list", "block_valid_rule", "block_rule",
  "at_import_header_end_maybe_space", "before_import_rule", "import",
  "namespace", "maybe_ns_prefix", "string_or_uri", "media_feature",
  "maybe_media_value", "media_query_exp", "media_query_exp_list",
  "maybe_and_media_query_exp_list", "maybe_media_restrictor",
  "media_query", "maybe_media_list", "media_list", "at_rule_body_start",
  "before_media_rule", "at_rule_header_end_maybe_space", "media", "medium",
  "before_keyframes_rule", "keyframes", "keyframe_name", "keyframes_rule",
  "keyframe_rule", "key_list", "key", "before_page_rule", "page",
  "page_selector", "declarations_and_margins", "margin_box", "$@1",
  "margin_sym", "before_font_face_rule", "font_face", "region_selector",
  "before_region_rule", "region", "combinator", "maybe_unary_operator",
  "unary_operator", "maybe_space_before_declaration",
  "before_selector_list", "at_rule_header_end", "at_selector_end",
  "ruleset", "before_selector_group_item", "selector_list",
  "selector_with_trailing_whitespace", "selector", "namespace_selector",
  "simple_selector", "simple_selector_list", "element_name",
  "specifier_list", "specifier", "class", "attr_name", "attrib", "match",
  "ident_or_string", "pseudo_page", "pseudo", "declaration_list",
  "decl_list", "decl_list_recovery", "declaration", "declaration_recovery",
  "property", "prio", "expr", "valid_expr", "expr_recovery", "operator",
  "term", "unary_term", "function", "calc_func_term", "calc_func_operator",
  "calc_maybe_space", "calc_func_paren_expr", "calc_func_expr",
  "valid_calc_func_expr", "calc_func_expr_list", "calc_function",
  "min_or_max", "min_or_max_function", "save_block", "invalid_at",
  "invalid_rule", "invalid_block", "invalid_square_brackets_block",
  "invalid_parentheses_block", "opening_parenthesis", "error_location",
  "error_recovery", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    58,    46,    91,
      42,   124,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   123,
     125,    41,    59,    40,    44,    43,   126,    62,    45,    93,
      61,    47,    35,    37
};
# endif

#define YYPACT_NINF -450

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-450)))

#define YYTABLE_NINF -300

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-300)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     955,   -61,   -28,   -24,     7,   114,    53,   210,  -450,  -450,
    -450,  -450,  -450,  -450,    63,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,   221,   221,   221,   221,   221,   221,  -450,   578,
    -450,  -450,   553,   221,   282,   201,   857,    40,   703,   374,
     492,   472,   478,  -450,   218,  -450,  -450,   240,  -450,   242,
    -450,   331,  -450,   355,  -450,   349,  -450,   794,  -450,  -450,
    -450,  -450,  -450,   198,  1323,   312,   325,    68,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,   363,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  1540,
     289,   559,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,    28,  -450,   348,   438,  -450,  -450,   427,   448,  -450,
     461,  -450,   120,   794,   152,   963,  -450,   660,    36,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  1544,
     409,    71,   261,   498,  -450,  -450,   248,   287,   493,    34,
    -450,   221,   296,   255,  -450,   405,   439,  -450,  -450,  -450,
    -450,  -450,   322,   143,  -450,   221,   221,   221,   370,   221,
     221,   668,   949,   221,   221,   221,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  1204,   221,   221,   221,   949,   221,    35,
      26,  -450,  -450,  -450,   516,  -450,  -450,  -450,  -450,   669,
    -450,  -450,  -450,   469,  -450,  -450,  -450,  -450,  -450,  -450,
     794,  -450,  -450,   660,   687,   696,  -450,  -450,   393,   117,
     444,  -450,   564,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,   225,  -450,   424,   221,   225,   275,   425,   437,   446,
     539,   451,   221,   482,   794,   469,  1077,  -450,  -450,  -450,
    -450,   221,   221,  -450,   770,  -450,  -450,  -450,    50,  -450,
    -450,  -450,    50,    50,  -450,  -450,  1571,    50,  -450,  -450,
    -450,   577,    94,   221,   221,  -450,   221,   221,  -450,    50,
     577,    70,  -450,  -450,  -450,   528,  -450,   273,   703,   703,
     438,   461,   580,   309,  -450,   221,   221,   221,  -450,   803,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,   404,
     455,   472,   221,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
      90,  -450,  -450,  -450,  -450,  -450,  -450,  -450,   574,   581,
    -450,  -450,  -450,  -450,  -450,  -450,   288,   496,   857,   221,
     221,  1112,  -450,   558,   992,   201,  -450,  -450,  -450,   467,
     999,  -450,  -450,   462,  1448,   134,  -450,   798,  -450,    44,
    -450,  -450,    40,   221,   489,  -450,  -450,  -450,  -450,   534,
    -450,   306,  -450,   221,  -450,   360,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,   221,   372,   338,  -450,  -450,  -450,
    -450,   321,   398,  -450,  -450,   518,  -450,   552,  -450,  -450,
     557,  -450,   563,  -450,   558,  -450,  1143,   107,  -450,   221,
      50,   577,   633,   647,  -450,  -450,  -450,  -450,  -450,   999,
    -450,  -450,  -450,  -450,    40,    87,   110,  -450,  -450,   295,
     307,  -450,  -450,   550,   794,  -450,  -450,  -450,   257,  -450,
    -450,   222,   254,    40,  -450,   221,  -450,  -450,   208,  -450,
    -450,  -450,   221,  -450,  -450,  -450,   134,  -450,  -450,   221,
     221,   577,   262,   221,   346,    28,  -450,  -450,   335,  -450,
    -450,  -450,   550,  -450,  -450,  -450,   229,  -450,  -450,  -450,
    -450,  -450,  -450,   515,  -450,  -450,   107,  -450,   208,  -450,
      44,  -450,   565,  -450,   703,  -450,    61,   221,   243,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,   221,  1386,  -450,   221,   107,   857,  -450,
    -450,    78,  -450,   515,  -450,   472,   191,  1404,  -450,  1474,
    -450,  -450,   221,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,   107,  -450,  -450,   221,
     221,  1305,  -450,   472,  -450,   231,  -450,   992,   107,  -450
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      15,     0,     0,     0,     0,     0,     0,     0,    15,    15,
      15,    15,    15,    15,    20,    15,    15,    15,    15,    15,
      15,     1,     3,     8,     4,     5,     6,     7,    16,     0,
      17,    21,   155,   154,     0,     0,     0,    83,     0,     0,
       0,    31,     0,    15,     0,    39,    38,     0,    34,     0,
      37,     0,    35,     0,    36,     0,    40,     0,    33,   330,
      15,    15,    15,     0,     0,   217,   214,     0,   111,   110,
     153,   152,    15,    15,   107,     0,   150,    15,    15,    15,
      15,   277,   278,   275,   274,   276,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
      15,   259,   258,   257,   279,   280,   281,   282,   283,   284,
     285,    15,    15,    15,   309,   310,    15,    15,    15,     0,
       0,     0,   236,    15,    15,    15,    15,    15,    84,    85,
      79,    86,    15,     0,   181,   187,   186,     0,     0,    15,
     182,   169,     0,   165,     0,     0,   164,   172,     0,   183,
     188,   189,   190,   331,    28,    27,    15,    19,    18,     0,
       0,    71,     0,     0,    15,    15,     0,     0,     0,     0,
     331,   231,     0,     0,    11,   218,   215,    15,    15,   330,
      15,   226,     0,     0,   109,   244,   245,   250,     0,   246,
     248,     0,     0,   249,   251,   256,    15,    15,    12,   330,
      15,    15,   235,     0,   242,   253,   254,     0,   255,     0,
       0,    13,   171,   206,     0,    15,    15,    15,   191,     0,
     170,   162,    14,     0,   166,   168,   163,    15,    15,    15,
       0,   181,   182,   175,     0,     0,   185,   184,     0,     0,
       0,    15,     0,    42,    41,    17,    44,    43,    70,    69,
      15,     0,     9,     0,    60,     0,    83,     0,     0,     0,
     119,     0,    95,     0,     0,   156,     0,   228,    15,    15,
      15,   220,   219,   331,     0,    10,    15,    15,     0,    25,
      24,   287,     0,     0,    15,    15,     0,     0,   289,   301,
     304,   296,     0,   247,   243,   331,   240,   239,   237,     0,
     296,     0,    15,    15,    15,    81,   207,   151,     0,     0,
      15,     0,     0,     0,    15,   147,   148,   149,   167,     0,
      23,   332,   331,   325,   323,   328,   329,   324,   326,   327,
      22,   322,   318,   333,   334,   335,   331,    26,   317,     0,
       0,    32,    72,    73,    74,    15,    65,    66,    15,    90,
       0,    93,    98,   103,   102,    15,   115,   114,   116,     0,
      15,   118,   143,   142,    93,   156,     0,     0,     0,   222,
     221,     0,   229,   233,     0,     0,    15,   286,   288,     0,
       0,   291,   308,   297,     0,     0,   300,   238,   312,   305,
      15,   311,    83,    99,     0,    15,    87,    15,    15,     0,
     178,     0,    15,   192,    15,     0,   198,   199,   200,   201,
     202,   193,   197,    15,   159,     0,     0,    15,    30,   316,
     315,     0,    88,    92,    15,     0,    15,     0,   117,   205,
       0,    15,     0,    93,   233,    15,     0,     0,   108,   252,
       0,   296,     0,     0,   302,   303,    15,    15,   307,     0,
      80,    15,    15,    15,    83,     0,     0,    15,   180,     0,
       0,   195,    15,     0,     0,   320,   319,   321,     0,    67,
      68,     0,     0,    83,    93,    45,    93,    93,     0,    93,
      15,   224,   232,   227,   106,   290,     0,   292,   293,   294,
     295,   296,     0,    75,    76,    82,   211,   209,     0,   208,
      15,   212,     0,   204,   203,    15,     0,    29,    63,    62,
      64,    91,    15,     0,    15,    15,     0,    15,     0,   298,
     306,    15,     0,   210,     0,    15,     0,    45,     0,   313,
      54,    17,    58,    57,    52,    53,    50,    51,    59,    49,
      97,    56,    55,   104,     0,   141,    47,     0,     0,    15,
     179,     0,   194,     0,   314,    46,     0,     0,   120,     0,
     158,    15,    78,   196,    96,   101,    15,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   113,    15,   122,     0,    17,   146,    77,
     105,     0,    15,    48,   121,     0,    15,     0,     0,   123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,     0,  -238,
    -450,  -234,  -255,  -450,  -450,  -450,   499,  -450,   138,  -450,
     125,  -450,  -450,  -450,  -448,  -125,  -450,   430,  -450,  -450,
     294,   233,  -450,  -356,   -35,  -450,   269,  -330,  -450,  -137,
      16,  -450,  -450,    17,  -450,  -450,   137,  -450,   319,  -450,
      24,  -450,  -450,  -450,  -450,  -450,  -450,    25,  -450,  -450,
    -108,  -450,   388,   -34,    -6,  -450,  -283,   529,    31,  -450,
     -32,  -450,   235,   481,  -140,  -450,   562,   313,  -126,  -450,
     397,  -450,   305,   215,   367,  -450,  -358,  -450,   662,   683,
    -146,  -450,   326,  -186,  -450,  -133,  -450,   567,  -105,  -450,
     377,  -450,  -279,   381,  -201,  -450,  -450,  -450,  -450,  -450,
    -449,   608,   609,   -15,  -450,  -450,  -450,   -98,  -123
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    33,    41,
      30,   529,   281,    31,   243,   159,    43,   245,   513,   559,
     530,   531,   255,    44,    45,    46,   251,   345,   453,   522,
     130,   131,   396,   132,   349,   471,   350,   426,    47,   257,
     534,   305,    49,   535,   355,   556,    72,    73,    74,    51,
     536,   360,   557,   584,   592,   585,    53,   537,   365,    55,
      56,   230,    75,   119,    34,    57,   367,   223,   539,   464,
     142,   143,   144,   145,   146,   401,   147,   148,   149,   150,
     313,   151,   413,   505,   361,   152,    63,    64,    65,    66,
     181,    67,   436,   120,   121,   202,   203,   122,   123,   124,
     289,   384,   385,   290,   291,   292,   301,   125,   126,   127,
     540,   541,   542,   333,   334,   335,   336,   170,   238
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    76,   133,   224,   332,   282,   300,   341,    22,    23,
      24,    25,    26,    27,   197,    32,   437,    35,    36,    37,
      38,   389,   237,   376,   155,   169,   267,   377,   378,    40,
     263,    28,   382,   -15,   431,   221,   451,   236,    15,   303,
      28,  -174,   161,   162,   388,    28,   391,   266,    48,    50,
     279,   135,   136,   137,   138,   139,    52,    54,   283,   287,
     171,   172,   173,    58,   446,   532,    28,   425,    28,   179,
     279,    16,   182,   183,   299,    17,    28,   185,   186,   187,
     188,   273,   432,    28,   250,   180,   -15,   288,   373,    29,
     318,   423,    28,   302,  -299,   199,   128,   129,   451,  -299,
     189,   295,   288,   480,   564,   532,    18,   320,   237,   237,
     588,   190,   191,   192,  -299,    28,   193,   194,   195,    19,
     516,   221,    28,   204,   205,   206,   207,   208,   372,   304,
     448,   209,   210,  -157,   279,  -174,  -174,  -174,  -157,   219,
    -174,  -174,  -174,  -174,   512,   249,   514,   515,    28,   517,
     371,   280,    20,   225,   446,   447,   239,   226,   286,   386,
     547,   467,   486,   254,   256,   258,   260,   262,   400,   402,
     552,   280,   387,   286,   390,    48,    50,   271,   272,   441,
     274,   381,   434,    52,    54,   485,   558,   563,   496,  -156,
      58,   320,    68,   237,   424,  -299,   293,   294,  -299,   415,
     296,   297,    68,   484,    69,  -299,    28,   330,  -213,    59,
      21,   497,   520,   416,    69,   307,   308,   309,   427,   337,
     222,    60,   508,   430,  -157,   338,    28,   315,   316,   317,
     225,   519,   366,   594,   226,   280,    28,   343,   347,   598,
     163,   339,   276,   320,   357,   447,   363,   277,   491,   259,
     342,  -160,  -160,   -15,   -89,   423,  -160,   227,   228,   229,
      28,   -15,    28,    61,   164,   -15,    28,    28,   368,   369,
     370,  -151,   268,    76,   165,   288,   374,   375,    28,   288,
      28,  -151,   545,    59,   379,   380,   397,   398,   261,   221,
     483,   330,   -15,   555,   554,    60,    70,   179,   174,    71,
      28,    28,   392,   393,   394,    62,    70,   458,  -213,    71,
     403,   -15,    28,   560,   414,   344,   406,   407,   408,   409,
     410,   153,   565,   583,   509,   420,    28,    28,  -161,  -161,
     596,   128,   129,  -161,   227,   228,   229,    61,   279,   321,
      28,    76,   153,   330,   288,   421,   286,   -15,   422,   593,
     286,    28,   554,   -89,   166,   262,   -89,   322,   424,   507,
     262,   252,   561,   521,   599,   304,   323,   406,   407,   408,
     409,   410,   465,   321,   -95,    28,   439,   -95,    70,    62,
     167,    71,  -213,   278,   550,   168,   -15,  -144,   533,   198,
     449,   322,  -157,   320,   321,   454,   499,   455,   456,   500,
     323,   459,   460,    28,   403,   538,   470,   -15,   501,    28,
     -15,   -83,   322,   463,   177,   286,   417,   468,   411,   412,
     153,   323,   275,   469,   473,   478,   475,   178,   533,   324,
     325,   326,   327,   328,   329,   482,   523,   153,   511,   280,
     213,   331,    28,   184,   214,   538,   489,   490,   211,   353,
     354,   492,   493,   494,   128,   129,   510,   498,   234,   212,
     235,   218,   502,   324,   325,   326,   327,   328,   329,   461,
     412,   153,    28,   153,   518,   331,   154,   157,   158,   160,
     440,   466,   220,   -15,   324,   325,   326,   327,   328,   329,
     -15,   -15,   153,   330,    28,   209,   331,    28,   264,   253,
     524,   -83,   452,   -15,   156,   526,   418,   269,   153,   544,
     -15,   248,   527,   338,   543,   320,   528,   546,   215,   216,
     217,   548,    76,   153,   351,   551,   346,   352,  -155,   306,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,   -61,  -112,   -94,
    -140,   270,    42,   153,    28,   153,   319,  -100,   356,   562,
     153,  -145,   358,   362,   153,    28,   359,   419,    28,  -234,
     199,   589,   503,   504,  -234,   340,   590,   442,   -15,   242,
     443,  -241,  -241,   314,  -241,   -61,  -112,   -94,  -140,    39,
      42,   364,   383,   -15,   591,  -100,   395,  -241,   -15,  -145,
     -15,   359,   595,   404,   429,   433,   597,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,   435,  -234,   330,   457,   474,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,   487,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,   476,   488,  -241,  -241,  -241,   477,  -241,   244,  -234,
    -234,  -234,   479,   200,  -241,   553,   549,  -241,   279,   199,
     201,  -241,  -241,    28,    28,   135,   136,   137,   138,   139,
      77,    78,   310,    79,   587,   348,   450,   495,   236,   311,
     141,   472,  -177,   566,   438,   399,    80,   236,   265,   506,
     312,  -173,   135,   136,   137,   138,   139,   233,    28,   405,
     462,   135,   136,   137,   138,   139,   134,   525,   135,   136,
     137,   138,   139,   140,   141,   428,   175,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   176,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     481,   444,   113,   114,   115,   445,   116,   246,   247,   280,
     298,   179,     0,    70,     0,    28,    71,     0,     0,     0,
     117,   118,    77,    78,     0,    79,  -177,  -177,  -177,     0,
       0,  -177,  -177,  -177,  -177,  -173,  -173,  -173,    80,  -300,
    -173,  -173,  -173,  -173,   236,     0,     0,   134,  -176,   135,
     136,   137,   138,   139,   140,   141,     0,   322,   135,   136,
     137,   138,   139,     0,     0,     0,   323,     0,     0,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,     0,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    28,     0,   113,   114,   115,     0,   116,    77,
      78,     0,    79,     0,     0,    70,     0,     0,    71,     0,
       0,     0,   117,   118,     0,    80,     0,     0,     0,   324,
     325,   326,   327,   328,   329,     0,     0,   153,     0,     0,
       0,   331,  -176,  -176,  -176,     0,     0,  -176,  -176,  -176,
    -176,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     0,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     199,   113,   114,   115,    28,   116,     0,     0,     0,     0,
       0,     0,    70,     0,     0,    71,     0,     0,     0,   117,
     118,     0,     0,     0,     0,     0,   231,   284,   135,   136,
     137,   138,   139,   232,     1,     2,     3,     0,     4,     5,
       6,     0,  -213,    59,     0,     0,     0,    28,     0,     0,
       0,     0,     0,     0,    28,    60,     0,     0,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   284,     0,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,     0,
       0,     0,   285,     0,    70,     0,     0,    71,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,  -223,   321,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    62,
       0,     0,  -213,     0,     0,     0,   322,     0,     0,     0,
       0,     0,   285,     0,    70,   323,     0,    71,     0,     0,
       0,     0,  -230,   321,     0,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,   322,     0,     0,     0,     0,     0,     0,     0,     0,
     323,     0,     0,  -225,   179,     0,     0,     0,     0,     0,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,     0,     0,   324,   325,
     326,   327,   328,   329,     0,     0,   153,  -223,     0,  -223,
     331,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,     0,     0,     0,
       0,     0,     0,   324,   325,   326,   327,   328,   329,     0,
       0,   153,  -230,     0,  -230,   331,    77,    78,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -225,     0,  -225,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,     0,   113,   114,
     115,     0,   116,     0,     0,  -213,    59,     0,     0,    70,
      28,     0,    71,     0,     0,     0,   117,   118,    60,     0,
       0,     0,     0,  -216,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,     0,
      61,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,     0,    61,     0,
       0,     0,     0,     0,     0,     0,  -213,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
       0,     0,    62,     0,   320,  -213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,     0,     0,  -216,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
       0,    61,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   320,   586,   284,     0,     0,     0,
       0,     0,     0,    62,     0,     0,  -213,  -155,     0,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,     0,  -112,   -94,  -140,
       0,     0,     0,     0,   330,     0,  -100,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     0,     0,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,     0,
       0,     0,     0,     0,    -2,   240,     0,     0,     0,     0,
       0,   285,     0,    70,     0,     0,    71,  -155,     0,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,   -61,  -112,   -94,  -140,
     241,    42,     0,     0,   330,     0,  -100,     0,     0,     0,
    -145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   242,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   196,     0,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110
};

static const yytype_int16 yycheck[] =
{
       0,    35,    37,   143,   238,   191,   207,   245,     8,     9,
      10,    11,    12,    13,   119,    15,   374,    17,    18,    19,
      20,   300,   148,   278,    39,    57,   172,   282,   283,    29,
     167,     5,   287,     5,   364,     1,   392,     1,    99,    13,
       5,     5,    42,    43,   299,     5,   301,   170,    32,    32,
       0,    15,    16,    17,    18,    19,    32,    32,   191,   192,
      60,    61,    62,    32,    20,   513,     5,   350,     5,     1,
       0,    99,    72,    73,   207,    99,     5,    77,    78,    79,
      80,   179,   365,     5,    13,    17,    58,   192,   274,    26,
     230,     1,     5,    58,     0,     1,    56,    57,   454,     5,
     100,   199,   207,   433,   553,   553,    99,     0,   234,   235,
     559,   111,   112,   113,    20,     5,   116,   117,   118,     5,
     478,     1,     5,   123,   124,   125,   126,   127,   274,   103,
     385,   131,   132,    99,     0,    99,   100,   101,   104,   139,
     104,   105,   106,   107,   474,   160,   476,   477,     5,   479,
     273,   101,    99,     1,    20,   111,   156,     5,   192,   292,
     518,   416,   441,   163,   164,   165,   166,   167,   308,   309,
     109,   101,   295,   207,   104,   159,   159,   177,   178,   380,
     180,   286,   368,   159,   159,   440,   544,   109,   101,    99,
     159,     0,     1,   319,   104,   101,   196,   197,   104,   322,
     200,   201,     1,   437,    13,   111,     5,   100,     0,     1,
       0,   101,   491,   336,    13,   215,   216,   217,   355,   102,
     100,    13,     0,   360,   104,   240,     5,   227,   228,   229,
       1,   486,   264,   591,     5,   101,     5,    12,   253,   597,
      22,   241,    99,     0,   259,   111,   261,   104,   449,     1,
     250,    99,   100,     5,     0,     1,   104,   105,   106,   107,
       5,    13,     5,    55,    24,    17,     5,     5,   268,   269,
     270,    80,    17,   307,    32,   380,   276,   277,     5,   384,
       5,    80,   516,     1,   284,   285,    13,    14,     1,     1,
     436,   100,     5,   531,   528,    13,   105,     1,   100,   108,
       5,     5,   302,   303,   304,    97,   105,     1,   100,   108,
     310,     5,     5,   547,   314,    90,     7,     8,     9,    10,
      11,    99,   556,   557,   102,   340,     5,     5,    99,   100,
      99,    56,    57,   104,   105,   106,   107,    55,     0,     1,
       5,   375,    99,   100,   449,   345,   380,    99,   348,   587,
     384,     5,   586,    99,    23,   355,   102,    19,   104,   102,
     360,   100,   548,    17,   598,   103,    28,     7,     8,     9,
      10,    11,     0,     1,    99,     5,   376,   102,   105,    97,
      25,   108,   100,    13,   524,    36,    99,    99,   513,   100,
     390,    19,   104,     0,     1,   395,   101,   397,   398,   104,
      28,   401,   402,     5,   404,   513,   421,   101,   101,     5,
     104,    13,    19,   413,   102,   449,    12,   417,   109,   110,
      99,    28,   100,   102,   424,   431,   426,   102,   553,    91,
      92,    93,    94,    95,    96,   435,   101,    99,   473,   101,
      13,   103,     5,    80,    17,   553,   446,   447,   100,    12,
      13,   451,   452,   453,    56,    57,   471,   457,   145,    21,
     147,    13,   462,    91,    92,    93,    94,    95,    96,   109,
     110,    99,     5,    99,   480,   103,   102,     5,     6,     1,
      13,   109,    21,     5,    91,    92,    93,    94,    95,    96,
      12,    13,    99,   100,     5,   495,   103,     5,     5,     1,
     500,   103,    13,     5,    12,   505,   102,   102,    99,   515,
      12,   102,   512,   528,   514,     0,     1,   517,    91,    92,
      93,   521,   556,    99,    99,   525,   102,   102,    13,    13,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   102,    27,    99,     5,    99,   233,    32,   102,   549,
      99,    36,    13,   102,    99,     5,    17,   102,     5,     0,
       1,   561,    12,    13,     5,     1,   566,   105,    90,    54,
     108,    12,    13,   104,    15,    22,    23,    24,    25,     1,
      27,    99,     5,     5,   584,    32,    58,    28,    90,    36,
      12,    17,   592,    13,    13,    99,   596,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    55,    55,   100,    82,    99,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     5,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    99,     5,    94,    95,    96,    99,    98,   159,   100,
     101,   102,    99,   104,   105,   527,   101,   108,     0,     1,
     111,   112,   113,     5,     5,    15,    16,    17,    18,    19,
      12,    13,    13,    15,   559,   255,   392,   454,     1,    20,
      21,   422,     5,   556,   375,   307,    28,     1,   169,   464,
     219,     5,    15,    16,    17,    18,    19,   145,     5,   312,
     405,    15,    16,    17,    18,    19,    13,   502,    15,    16,
      17,    18,    19,    20,    21,   358,    64,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    64,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
     434,   384,    94,    95,    96,   384,    98,   159,   159,   101,
     203,     1,    -1,   105,    -1,     5,   108,    -1,    -1,    -1,
     112,   113,    12,    13,    -1,    15,    99,   100,   101,    -1,
      -1,   104,   105,   106,   107,    99,   100,   101,    28,     1,
     104,   105,   106,   107,     1,    -1,    -1,    13,     5,    15,
      16,    17,    18,    19,    20,    21,    -1,    19,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    28,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,     5,    -1,    94,    95,    96,    -1,    98,    12,
      13,    -1,    15,    -1,    -1,   105,    -1,    -1,   108,    -1,
      -1,    -1,   112,   113,    -1,    28,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    -1,    99,    -1,    -1,
      -1,   103,    99,   100,   101,    -1,    -1,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
       1,    94,    95,    96,     5,    98,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,    -1,    13,    28,    15,    16,
      17,    18,    19,    20,    29,    30,    31,    -1,    33,    34,
      35,    -1,     0,     1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    13,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    28,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,   103,    -1,   105,    -1,    -1,   108,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,     1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    97,
      -1,    -1,   100,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   103,    -1,   105,    28,    -1,   108,    -1,    -1,
      -1,    -1,     0,     1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    91,    92,
      93,    94,    95,    96,    -1,    -1,    99,   100,    -1,   102,
     103,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      -1,    99,   100,    -1,   102,   103,    12,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    -1,    94,    95,
      96,    -1,    98,    -1,    -1,     0,     1,    -1,    -1,   105,
       5,    -1,   108,    -1,    -1,    -1,   112,   113,    13,    -1,
      -1,    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    97,    -1,     0,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,   100,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,   100,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,   100,    -1,    32,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,   105,    -1,    -1,   108,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,   100,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    30,    31,    33,    34,    35,   115,   116,   117,
     118,   119,   120,   121,   122,    99,    99,    99,    99,     5,
      99,     0,   122,   122,   122,   122,   122,   122,     5,    26,
     124,   127,   122,   122,   178,   122,   122,   122,   122,     1,
     122,   123,    27,   130,   137,   138,   139,   152,   154,   156,
     157,   163,   164,   170,   171,   173,   174,   179,   182,     1,
      13,    55,    97,   200,   201,   202,   203,   205,     1,    13,
     105,   108,   160,   161,   162,   176,   177,    12,    13,    15,
      28,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    94,    95,    96,    98,   112,   113,   177,
     207,   208,   211,   212,   213,   221,   222,   223,    56,    57,
     144,   145,   147,   148,    13,    15,    16,    17,    18,    19,
      20,    21,   184,   185,   186,   187,   188,   190,   191,   192,
     193,   195,   199,    99,   102,   227,    12,     5,     6,   129,
       1,   122,   122,    22,    24,    32,    23,    25,    36,   184,
     231,   122,   122,   122,   100,   202,   203,   102,   102,     1,
      17,   204,   122,   122,    80,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,    78,   212,   100,     1,
     104,   111,   209,   210,   122,   122,   122,   122,   122,   122,
     122,   100,    21,    13,    17,    91,    92,    93,    13,   122,
      21,     1,   100,   181,   188,     1,     5,   105,   106,   107,
     175,    13,    20,   190,   191,   191,     1,   192,   232,   122,
       1,    26,    54,   128,   130,   131,   225,   226,   102,   227,
      13,   140,   100,     1,   122,   136,   122,   153,   122,     1,
     122,     1,   122,   153,     5,   181,   232,   204,    17,   102,
     102,   122,   122,   231,   122,   100,    99,   104,    13,     0,
     101,   126,   207,   209,    28,   103,   177,   209,   212,   214,
     217,   218,   219,   122,   122,   231,   122,   122,   211,   209,
     218,   220,    58,    13,   103,   155,    13,   122,   122,   122,
      13,    20,   187,   194,   104,   122,   122,   122,   188,   191,
       0,     1,    19,    28,    91,    92,    93,    94,    95,    96,
     100,   103,   125,   227,   228,   229,   230,   102,   227,   122,
       1,   123,   122,    12,    90,   141,   102,   227,   141,   148,
     150,    99,   102,    12,    13,   158,   102,   227,    13,    17,
     165,   198,   102,   227,    99,   172,   184,   180,   122,   122,
     122,   232,   204,   207,   122,   122,   126,   126,   126,   122,
     122,   212,   126,     5,   215,   216,   209,   232,   126,   216,
     104,   126,   122,   122,   122,    58,   146,    13,    14,   176,
     188,   189,   188,   122,    13,   194,     7,     8,     9,    10,
      11,   109,   110,   196,   122,   232,   232,    12,   102,   102,
     227,   122,   122,     1,   104,   180,   151,   153,   198,    13,
     153,   151,   180,    99,   207,    55,   206,   200,   162,   122,
      13,   218,   105,   108,   214,   217,    20,   111,   126,   122,
     144,   147,    13,   142,   122,   122,   122,    82,     1,   122,
     122,   109,   196,   122,   183,     0,   109,   126,   122,   102,
     227,   149,   150,   122,    99,   122,    99,    99,   178,    99,
     151,   206,   122,   204,   125,   126,   216,     5,     5,   122,
     122,   218,   122,   122,   122,   145,   101,   101,   122,   101,
     104,   101,   122,    12,    13,   197,   186,   102,     0,   102,
     227,   148,   151,   132,   151,   151,   200,   151,   178,   126,
     216,    17,   143,   101,   122,   197,   122,   122,     1,   125,
     134,   135,   138,   139,   154,   157,   164,   171,   174,   182,
     224,   225,   226,   122,   178,   125,   122,   200,   122,   101,
     188,   122,   109,   132,   125,   123,   159,   166,   200,   133,
     125,   207,   122,   109,   224,   125,   160,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   125,   167,   169,     1,   134,   224,   122,
     122,   122,   168,   123,   200,   122,    99,   122,   200,   125
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   114,   115,   115,   115,   115,   115,   115,   115,   116,
     117,   118,   119,   120,   121,   122,   122,   123,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   127,   128,
     128,   129,   129,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   134,   134,   135,   135,   135,   135,   135,   135,
     136,   137,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   140,   140,   141,   141,   142,   143,   143,   144,   145,
     145,   146,   146,   147,   147,   147,   148,   148,   149,   149,
     150,   150,   150,   151,   152,   153,   154,   154,   154,   155,
     156,   157,   158,   158,   159,   159,   160,   161,   161,   162,
     162,   162,   163,   164,   164,   164,   165,   165,   165,   165,
     166,   166,   168,   167,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     170,   171,   171,   171,   172,   173,   174,   175,   175,   175,
     176,   176,   177,   177,   178,   179,   180,   181,   182,   183,
     184,   184,   184,   185,   186,   186,   186,   186,   186,   187,
     187,   187,   188,   188,   188,   188,   188,   188,   189,   189,
     189,   190,   190,   191,   191,   191,   192,   192,   192,   192,
     192,   193,   194,   195,   195,   195,   195,   196,   196,   196,
     196,   196,   196,   197,   197,   198,   199,   199,   199,   199,
     199,   199,   199,   200,   200,   200,   200,   200,   200,   201,
     201,   201,   201,   202,   203,   203,   203,   203,   203,   203,
     204,   205,   206,   206,   207,   207,   208,   208,   209,   210,
     210,   210,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   213,   213,   213,   214,
     214,   214,   215,   215,   215,   215,   216,   216,   217,   218,
     218,   219,   219,   219,   219,   220,   220,   221,   221,   222,
     222,   223,   223,   224,   224,   225,   225,   226,   227,   228,
     228,   229,   230,   230,   230,   230,   230,   230,   230,   230,
     231,   232,   232,   232,   232,   232
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     2,     2,     2,     2,     2,     6,
       6,     5,     5,     5,     5,     0,     2,     0,     2,     2,
       0,     1,     1,     1,     1,     1,     5,     3,     3,     5,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     7,     7,     7,     4,     4,     6,     6,     3,
       3,     0,     2,     1,     1,     2,     0,     4,     9,     1,
       5,     0,     3,     0,     1,     1,     1,     4,     0,     1,
       1,     4,     2,     0,     0,     1,    10,     8,     4,     2,
       0,    10,     1,     1,     0,     3,     6,     1,     5,     2,
       1,     1,     0,    10,     4,     4,     1,     2,     1,     0,
       1,     4,     0,     7,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     8,     4,     4,     1,     0,    10,     2,     2,     2,
       1,     0,     1,     1,     1,     0,     0,     0,     9,     0,
       1,     6,     2,     2,     1,     1,     2,     3,     2,     1,
       2,     2,     1,     2,     1,     2,     3,     2,     1,     5,
       2,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     2,     2,     4,     8,     5,     9,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     6,     6,
       7,     6,     6,     0,     1,     2,     1,     1,     2,     3,
       3,     4,     4,     3,     6,     5,     2,     6,     3,     4,
       3,     2,     2,     0,     1,     2,     1,     3,     3,     2,
       2,     0,     2,     3,     2,     2,     2,     3,     2,     2,
       2,     2,     5,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     4,     1,
       4,     2,     3,     3,     3,     3,     0,     1,     5,     1,
       2,     1,     3,     3,     1,     2,     5,     5,     4,     1,
       1,     4,     4,     1,     2,     3,     3,     2,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     0,     2,     2,     2,     2
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
      yyerror (parser, YY_("syntax error: cannot back up")); \
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
                  Type, Value, parser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, CSSParser* parser)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (parser);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, CSSParser* parser)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, CSSParser* parser)
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
                                              , parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parser); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, CSSParser* parser)
{
  YYUSE (yyvaluep);
  YYUSE (parser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (CSSParser* parser)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval, parser);
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
        case 9:
#line 420 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->m_rule = (yyvsp[-2].rule);
}
#line 2118 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 426 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->m_keyframe = (yyvsp[-2].keyframe);
}
#line 2126 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 432 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { 

}
#line 2134 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 438 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-1].valueList)) {
parser->m_valueList = parser->sinkFloatingValueList((yyvsp[-1].valueList));
int oldParsedProperties = parser->m_parsedProperties.size();
if (!parser->parseValue(parser->m_id, parser->m_important))
parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
parser->m_valueList = nullptr;
}
}
#line 2148 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 450 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->m_mediaQuery = parser->sinkFloatingMediaQuery((yyvsp[-1].mediaQuery));
}
#line 2156 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 456 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-1].selectorList)) {
if (parser->m_selectorListForParseSelector)
parser->m_selectorListForParseSelector->adoptSelectorVector(*(yyvsp[-1].selectorList));
}
}
#line 2167 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 485 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
}
#line 2174 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 500 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if (parser->m_styleSheet)
parser->m_styleSheet->parserSetEncodingFromCharsetRule((yyvsp[-2].string));
if (parser->isExtractingSourceData() && parser->m_currentRuleDataStack->isEmpty() && parser->m_ruleSourceDataResult)
parser->addNewRuleToSourceTree(CSSRuleSourceData::createUnknown());
(yyval.rule) = 0;
}
#line 2186 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 507 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
}
#line 2193 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 509 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
}
#line 2200 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 514 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {

(yyval.rule) = 0;
}
#line 2209 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 518 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 2217 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 525 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-1].rule) && parser->m_styleSheet)
parser->m_styleSheet->parserAppendRule((yyvsp[-1].rule));
}
#line 2226 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 555 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->m_hadSyntacticallyValidCSSRule = true;
}
#line 2234 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 564 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.ruleList) = 0; }
#line 2240 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 565 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.ruleList) = (yyvsp[-2].ruleList);
if ((yyvsp[-1].rule)) {
if (!(yyval.ruleList))
(yyval.ruleList) = parser->createRuleList();
(yyval.ruleList)->append((yyvsp[-1].rule));
}
}
#line 2253 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 576 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.ruleList) = 0; }
#line 2259 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 577 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.ruleList) = (yyvsp[-2].ruleList);
if ((yyvsp[-1].rule)) {
if (!(yyval.ruleList))
(yyval.ruleList) = parser->createRuleList();
(yyval.ruleList)->append((yyvsp[-1].rule));
}
}
#line 2272 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 614 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderEnd();
parser->markRuleBodyStart();
}
#line 2281 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 621 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::IMPORT_RULE);
}
#line 2289 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 627 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createImportRule((yyvsp[-3].string), (yyvsp[-1].mediaList));
}
#line 2297 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 630 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createImportRule((yyvsp[-3].string), (yyvsp[-1].mediaList));
}
#line 2305 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 633 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2314 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 637 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2323 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 641 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2332 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 648 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->addNamespace((yyvsp[-3].string), (yyvsp[-2].string));
(yyval.rule) = 0;
}
#line 2341 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 652 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 2349 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 655 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 2357 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 658 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 2365 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 664 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.string).clear(); }
#line 2371 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 665 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[-1].string); }
#line 2377 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 674 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.string) = (yyvsp[-1].string);
}
#line 2385 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 680 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = 0;
}
#line 2393 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 683 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = (yyvsp[-1].valueList);
}
#line 2401 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 689 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {


if ((yyvsp[-8].mediaQueryRestrictor) != MediaQuery::None)
(yyval.mediaQueryExp) = parser->createFloatingMediaQueryExp("", 0);
else {
(yyvsp[-4].string).lower();
(yyval.mediaQueryExp) = parser->createFloatingMediaQueryExp((yyvsp[-4].string), (yyvsp[-2].valueList));
}
}
#line 2416 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 702 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryExpList) = parser->createFloatingMediaQueryExpList();
(yyval.mediaQueryExpList)->append(parser->sinkFloatingMediaQueryExp((yyvsp[0].mediaQueryExp)));
}
#line 2425 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 706 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryExpList) = (yyvsp[-4].mediaQueryExpList);
(yyval.mediaQueryExpList)->append(parser->sinkFloatingMediaQueryExp((yyvsp[0].mediaQueryExp)));
}
#line 2434 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 713 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryExpList) = parser->createFloatingMediaQueryExpList();
}
#line 2442 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 716 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryExpList) = (yyvsp[0].mediaQueryExpList);
}
#line 2450 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 722 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryRestrictor) = MediaQuery::None;
}
#line 2458 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 725 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryRestrictor) = MediaQuery::Only;
}
#line 2466 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 728 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQueryRestrictor) = MediaQuery::Not;
}
#line 2474 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 734 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaQuery) = parser->createFloatingMediaQuery(parser->sinkFloatingMediaQueryExpList((yyvsp[0].mediaQueryExpList)));
}
#line 2482 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 738 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyvsp[-1].string).lower();
(yyval.mediaQuery) = parser->createFloatingMediaQuery((yyvsp[-3].mediaQueryRestrictor), (yyvsp[-1].string), parser->sinkFloatingMediaQueryExpList((yyvsp[0].mediaQueryExpList)));
}
#line 2491 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 745 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaList) = parser->createMediaQuerySet();
}
#line 2499 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 752 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaList) = parser->createMediaQuerySet();
(yyval.mediaList)->addMediaQuery(parser->sinkFloatingMediaQuery((yyvsp[0].mediaQuery)));
parser->updateLastMediaLine((yyval.mediaList));
}
#line 2509 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 757 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaList) = (yyvsp[-3].mediaList);
if ((yyval.mediaList)) {
(yyval.mediaList)->addMediaQuery(parser->sinkFloatingMediaQuery((yyvsp[0].mediaQuery)));
parser->updateLastMediaLine((yyval.mediaList));
}
}
#line 2521 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 764 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.mediaList) = 0;
}
#line 2529 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 770 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleBodyStart();
}
#line 2537 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 776 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::MEDIA_RULE);
}
#line 2545 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 782 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderEnd();
}
#line 2553 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 788 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createMediaRule((yyvsp[-6].mediaList), (yyvsp[-1].ruleList));
}
#line 2561 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 791 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createEmptyMediaRule((yyvsp[-1].ruleList));
}
#line 2569 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 794 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2578 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 801 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.string) = (yyvsp[-1].string);
}
#line 2586 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 894 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::KEYFRAMES_RULE);
}
#line 2594 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 900 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createKeyframesRule((yyvsp[-6].string), parser->sinkFloatingKeyframeVector((yyvsp[-1].keyframeRuleList)));
}
#line 2602 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 911 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.keyframeRuleList) = parser->createFloatingKeyframeVector(); }
#line 2608 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 912 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.keyframeRuleList) = (yyvsp[-2].keyframeRuleList);
if ((yyvsp[-1].keyframe))
(yyval.keyframeRuleList)->append((yyvsp[-1].keyframe));
}
#line 2618 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 920 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.keyframe) = parser->createKeyframe((yyvsp[-5].valueList));
}
#line 2626 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 926 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = parser->createFloatingValueList();
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
}
#line 2635 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 930 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = (yyvsp[-4].valueList);
if ((yyval.valueList))
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
}
#line 2645 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 938 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[-1].integer) * (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; }
#line 2651 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 939 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER;
CSSParserString& str = (yyvsp[0].string);
if (str.equalIgnoringCase("from"))
(yyval.value).fValue = 0;
else if (str.equalIgnoringCase("to"))
(yyval.value).fValue = 100;
else {
(yyval.value).unit = 0;
YYERROR;
}
}
#line 2668 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 951 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value).unit = 0;
}
#line 2676 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 957 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::PAGE_RULE);
}
#line 2684 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 964 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-6].selector))
(yyval.rule) = parser->createPageRule(parser->sinkFloatingSelector((yyvsp[-6].selector)));
else {

parser->clearProperties();

(yyval.rule) = 0;
parser->popRuleData();
}
}
#line 2700 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 975 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->popRuleData();
(yyval.rule) = 0;
}
#line 2709 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 979 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->popRuleData();
(yyval.rule) = 0;
}
#line 2718 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 986 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelectorWithTagName(QualifiedName(nullAtom, (yyvsp[0].string), parser->m_defaultNamespace));
(yyval.selector)->setForPage();
}
#line 2727 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 990 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector)) {
(yyval.selector)->prependTagSelector(QualifiedName(nullAtom, (yyvsp[-1].string), parser->m_defaultNamespace));
(yyval.selector)->setForPage();
}
}
#line 2739 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 997 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector))
(yyval.selector)->setForPage();
}
#line 2749 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1002 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setForPage();
}
#line 2758 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1014 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->startDeclarationsForMarginBox();
}
#line 2766 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1016 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createMarginAtRule((yyvsp[-6].marginBox));
}
#line 2774 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1022 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::TopLeftCornerMarginBox;
}
#line 2782 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1025 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::TopLeftMarginBox;
}
#line 2790 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1028 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::TopCenterMarginBox;
}
#line 2798 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1031 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::TopRightMarginBox;
}
#line 2806 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1034 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::TopRightCornerMarginBox;
}
#line 2814 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1037 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::BottomLeftCornerMarginBox;
}
#line 2822 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1040 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::BottomLeftMarginBox;
}
#line 2830 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1043 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::BottomCenterMarginBox;
}
#line 2838 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1046 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::BottomRightMarginBox;
}
#line 2846 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1049 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::BottomRightCornerMarginBox;
}
#line 2854 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1052 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::LeftTopMarginBox;
}
#line 2862 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1055 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::LeftMiddleMarginBox;
}
#line 2870 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1058 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::LeftBottomMarginBox;
}
#line 2878 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1061 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::RightTopMarginBox;
}
#line 2886 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1064 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::RightMiddleMarginBox;
}
#line 2894 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1067 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.marginBox) = CSSSelector::RightBottomMarginBox;
}
#line 2902 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1073 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::FONT_FACE_RULE);
}
#line 2910 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1080 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createFontFaceRule();
}
#line 2918 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1083 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2927 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1087 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
parser->popRuleData();
}
#line 2936 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1140 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[0].selectorList)) {
parser->setReusableRegionSelectorVector((yyvsp[0].selectorList));
(yyval.selectorList) = parser->reusableRegionSelectorVector();
}
else
(yyval.selectorList) = 0;
}
#line 2949 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1151 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::REGION_RULE);
}
#line 2957 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1157 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-6].selectorList))
(yyval.rule) = parser->createRegionRule((yyvsp[-6].selectorList), (yyvsp[-1].ruleList));
else {
(yyval.rule) = 0;
parser->popRuleData();
}
}
#line 2970 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1185 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.relation) = CSSSelector::DirectAdjacent; }
#line 2976 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1186 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.relation) = CSSSelector::IndirectAdjacent; }
#line 2982 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1187 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.relation) = CSSSelector::Child; }
#line 2988 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1191 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[0].integer); }
#line 2994 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1192 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.integer) = 1; }
#line 3000 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1196 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.integer) = -1; }
#line 3006 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1197 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.integer) = 1; }
#line 3012 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1201 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markPropertyStart();
}
#line 3020 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1207 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderStart(CSSRuleSourceData::STYLE_RULE);
parser->markSelectorStart();
}
#line 3029 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1214 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markRuleHeaderEnd();
}
#line 3037 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1220 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markSelectorEnd();
}
#line 3045 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1226 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = parser->createStyleRule((yyvsp[-7].selectorList));
}
#line 3053 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1232 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markSelectorStart();
}
#line 3061 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1237 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[0].selector)) {
(yyval.selectorList) = parser->reusableSelectorVector();
(yyval.selectorList)->shrink(0);
(yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[0].selector)));
parser->updateLastSelectorLineAndPosition();
}
}
#line 3074 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1245 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-5].selectorList) && (yyvsp[0].selector)) {
(yyval.selectorList) = (yyvsp[-5].selectorList);
(yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[0].selector)));
parser->updateLastSelectorLineAndPosition();
} else
(yyval.selectorList) = 0;
}
#line 3087 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1253 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selectorList) = 0;
}
#line 3095 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1259 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[-1].selector);
}
#line 3103 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1265 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
}
#line 3111 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1269 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
}
#line 3119 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1273 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if (!(yyvsp[-1].selector))
(yyval.selector) = 0;
else if ((yyval.selector))
(yyval.selector)->appendTagHistory(CSSSelector::Descendant, parser->sinkFloatingSelector((yyvsp[-1].selector)));
}
#line 3131 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1280 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if (!(yyvsp[-2].selector))
(yyval.selector) = 0;
else if ((yyval.selector))
(yyval.selector)->appendTagHistory((yyvsp[-1].relation), parser->sinkFloatingSelector((yyvsp[-2].selector)));
}
#line 3143 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1287 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = 0;
}
#line 3151 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1293 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.string).clear(); }
#line 3157 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1294 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { static LChar star = '*'; (yyval.string).init(&star, 1); }
#line 3163 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1295 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[-1].string); }
#line 3169 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1299 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelectorWithTagName(QualifiedName(nullAtom, (yyvsp[0].string), parser->m_defaultNamespace));
}
#line 3177 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1302 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector))
(yyval.selector) = parser->rewriteSpecifiersWithElementName(nullAtom, (yyvsp[-1].string), (yyval.selector));
}
#line 3187 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1307 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector))
(yyval.selector) = parser->rewriteSpecifiersWithNamespaceIfNeeded((yyval.selector));
}
#line 3197 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1312 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelectorWithTagName(parser->determineNameInNamespace((yyvsp[-1].string), (yyvsp[0].string)));
}
#line 3205 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1315 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector))
(yyval.selector) = parser->rewriteSpecifiersWithElementName((yyvsp[-2].string), (yyvsp[-1].string), (yyval.selector));
}
#line 3215 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1320 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
if ((yyval.selector))
(yyval.selector) = parser->rewriteSpecifiersWithElementName((yyvsp[-1].string), starAtom, (yyval.selector));
}
#line 3225 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1328 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[0].selector)) {
(yyval.selectorList) = parser->createFloatingSelectorVector();
(yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[0].selector)));
} else
(yyval.selectorList) = 0;
}
#line 3237 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1335 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-4].selectorList) && (yyvsp[0].selector)) {
(yyval.selectorList) = (yyvsp[-4].selectorList);
(yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[0].selector)));
} else
(yyval.selectorList) = 0;
}
#line 3249 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1342 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selectorList) = 0;
}
#line 3257 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1348 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserString& str = (yyvsp[0].string);
if (parser->m_context.isHTMLDocument)
str.lower();
(yyval.string) = str;
}
#line 3268 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1354 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
static LChar star = '*';
(yyval.string).init(&star, 1);
}
#line 3277 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1361 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = (yyvsp[0].selector);
}
#line 3285 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1364 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if (!(yyvsp[0].selector))
(yyval.selector) = 0;
else if ((yyvsp[-1].selector))
(yyval.selector) = parser->rewriteSpecifiers((yyvsp[-1].selector), (yyvsp[0].selector));
}
#line 3296 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1370 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = 0;
}
#line 3304 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1376 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::Id);
if (parser->m_context.mode == CSSQuirksMode)
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));
}
#line 3316 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1383 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[0].string)[0] >= '0' && (yyvsp[0].string)[0] <= '9') {
(yyval.selector) = 0;
} else {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::Id);
if (parser->m_context.mode == CSSQuirksMode)
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));
}
}
#line 3332 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1400 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::Class);
if (parser->m_context.mode == CSSQuirksMode)
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));
}
#line 3344 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1410 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.string) = (yyvsp[-1].string);
}
#line 3352 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1416 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[-1].string), nullAtom), parser->m_context.isHTMLDocument);
(yyval.selector)->setMatch(CSSSelector::Set);
}
#line 3362 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1421 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[-5].string), nullAtom), parser->m_context.isHTMLDocument);
(yyval.selector)->setMatch((CSSSelector::Match)(yyvsp[-4].integer));
(yyval.selector)->setValue((yyvsp[-2].string));
}
#line 3373 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1427 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setAttribute(parser->determineNameInNamespace((yyvsp[-2].string), (yyvsp[-1].string)), parser->m_context.isHTMLDocument);
(yyval.selector)->setMatch(CSSSelector::Set);
}
#line 3383 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1432 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setAttribute(parser->determineNameInNamespace((yyvsp[-6].string), (yyvsp[-5].string)), parser->m_context.isHTMLDocument);
(yyval.selector)->setMatch((CSSSelector::Match)(yyvsp[-4].integer));
(yyval.selector)->setValue((yyvsp[-2].string));
}
#line 3394 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1441 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::Exact;
}
#line 3402 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1444 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::List;
}
#line 3410 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1447 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::Hyphen;
}
#line 3418 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1450 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::Begin;
}
#line 3426 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1453 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::End;
}
#line 3434 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1456 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.integer) = CSSSelector::Contain;
}
#line 3442 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1467 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PagePseudoClass);
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
}
#line 3456 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1478 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
}
#line 3470 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1487 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoElement);
(yyvsp[0].string).lower();
(yyval.selector)->setValue((yyvsp[0].string));

CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
}
#line 3485 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1517 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-2].selectorList)) {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);
(yyval.selector)->adoptSelectorVector(*parser->sinkFloatingSelectorVector((yyvsp[-2].selectorList)));
(yyvsp[-4].string).lower();
(yyval.selector)->setValue((yyvsp[-4].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type != CSSSelector::PseudoAny)
(yyval.selector) = 0;
} else
(yyval.selector) = 0;
}
#line 3503 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1531 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);
(yyval.selector)->setArgument((yyvsp[-2].string));
(yyval.selector)->setValue((yyvsp[-4].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
}
#line 3517 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1541 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);
(yyval.selector)->setArgument(String::number((yyvsp[-3].integer) * (yyvsp[-2].number)));
(yyval.selector)->setValue((yyvsp[-5].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
}
#line 3531 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1551 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);
(yyval.selector)->setArgument((yyvsp[-2].string));
(yyvsp[-4].string).lower();
(yyval.selector)->setValue((yyvsp[-4].string));
CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
if (type == CSSSelector::PseudoUnknown)
(yyval.selector) = 0;
else if (type == CSSSelector::PseudoNthChild ||
type == CSSSelector::PseudoNthOfType ||
type == CSSSelector::PseudoNthLastChild ||
type == CSSSelector::PseudoNthLastOfType) {
if (!isValidNthToken((yyvsp[-2].string)))
(yyval.selector) = 0;
}
}
#line 3553 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1569 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if (!(yyvsp[-2].selector) || !(yyvsp[-2].selector)->isSimple())
(yyval.selector) = 0;
else {
(yyval.selector) = parser->createFloatingSelector();
(yyval.selector)->setMatch(CSSSelector::PseudoClass);

Vector<OwnPtr<CSSParserSelector> > selectorVector;
selectorVector.append(parser->sinkFloatingSelector((yyvsp[-2].selector)));
(yyval.selector)->adoptSelectorVector(selectorVector);

(yyvsp[-4].string).lower();
(yyval.selector)->setValue((yyvsp[-4].string));
}
}
#line 3573 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1587 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.boolean) = false; }
#line 3579 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1588 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = (yyvsp[0].boolean);
}
#line 3587 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1591 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = (yyvsp[-1].boolean);
if ( (yyvsp[0].boolean) )
(yyval.boolean) = (yyvsp[0].boolean);
}
#line 3597 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1596 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = (yyvsp[0].boolean);
}
#line 3605 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1599 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = false;
}
#line 3613 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1602 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = (yyvsp[-1].boolean);
}
#line 3621 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1608 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markPropertyStart();
(yyval.boolean) = (yyvsp[-2].boolean);
}
#line 3630 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1612 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markPropertyStart();
(yyval.boolean) = false;
}
#line 3639 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1616 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markPropertyStart();
(yyval.boolean) = (yyvsp[-3].boolean);
if ((yyvsp[-2].boolean))
(yyval.boolean) = (yyvsp[-2].boolean);
}
#line 3650 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1622 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->markPropertyStart();
(yyval.boolean) = (yyvsp[-3].boolean);
}
#line 3659 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1629 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->syntaxError((yyvsp[-1].location), CSSParser::PropertyDeclarationError);
}
#line 3667 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1635 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {





(yyval.boolean) = false;

}
#line 3681 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1645 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = false;
bool isPropertyParsed = false;
if ((yyvsp[-4].id) && (yyvsp[-1].valueList)) {
parser->m_valueList = parser->sinkFloatingValueList((yyvsp[-1].valueList));
int oldParsedProperties = parser->m_parsedProperties.size();
(yyval.boolean) = parser->parseValue(static_cast<CSSPropertyID>((yyvsp[-4].id)), (yyvsp[0].boolean));
if (!(yyval.boolean))
parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
else
isPropertyParsed = true;
parser->m_valueList = nullptr;
}
parser->markPropertyEnd((yyvsp[0].boolean), isPropertyParsed);
}
#line 3701 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1661 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.boolean) = false;
}
#line 3709 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1665 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { 

parser->markPropertyEnd(false, false);
(yyval.boolean) = false;
}
#line 3719 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1671 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { 

(yyval.boolean) = false;
}
#line 3728 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1676 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { 

parser->markPropertyEnd(false, false);
(yyval.boolean) = false;
}
#line 3738 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1684 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->syntaxError((yyvsp[-1].location));
}
#line 3746 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1690 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.id) = cssPropertyID((yyvsp[-1].string));
}
#line 3754 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1696 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.boolean) = true; }
#line 3760 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1697 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.boolean) = false; }
#line 3766 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1702 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.valueList) = 0; }
#line 3772 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1706 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = parser->createFloatingValueList();
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
}
#line 3781 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1710 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = (yyvsp[-2].valueList);
if ((yyval.valueList)) {
if ((yyvsp[-1].character)) {
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = (yyvsp[-1].character);
(yyval.valueList)->addValue(v);
}
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
}
}
#line 3799 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1730 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = '/';
}
#line 3807 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1733 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = ',';
}
#line 3815 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1736 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = 0;
}
#line 3823 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1742 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value) = (yyvsp[-1].value); }
#line 3829 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1743 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value) = (yyvsp[-1].value); (yyval.value).fValue *= (yyvsp[-2].integer); }
#line 3835 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1744 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_STRING; }
#line 3841 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1745 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value).id = cssValueKeywordID((yyvsp[-1].string));
(yyval.value).unit = CSSPrimitiveValue::CSS_IDENT;
(yyval.value).string = (yyvsp[-1].string);
}
#line 3851 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1751 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; }
#line 3857 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1752 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; }
#line 3863 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1753 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_URI; }
#line 3869 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1754 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_UNICODE_RANGE; }
#line 3875 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1755 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[-1].string); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; }
#line 3881 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1756 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = CSSParserString(); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; }
#line 3887 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1757 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {





}
#line 3899 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1765 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value) = (yyvsp[-1].value);
}
#line 3907 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1768 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value) = (yyvsp[-1].value);
}
#line 3915 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1771 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value) = (yyvsp[-1].value);
}
#line 3923 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1774 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { 
(yyval.value).id = CSSValueInvalid; (yyval.value).unit = 0;
}
#line 3931 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1780 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = true; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; }
#line 3937 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1781 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; }
#line 3943 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1782 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PERCENTAGE; }
#line 3949 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1783 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PX; }
#line 3955 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1784 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_CM; }
#line 3961 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1785 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MM; }
#line 3967 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1786 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_IN; }
#line 3973 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1787 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PT; }
#line 3979 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1788 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PC; }
#line 3985 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1789 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DEG; }
#line 3991 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1790 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_RAD; }
#line 3997 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1791 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_GRAD; }
#line 4003 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1792 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_TURN; }
#line 4009 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1793 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MS; }
#line 4015 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1794 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_S; }
#line 4021 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1795 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_HZ; }
#line 4027 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1796 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_KHZ; }
#line 4033 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1797 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EMS; }
#line 4039 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1798 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSParserValue::Q_EMS; }
#line 4045 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1799 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EXS; }
#line 4051 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1800 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.value).id = CSSValueInvalid;
(yyval.value).fValue = (yyvsp[0].number);
(yyval.value).unit = CSSPrimitiveValue::CSS_REMS;
if (parser->m_styleSheet)
parser->m_styleSheet->parserSetUsesRemUnits(true);
}
#line 4063 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1807 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_CHS; }
#line 4069 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1808 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VW; }
#line 4075 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1809 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VH; }
#line 4081 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1810 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VMIN; }
#line 4087 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1811 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VMAX; }
#line 4093 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1812 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPPX; }
#line 4099 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1813 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPI; }
#line 4105 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1814 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[0].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPCM; }
#line 4111 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1818 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = (yyvsp[-3].string);
f->args = parser->sinkFloatingValueList((yyvsp[-1].valueList));
(yyval.value).id = CSSValueInvalid;
(yyval.value).unit = CSSParserValue::Function;
(yyval.value).function = f;
}
#line 4124 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1826 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = (yyvsp[-2].string);
CSSParserValueList* valueList = parser->createFloatingValueList();
f->args = parser->sinkFloatingValueList(valueList);
(yyval.value).id = CSSValueInvalid;
(yyval.value).unit = CSSParserValue::Function;
(yyval.value).function = f;
}
#line 4138 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1835 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = (yyvsp[-3].string);
f->args = nullptr;
(yyval.value).id = CSSValueInvalid;
(yyval.value).unit = CSSParserValue::Function;
(yyval.value).function = f;
}
#line 4151 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1846 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value) = (yyvsp[0].value); }
#line 4157 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1847 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {





}
#line 4169 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1854 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.value) = (yyvsp[0].value); (yyval.value).fValue *= (yyvsp[-1].integer); }
#line 4175 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1858 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = '+';
}
#line 4183 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1861 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = '-';
}
#line 4191 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1864 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = '*';
}
#line 4199 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1867 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.character) = '/';
}
#line 4207 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1878 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-2].valueList)) {
(yyval.valueList) = (yyvsp[-2].valueList);
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = '(';
(yyval.valueList)->insertValueAt(0, v);
v.iValue = ')';
(yyval.valueList)->addValue(v);
} else
(yyval.valueList) = 0;
}
#line 4225 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1895 "generated/CSSGrammar.y" /* yacc.c:1646  */
    { (yyval.valueList) = 0; }
#line 4231 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1899 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = parser->createFloatingValueList();
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
}
#line 4240 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1903 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-2].valueList) && (yyvsp[-1].character)) {
(yyval.valueList) = (yyvsp[-2].valueList);
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = (yyvsp[-1].character);
(yyval.valueList)->addValue(v);
(yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[0].value)));
} else
(yyval.valueList) = 0;

}
#line 4258 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1916 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-2].valueList) && (yyvsp[-1].character) && (yyvsp[0].valueList)) {
(yyval.valueList) = (yyvsp[-2].valueList);
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = (yyvsp[-1].character);
(yyval.valueList)->addValue(v);
(yyval.valueList)->extend(*((yyvsp[0].valueList)));
} else 
(yyval.valueList) = 0;
}
#line 4275 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1932 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.valueList) = (yyvsp[-1].valueList);
}
#line 4283 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1935 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
if ((yyvsp[-4].valueList) && (yyvsp[-1].valueList)) {
(yyval.valueList) = (yyvsp[-4].valueList);
CSSParserValue v;
v.id = CSSValueInvalid;
v.unit = CSSParserValue::Operator;
v.iValue = ',';
(yyval.valueList)->addValue(v);
(yyval.valueList)->extend(*((yyvsp[-1].valueList)));
} else
(yyval.valueList) = 0;
}
#line 4300 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1950 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = (yyvsp[-4].string);
f->args = parser->sinkFloatingValueList((yyvsp[-2].valueList));
(yyval.value).id = CSSValueInvalid;
(yyval.value).unit = CSSParserValue::Function;
(yyval.value).function = f;
}
#line 4313 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1958 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
YYERROR;
}
#line 4321 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1965 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.string) = (yyvsp[0].string);
}
#line 4329 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1968 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.string) = (yyvsp[0].string);
}
#line 4337 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1974 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
CSSParserFunction* f = parser->createFloatingFunction();
f->name = (yyvsp[-3].string);
f->args = parser->sinkFloatingValueList((yyvsp[-1].valueList));
(yyval.value).id = CSSValueInvalid;
(yyval.value).unit = CSSParserValue::Function;
(yyval.value).function = f;
}
#line 4350 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1982 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
YYERROR;
}
#line 4358 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1990 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 4366 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1993 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 4374 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1999 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 4382 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 2002 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 4390 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 2008 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.rule) = 0;
}
#line 4398 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 2026 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
parser->invalidBlockHit();
}
#line 4406 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 2046 "generated/CSSGrammar.y" /* yacc.c:1646  */
    {
(yyval.location) = parser->currentLocation();
}
#line 4414 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
    break;


#line 4418 "generated/CSSGrammar.cpp" /* yacc.c:1646  */
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
      yyerror (parser, YY_("syntax error"));
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
        yyerror (parser, yymsgp);
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
                      yytoken, &yylval, parser);
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
                  yystos[yystate], yyvsp, parser);
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
  yyerror (parser, YY_("memory exhausted"));
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
                  yytoken, &yylval, parser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, parser);
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
#line 2059 "generated/CSSGrammar.y" /* yacc.c:1906  */

