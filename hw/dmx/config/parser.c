#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20050813

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 36 "parser.y"
#ifdef HAVE_DMX_CONFIG_H
#include <dmx-config.h>
#endif

#include "dmxparse.h"
#include <string.h>
#include <stdlib.h>
#define YYDEBUG 1
#define YYERROR_VERBOSE
#define YY_USE_PROTOS

DMXConfigEntryPtr dmxConfigEntry = NULL;
#define APPEND(type, h, t)                 \
{                                          \
    type pt;                               \
    for (pt = h; pt->next; pt = pt->next); \
    pt->next = t;                          \
}
#line 56 "parser.y"
typedef union {
    DMXConfigTokenPtr      token;
    DMXConfigStringPtr     string;
    DMXConfigNumberPtr     number;
    DMXConfigPairPtr       pair;
    DMXConfigFullDimPtr    fdim;
    DMXConfigPartDimPtr    pdim;
    DMXConfigDisplayPtr    display;
    DMXConfigWallPtr       wall;
    DMXConfigOptionPtr     option;
    DMXConfigParamPtr      param;
    DMXConfigCommentPtr    comment;
    DMXConfigSubPtr        subentry;
    DMXConfigVirtualPtr    virtual;
    DMXConfigEntryPtr      entry;
} YYSTYPE;
#line 58 "parser.c"
#define T_VIRTUAL 257
#define T_DISPLAY 258
#define T_WALL 259
#define T_OPTION 260
#define T_PARAM 261
#define T_STRING 262
#define T_DIMENSION 263
#define T_OFFSET 264
#define T_ORIGIN 265
#define T_COMMENT 266
#define T_LINE_COMMENT 267
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,   22,   22,   23,   23,   21,   21,   21,   21,   18,
   18,   19,   19,   19,   19,   19,   14,   15,   15,   16,
   16,   17,   11,   11,   11,   12,   12,   12,   13,   13,
   13,   13,   13,   13,   13,   20,   20,   20,    1,    1,
    7,    7,    8,    8,    9,    9,   10,   10,    3,    3,
    4,    4,    5,    5,    2,    2,    6,    6,
};
short yylen[] = {                                         2,
    1,    1,    2,    1,    1,    4,    5,    5,    6,    1,
    2,    1,    1,    1,    1,    1,    3,    3,    4,    1,
    2,    2,    2,    1,    1,    3,    2,    1,    5,    4,
    4,    4,    3,    3,    2,    5,    4,    3,    1,    2,
    1,    2,    1,    2,    1,    2,    1,    2,    1,    2,
    1,    2,    1,    2,    1,    2,    1,    2,
};
short yydefred[] = {                                      0,
    0,    5,    0,    4,    0,    2,    0,    0,    0,    0,
    0,    0,    3,   52,   42,   44,    0,    0,    0,    0,
   12,    0,    0,   13,   15,   16,    0,   10,   14,    0,
    0,    0,   40,   56,    0,   57,    0,    0,    0,    0,
    0,   35,    0,    0,   25,    0,    0,    0,    0,    0,
    6,   11,    0,    0,    0,   17,   58,    0,    0,   20,
   18,   50,   27,   46,    0,   34,    0,    0,   23,    0,
   33,    0,   38,    0,    0,   54,    8,    0,    7,   22,
   19,   21,   48,   31,   32,    0,   26,   30,   37,    0,
    9,   29,   36,
};
short yydgoto[] = {                                       3,
   22,   23,   42,   10,   51,   58,   36,   44,   45,   67,
   46,   47,   24,   25,   26,   59,   60,   27,   28,   29,
    4,    5,    6,
};
short yysindex[] = {                                   -224,
 -117,    0,    0,    0, -224,    0, -238, -235, -227, -155,
 -109,  -79,    0,    0,    0,    0, -216, -212, -203, -101,
    0,  -34, -198,    0,    0,    0, -110,    0,    0, -155,
  -79, -155,    0,    0,  -49,    0, -203,  -49, -191, -194,
 -189,    0,  -40, -192,    0,   36,  -57,  -49, -198, -174,
    0,    0, -110, -155, -110,    0,    0,  -49, -107,    0,
    0,    0,    0,    0, -168,    0,   32,  -57,    0, -194,
    0,   32,    0,  -49, -203,    0,    0, -110,    0,    0,
    0,    0,    0,    0,    0,   32,    0,    0,    0,  -49,
    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,   99,    0, -165,  -47,  -43,    0,
    0,    0,    0,    0,    0,    0,  -30, -175,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -120,    0,
  -39,    0,    0,  -38,    0,  -56,    0,    0,    0,    1,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   48,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,    0,   -1,   70,   -4,    4,   10,   29,   64,   -6,
  -14,   66,    0,    0,    0,    0,   51,    6,    8,    0,
    0,    0,  106,
};
#define YYTABLESIZE 268
short yytable[] = {                                      41,
   53,   39,   28,   43,   49,    7,   40,   45,   24,   39,
   11,   41,   40,    7,   50,   43,   39,   50,   39,   45,
   24,    7,   35,   38,   39,   63,   48,   14,   39,   12,
   15,   43,    1,   56,   52,   53,   61,   55,   16,   31,
   72,   66,    2,    7,   57,   71,   73,   57,   77,   33,
   79,   49,   74,   34,   81,   87,   80,   57,    8,   78,
   52,   86,   52,    8,    9,   84,   85,   57,    9,   41,
   88,   41,   89,   91,   62,   41,   64,   75,   90,   43,
   30,   32,   70,   57,   92,   52,   55,   55,   93,   37,
   39,   76,   51,   51,   51,   51,   51,   83,    1,   57,
   54,   51,   17,   18,   19,   20,   47,   69,   68,   82,
   13,   21,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   53,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   49,   49,   49,
   49,   49,    0,    0,    8,    9,   49,   17,   18,   19,
   20,    0,    0,    9,    8,    0,   21,    0,    0,    0,
    8,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   65,   28,    0,
    0,    0,    8,    0,   41,   41,   41,   41,   43,   43,
   43,   43,    9,   41,   65,   45,   24,    8,    9,   41,
    0,   39,   39,   39,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   53,   53,   53,
   53,   53,    0,    0,    0,    0,    0,   53,
};
short yycheck[] = {                                      47,
    0,   59,   59,   47,  125,  123,   47,   47,   47,   59,
    1,   59,   47,  123,  125,   59,   47,  125,   59,   59,
   59,  123,   19,   20,   59,   40,   23,  266,   59,    1,
  266,   22,  257,   35,   27,   30,   38,   32,  266,   11,
   47,   43,  267,  123,   35,   47,   48,   38,   53,  266,
   55,   23,   49,  266,   59,   70,   58,   48,  262,   54,
   53,   68,   55,  262,  263,   67,   68,   58,  263,  264,
   72,  264,   74,   78,  266,  123,  266,   49,   75,  123,
   11,   12,   47,   74,   86,   78,  262,  263,   90,   20,
   59,  266,  258,  259,  260,  261,  262,  266,    0,   90,
   31,  267,  258,  259,  260,  261,   59,   44,   43,   59,
    5,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  125,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  258,  259,  260,
  261,  262,   -1,   -1,  262,  263,  267,  258,  259,  260,
  261,   -1,   -1,  263,  262,   -1,  267,   -1,   -1,   -1,
  262,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  265,  265,   -1,
   -1,   -1,  262,   -1,  262,  263,  264,  265,  262,  263,
  264,  265,  263,  264,  265,  265,  265,  262,  263,  264,
   -1,  262,  263,  264,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,
  260,  261,   -1,   -1,   -1,   -1,   -1,  267,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 267
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,"'/'",0,0,0,0,0,0,0,0,0,0,0,"';'",0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"T_VIRTUAL",
"T_DISPLAY","T_WALL","T_OPTION","T_PARAM","T_STRING","T_DIMENSION","T_OFFSET",
"T_ORIGIN","T_COMMENT","T_LINE_COMMENT",
};
char *yyrule[] = {
"$accept : Program",
"Program : EntryList",
"EntryList : Entry",
"EntryList : EntryList Entry",
"Entry : Virtual",
"Entry : T_LINE_COMMENT",
"Virtual : T_VIRTUAL Open SubList Close",
"Virtual : T_VIRTUAL Dimension Open SubList Close",
"Virtual : T_VIRTUAL Name Open SubList Close",
"Virtual : T_VIRTUAL Name Dimension Open SubList Close",
"SubList : Sub",
"SubList : SubList Sub",
"Sub : T_LINE_COMMENT",
"Sub : DisplayEntry",
"Sub : WallEntry",
"Sub : OptionEntry",
"Sub : ParamEntry",
"OptionEntry : T_OPTION NameList Terminal",
"ParamEntry : T_PARAM NameList Terminal",
"ParamEntry : T_PARAM Open ParamList Close",
"ParamList : Param",
"ParamList : ParamList Param",
"Param : NameList Terminal",
"PartialDim : Dimension Offset",
"PartialDim : Dimension",
"PartialDim : Offset",
"FullDim : PartialDim '/' PartialDim",
"FullDim : '/' PartialDim",
"FullDim : PartialDim",
"DisplayEntry : Display Name FullDim Origin Terminal",
"DisplayEntry : Display FullDim Origin Terminal",
"DisplayEntry : Display Name Origin Terminal",
"DisplayEntry : Display Name FullDim Terminal",
"DisplayEntry : Display FullDim Terminal",
"DisplayEntry : Display Name Terminal",
"DisplayEntry : Display Terminal",
"WallEntry : Wall Dimension Dimension NameList Terminal",
"WallEntry : Wall Dimension NameList Terminal",
"WallEntry : Wall NameList Terminal",
"Display : T_DISPLAY",
"Display : T_DISPLAY T_COMMENT",
"Name : T_STRING",
"Name : T_STRING T_COMMENT",
"Dimension : T_DIMENSION",
"Dimension : T_DIMENSION T_COMMENT",
"Offset : T_OFFSET",
"Offset : T_OFFSET T_COMMENT",
"Origin : T_ORIGIN",
"Origin : T_ORIGIN T_COMMENT",
"Terminal : ';'",
"Terminal : ';' T_COMMENT",
"Open : '{'",
"Open : '{' T_COMMENT",
"Close : '}'",
"Close : '}' T_COMMENT",
"Wall : T_WALL",
"Wall : T_WALL T_COMMENT",
"NameList : Name",
"NameList : NameList Name",
};
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
#line 95 "parser.y"
{ dmxConfigEntry = yyvsp[0].entry; }
break;
case 3:
#line 99 "parser.y"
{ APPEND(DMXConfigEntryPtr,yyvsp[-1].entry,yyvsp[0].entry); yyval.entry = yyvsp[-1].entry; }
break;
case 4:
#line 102 "parser.y"
{ yyval.entry = dmxConfigEntryVirtual(yyvsp[0].virtual); }
break;
case 5:
#line 103 "parser.y"
{ yyval.entry = dmxConfigEntryComment(yyvsp[0].comment); }
break;
case 6:
#line 107 "parser.y"
{ yyval.virtual = dmxConfigCreateVirtual(yyvsp[-3].token, NULL, NULL, yyvsp[-2].token, yyvsp[-1].subentry, yyvsp[0].token); }
break;
case 7:
#line 109 "parser.y"
{ yyval.virtual = dmxConfigCreateVirtual(yyvsp[-4].token, NULL, yyvsp[-3].pair, yyvsp[-2].token, yyvsp[-1].subentry, yyvsp[0].token); }
break;
case 8:
#line 111 "parser.y"
{ yyval.virtual = dmxConfigCreateVirtual(yyvsp[-4].token, yyvsp[-3].string, NULL, yyvsp[-2].token, yyvsp[-1].subentry, yyvsp[0].token); }
break;
case 9:
#line 113 "parser.y"
{ yyval.virtual = dmxConfigCreateVirtual(yyvsp[-5].token, yyvsp[-4].string, yyvsp[-3].pair, yyvsp[-2].token, yyvsp[-1].subentry, yyvsp[0].token ); }
break;
case 11:
#line 117 "parser.y"
{ APPEND(DMXConfigSubPtr,yyvsp[-1].subentry,yyvsp[0].subentry); yyval.subentry = yyvsp[-1].subentry; }
break;
case 12:
#line 120 "parser.y"
{ yyval.subentry = dmxConfigSubComment(yyvsp[0].comment); }
break;
case 13:
#line 121 "parser.y"
{ yyval.subentry = dmxConfigSubDisplay(yyvsp[0].display); }
break;
case 14:
#line 122 "parser.y"
{ yyval.subentry = dmxConfigSubWall(yyvsp[0].wall); }
break;
case 15:
#line 123 "parser.y"
{ yyval.subentry = dmxConfigSubOption(yyvsp[0].option); }
break;
case 16:
#line 124 "parser.y"
{ yyval.subentry = dmxConfigSubParam(yyvsp[0].param); }
break;
case 17:
#line 128 "parser.y"
{ yyval.option = dmxConfigCreateOption(yyvsp[-2].token, yyvsp[-1].string, yyvsp[0].token); }
break;
case 18:
#line 132 "parser.y"
{ yyval.param = dmxConfigCreateParam(yyvsp[-2].token, NULL, yyvsp[-1].string, NULL, yyvsp[0].token); }
break;
case 19:
#line 134 "parser.y"
{ yyval.param = dmxConfigCreateParam(yyvsp[-3].token, yyvsp[-2].token, NULL, yyvsp[0].token, NULL);
               yyval.param->next = yyvsp[-1].param;
             }
