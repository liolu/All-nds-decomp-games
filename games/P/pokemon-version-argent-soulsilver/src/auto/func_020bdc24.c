/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G2dTextCanvasDrawTextRect from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * eu/libs/nns/g2d/calls/NNSi_G2dTextCanvasDrawTextRect.c (license: MIT), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef signed char s8;
typedef struct NNSG2dCharCanvas NNSG2dCharCanvas;
typedef struct NNSG2dCharWidths {
    s8 left;
    u8 glyphWidth;
    s8 charWidth;
} NNSG2dCharWidths;
typedef struct NNSG2dFontCodeMap {
    u16 ccodeBegin;
    u16 ccodeEnd;
    u16 mappingMethod;
    u16 reserved;
    struct NNSG2dFontCodeMap *pNext;
    u16 mapInfo[];
} NNSG2dFontCodeMap;
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
typedef struct NNSG2dFont {
    NNSG2dFontInformation *pRes;
    NNSiG2dSplitCharCallback cbCharSpliter;
} NNSG2dFont;
typedef struct NNSG2dTextCanvas {
    NNSG2dCharCanvas *pCanvas;
    NNSG2dFont *pFont;
    int hSpace;
    int vSpace;
} NNSG2dTextCanvas;
typedef struct NNSiG2dTextDirection {
    s8 x;
    s8 y;
} NNSiG2dTextDirection;
typedef struct NNSG2dGlyph {
    const NNSG2dCharWidths *pWidths;
    const u8 *image;
} NNSG2dGlyph;
typedef void (*NNSiG2dDrawGlyphFunc)(const struct NNSG2dCharCanvas *pCC, const NNSG2dFont *pFont, int x, int y, int cl,
                                     const NNSG2dGlyph *pGlyph);
typedef void (*NNSiG2dClearFunc)(const struct NNSG2dCharCanvas *pCC, int cl);
typedef void (*NNSiG2dClearAreaFunc)(const struct NNSG2dCharCanvas *pCC, int cl, int x, int y, int w, int h);
typedef struct NNSiG2dCharCanvasVTable {
    NNSiG2dDrawGlyphFunc pDrawGlyph;
    NNSiG2dClearFunc pClear;
    NNSiG2dClearAreaFunc pClearArea;
} NNSiG2dCharCanvasVTable;
typedef struct NNSG2dCharCanvas {
    u8 *charBase;
    int areaWidth;
    int areaHeight;
    u8 dstBpp;
    u8 reserved[3];
    u32 param;
    const NNSiG2dCharCanvasVTable *vtable;
} NNSG2dCharCanvas;
extern int func_020bc4e8(const NNSG2dFont *pFont, int vSpace, const void *txt);
extern void func_020bd998(const NNSG2dTextCanvas *pTxn, int x, int y, int areaWidth, int cl, u32 flags, const void *txt,
                          NNSiG2dTextDirection d);
void func_020bdc24(const NNSG2dTextCanvas *pTxn, int x, int y, int areaWidth, int areaHeight, int cl, u32 flags,
                   const void *txt, NNSiG2dTextDirection d) {
    if (flags & 0x100) {
        const int height = func_020bc4e8(pTxn->pFont, pTxn->vSpace, txt);
        const int offset = areaHeight - height;
        x += offset * -d.y;
        y += offset * d.x;
    } else if (flags & 0x80) {
        const int height = func_020bc4e8(pTxn->pFont, pTxn->vSpace, txt);
        const int offset = (areaHeight + 1) / 2 - (height + 1) / 2;
        x += offset * -d.y;
        y += offset * d.x;
    }

    func_020bd998(pTxn, x, y, areaWidth, cl, flags, txt, d);
}
