/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNSi_G2dCharCanvasDrawText from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_font.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef struct NNSG2dCharWidths {
    s8 left;
    u8 glyphWidth;
    s8 charWidth;
} NNSG2dCharWidths;
typedef struct NNSG2dFontWidth {
    u16 indexBegin;
    u16 indexEnd;
    struct NNSG2dFontWidth *pNext;
    NNSG2dCharWidths widthTable[1];
} NNSG2dFontWidth;
typedef struct NNSG2dFontGlyph {
    u8 cellWidth;
    u8 cellHeight;
    u16 cellSize;
    s8 baselinePos;
    u8 maxCharWidth;
    u8 bpp;
    u8 flags;
} NNSG2dFontGlyph;
typedef struct NNSG2dFontInformation {
    u8 fontType;
    s8 linefeed;
    u16 alterCharIndex;
    NNSG2dCharWidths defaultWidth;
    u8 encoding;
    NNSG2dFontGlyph *pGlyph;
    NNSG2dFontWidth *pWidth;
    void *pMap;
} NNSG2dFontInformation;
typedef struct NNSG2dFont {
    NNSG2dFontInformation *pRes;
    u16 (*cbCharSpliter)(const void **ppChar);
} NNSG2dFont;
typedef struct LC_INFO {
    const u8 *dst;
    const u8 *src;
    int ofs_x;
    int ofs_y;
    int width;
    int height;
    int dsrc;
    int srcBpp;
    int dstBpp;
    u32 cl;
} LC_INFO;
typedef struct NNSG2dGlyph {
    const NNSG2dCharWidths *pWidths;
    const u8 *image;
} NNSG2dGlyph;
typedef struct NNSG2dCharCanvas {
    u8 *charBase;
    int areaWidth;
    int areaHeight;
    u8 dstBpp;
    u8 reserved[3];
    u32 param;
    const void *vtable;
} NNSG2dCharCanvas;
extern void func_020a9e4c(LC_INFO *i);
extern void func_020a9c94(const NNSG2dCharCanvas *pCC, const NNSG2dFont *pFont, int x, int y, int cl,
                          const NNSG2dGlyph *pGlyph);
void func_020a9e4c(LC_INFO *i);
static inline int GetCharacterSize(const NNSG2dCharCanvas *pCC) {
    return 8 * 8 * pCC->dstBpp / 8;
}
static inline u8 NNS_G2dFontGetCellHeight(const NNSG2dFont *pFont) {
    return pFont->pRes->pGlyph->cellHeight;
}
static inline u8 NNS_G2dFontGetCellWidth(const NNSG2dFont *pFont) {
    return pFont->pRes->pGlyph->cellWidth;
}
static inline u8 NNS_G2dFontGetBpp(const NNSG2dFont *pFont) {
    return pFont->pRes->pGlyph->bpp;
}
void func_020a9c94(const NNSG2dCharCanvas *pCC, const NNSG2dFont *pFont, int x, int y, int cl, const NNSG2dGlyph *pGlyph) {
    int ofs_x_base;
    int ofs_x;
    int ofs_y;
    int ofs_x_end;
    int ofs_y_end;
    unsigned int nextLineOffset;
    u8 *pChar;
    u8 glyphWidth;
    u8 charHeight;
    int charSize;

    charSize = GetCharacterSize(pCC);

    {
        int chara_x_num;
        int chara_y_num;
        const unsigned int areaWidth         = (unsigned int) pCC->areaWidth;
        const unsigned int areaHeight        = (unsigned int) pCC->areaHeight;
        u8 *const charBase                   = pCC->charBase;
        const NNSG2dCharWidths *const pWidth = pGlyph->pWidths;

        unsigned int chara_x_begin;
        unsigned int chara_x_last;
        unsigned int chara_y_begin;
        unsigned int chara_y_last;

        glyphWidth = pWidth->glyphWidth;
        charHeight = NNS_G2dFontGetCellHeight(pFont);

        if (glyphWidth <= 0) {
            return;
        }

        if ((x + glyphWidth < 0) || (y + charHeight) < 0) {
            return;
        }

        chara_x_begin = (x <= 0) ? 0 : ((u32) x / 8);
        chara_y_begin = (y <= 0) ? 0 : ((u32) y / 8);

        chara_x_last = (u32) (x + glyphWidth + (8 - 1)) / 8;
        if (chara_x_last >= areaWidth) {
            chara_x_last = areaWidth;
        }
        chara_y_last = (u32) (y + charHeight + (8 - 1)) / 8;
        if (chara_y_last >= areaHeight) {
            chara_y_last = areaHeight;
        }

        chara_x_num = (int) (chara_x_last - chara_x_begin);
        chara_y_num = (int) (chara_y_last - chara_y_begin);

        if ((chara_x_num < 0) || (chara_y_num < 0)) {
            return;
        }

        pChar = charBase + (pCC->param * chara_y_begin + chara_x_begin) * charSize;

        nextLineOffset = (pCC->param - chara_x_num) * charSize;

        ofs_x_base = (x < 0) ? x : x & 0x7;
        ofs_y      = (y < 0) ? y : y & 0x7;
        ofs_x_end  = ofs_x_base - 8 * chara_x_num;
        ofs_y_end  = ofs_y - 8 * chara_y_num;
    }

    {
        LC_INFO i;

        i.src    = pGlyph->image;
        i.width  = glyphWidth;
        i.height = charHeight;
        i.cl     = (u32) (cl - 1);
        i.srcBpp = NNS_G2dFontGetBpp(pFont);
        i.dstBpp = pCC->dstBpp;
        i.dsrc   = NNS_G2dFontGetCellWidth(pFont) * i.srcBpp;

        for (; ofs_y > ofs_y_end; ofs_y -= 8) {
            i.ofs_y = ofs_y;
            for (ofs_x = ofs_x_base; ofs_x > ofs_x_end; ofs_x -= 8) {
                i.dst   = pChar;
                i.ofs_x = ofs_x;
                func_020a9e4c(&i);
                pChar += charSize;
            }
            pChar += nextLineOffset;
        }
    }
}
