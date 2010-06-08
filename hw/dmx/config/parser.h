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
extern YYSTYPE yylval;