break;
case 21:
#line 140 "parser.y"
{ APPEND(DMXConfigParamPtr,yyvsp[-1].param,yyvsp[0].param); yyval.param = yyvsp[-1].param; }
break;
case 22:
#line 144 "parser.y"
{ yyval.param = dmxConfigCreateParam(NULL, NULL, yyvsp[-1].string, NULL, yyvsp[0].token); }
break;
case 23:
#line 148 "parser.y"
{ yyval.pdim = dmxConfigCreatePartDim(yyvsp[-1].pair, yyvsp[0].pair); }
break;
case 24:
#line 150 "parser.y"
{ yyval.pdim = dmxConfigCreatePartDim(yyvsp[0].pair, NULL); }
break;
case 25:
#line 152 "parser.y"
{ yyval.pdim = dmxConfigCreatePartDim(NULL, yyvsp[0].pair); }
break;
case 26:
#line 156 "parser.y"
{ yyval.fdim = dmxConfigCreateFullDim(yyvsp[-2].pdim, yyvsp[0].pdim); }
break;
case 27:
#line 158 "parser.y"
{ yyval.fdim = dmxConfigCreateFullDim(NULL, yyvsp[0].pdim); }
break;
case 28:
#line 160 "parser.y"
{ yyval.fdim = dmxConfigCreateFullDim(yyvsp[0].pdim, NULL); }
break;
case 29:
#line 164 "parser.y"
{ yyval.display = dmxConfigCreateDisplay(yyvsp[-4].token, yyvsp[-3].string, yyvsp[-2].fdim, yyvsp[-1].pair, yyvsp[0].token); }
break;
case 30:
#line 166 "parser.y"
{ yyval.display = dmxConfigCreateDisplay(yyvsp[-3].token, NULL, yyvsp[-2].fdim, yyvsp[-1].pair, yyvsp[0].token); }
break;
case 31:
#line 168 "parser.y"
{ yyval.display = dmxConfigCreateDisplay(yyvsp[-3].token, yyvsp[-2].string, NULL, yyvsp[-1].pair, yyvsp[0].token); }
break;
case 32:
#line 171 "parser.y"
{ yyval.display = dmxConfigCreateDisplay(yyvsp[-3].token, yyvsp[-2].string, yyvsp[-1].fdim, NULL, yyvsp[0].token); }
break;
case 33:
#line 173 "parser.y"
{ yyval.display = dmxConfigCreateDisplay(yyvsp[-2].token, NULL, yyvsp[-1].fdim, NULL, yyvsp[0].token); }
break;
case 34:
#line 175 "parser.y"
{ yyval.display = dmxConfigCreateDisplay(yyvsp[-2].token, yyvsp[-1].string, NULL, NULL, yyvsp[0].token); }
break;
case 35:
#line 177 "parser.y"
{ yyval.display = dmxConfigCreateDisplay(yyvsp[-1].token, NULL, NULL, NULL, yyvsp[0].token); }
break;
case 36:
#line 181 "parser.y"
{ yyval.wall = dmxConfigCreateWall(yyvsp[-4].token, yyvsp[-3].pair, yyvsp[-2].pair, yyvsp[-1].string, yyvsp[0].token); }
break;
case 37:
#line 183 "parser.y"
{ yyval.wall = dmxConfigCreateWall(yyvsp[-3].token, yyvsp[-2].pair, NULL, yyvsp[-1].string, yyvsp[0].token); }
break;
case 38:
#line 185 "parser.y"
{ yyval.wall = dmxConfigCreateWall(yyvsp[-2].token, NULL, NULL, yyvsp[-1].string, yyvsp[0].token); }
break;
case 40:
#line 189 "parser.y"
{ yyval.token = yyvsp[-1].token; yyval.token->comment = yyvsp[0].comment->comment; }
break;
case 42:
#line 193 "parser.y"
{ yyval.string = yyvsp[-1].string; yyval.string->comment = yyvsp[0].comment->comment; }
break;
case 44:
#line 197 "parser.y"
{ yyval.pair = yyvsp[-1].pair; yyval.pair->comment = yyvsp[0].comment->comment; }
break;
case 46:
#line 201 "parser.y"
{ yyval.pair = yyvsp[-1].pair; yyval.pair->comment = yyvsp[0].comment->comment; }
break;
case 48:
#line 205 "parser.y"
{ yyval.pair = yyvsp[-1].pair; yyval.pair->comment = yyvsp[0].comment->comment; }
break;
case 50:
#line 209 "parser.y"
{ yyval.token = yyvsp[-1].token; yyval.token->comment = yyvsp[0].comment->comment; }
break;
case 52:
#line 213 "parser.y"
{ yyval.token = yyvsp[-1].token; yyval.token->comment = yyvsp[0].comment->comment; }
break;
case 54:
#line 217 "parser.y"
{ yyval.token = yyvsp[-1].token; yyval.token->comment = yyvsp[0].comment->comment; }
break;
case 56:
#line 221 "parser.y"
{ yyval.token = yyvsp[-1].token; yyval.token->comment = yyvsp[0].comment->comment; }
break;
case 58:
#line 225 "parser.y"
{ APPEND(DMXConfigStringPtr, yyvsp[-1].string, yyvsp[0].string); yyval.string = yyvsp[-1].string; }
break;
#line 663 "parser.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
