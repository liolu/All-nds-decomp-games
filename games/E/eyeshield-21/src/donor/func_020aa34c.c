/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNSi_G2dTextCanvasDrawTaggedText from https://github.com/RushRE/SonicRushAdventure-Decomp
 * lib/NitroSystem/src/g2d/g2d_TextCanvas.c (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSG2dCharWidths {
    s8 left;
    u8 glyphWidth;
    s8 charWidth;
} NNSG2dCharWidths;
typedef struct NNSG2dFontGlyph {
    u8 cellWidth;
    u8 cellHeight;
    u16 cellSize;
    s8 baselinePos;
    u8 maxCharWidth;
    u8 bpp;
    u8 flags;
    u8 glyphTable[];
} NNSG2dFontGlyph;
typedef struct NNSG2dFontWidth {
    u16 indexBegin;
    u16 indexEnd;
    struct NNSG2dFontWidth *pNext;
    NNSG2dCharWidths widthTable[];
} NNSG2dFontWidth;
typedef struct NNSG2dFontCodeMap {
    u16 ccodeBegin;
    u16 ccodeEnd;
    u16 mappingMethod;
    u16 reserved;
    struct NNSG2dFontCodeMap *pNext;
    u16 mapInfo[];
} NNSG2dFontCodeMap;
typedef struct NNSG2dFontInformation {
    u8 fontType;
    s8 linefeed;
    u16 alterCharIndex;
    NNSG2dCharWidths defaultWidth;
    u8 encoding;
    NNSG2dFontGlyph *pGlyph;
    NNSG2dFontWidth *pWidth;
    NNSG2dFontCodeMap *pMap;
} NNSG2dFontInformation;
typedef u16 (*NNSiG2dSplitCharCallback)(const void **ppChar);
typedef char NNSG2dChar;
typedef struct NNSG2dFont {
    NNSG2dFontInformation *pRes;
    NNSiG2dSplitCharCallback cbCharSpliter;
    u16 isOldVer;
    u16 widthsSize;
} NNSG2dFont;
typedef struct NNSG2dGlyph {
    const NNSG2dCharWidths *pWidths;
    const u8 *image;
} NNSG2dGlyph;
inline s8 NNS_G2dFontGetLineFeed(const NNSG2dFont *pFont) {
    return pFont->pRes->linefeed;
}
inline NNSiG2dSplitCharCallback NNSi_G2dFontGetSpliter(const NNSG2dFont *pFont) {
    return pFont->cbCharSpliter;
}
typedef void (*NNSiG2dDrawGlyphFunc)(const struct NNSG2dCharCanvas *pCC, const NNSG2dFont *pFont, int x, int y, int cl,
                                     const NNSG2dGlyph *pGlyph);
typedef void (*NNSiG2dClearFunc)(const struct NNSG2dCharCanvas *pCC, int cl);
typedef void (*NNSiG2dClearAreaFunc)(const struct NNSG2dCharCanvas *pCC, int cl, int x, int y, int w, int h);
typedef struct NNSG2dCharCanvas {
    u8 *charBase;
    int areaWidth;
    int areaHeight;
    u8 dstBpp;
    u8 reserved[3];
    u32 param;
    NNSiG2dDrawGlyphFunc pDrawGlyph;
    NNSiG2dClearFunc pClear;
    NNSiG2dClearAreaFunc pClearArea;
} NNSG2dCharCanvas;
extern int func_020a947c(const NNSG2dCharCanvas *pCC, const NNSG2dFont *pFont, int x, int y, int cl, u16 ccode);
typedef struct NNSG2dTextCanvas {
    const NNSG2dCharCanvas *pCanvas;
    const NNSG2dFont *pFont;
    int hSpace;
    int vSpace;
} NNSG2dTextCanvas;
typedef struct NNSG2dTagCallbackInfo {
    NNSG2dTextCanvas txn;
    const NNSG2dChar *str;
    int x;
    int y;
    int clr;
    void *cbParam;
} NNSG2dTagCallbackInfo;
typedef void (*NNSG2dTagCallback)(u16 c, NNSG2dTagCallbackInfo *pInfo);
extern void func_020aa34c(const NNSG2dTextCanvas *pTxn, int x, int y, int cl, const void *txt, NNSG2dTagCallback cbFunc,
                          void *cbParam);
void func_020aa34c(const NNSG2dTextCanvas *pTxn, int x, int y, int cl, const void *txt, NNSG2dTagCallback cbFunc,
                   void *cbParam) {
    const void *pos;
    int linefeed;
    int charSpace;
    const NNSG2dFont *pFont;
    NNSG2dTagCallbackInfo cbInfo;
    u16 c;
    NNSiG2dSplitCharCallback getNextChar;

    int px = x;
    int py = y;

    cbInfo.txn     = *pTxn;
    cbInfo.cbParam = cbParam;

    charSpace   = cbInfo.txn.hSpace;
    pFont       = cbInfo.txn.pFont;
    linefeed    = NNS_G2dFontGetLineFeed(pFont) + cbInfo.txn.vSpace;
    pos         = txt;
    getNextChar = NNSi_G2dFontGetSpliter(pFont);

    while ((c = getNextChar((const void **) &pos)) != 0) {
        if (c < ' ') {
            if (c == '\n') {
                px = x;
                py += linefeed;
            } else {
                cbInfo.str = (const NNSG2dChar *) pos;
                cbInfo.x   = px;
                cbInfo.y   = py;
                cbInfo.clr = cl;

                cbFunc(c, &cbInfo);

                pos = (const void *) cbInfo.str;
                px  = cbInfo.x;
                py  = cbInfo.y;
                cl  = cbInfo.clr;

                pFont     = cbInfo.txn.pFont;
                charSpace = cbInfo.txn.hSpace;
                linefeed  = NNS_G2dFontGetLineFeed(pFont) + cbInfo.txn.vSpace;
            }

            continue;
        } else {
            px += func_020a947c(cbInfo.txn.pCanvas, cbInfo.txn.pFont, px, py, cl, c);
            px += charSpace;
        }
    }
}
