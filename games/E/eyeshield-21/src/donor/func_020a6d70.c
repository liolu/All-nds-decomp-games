/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* LoadScreenPart256x16Pltt from https://github.com/Yokimitsuro/khdays-decomp libs/nns/g2d/calls/LoadScreenPart256x16Pltt.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
extern void func_020bfb28(const void *srcp, void *destp, u32 size);
static inline void MI_CpuCopy16(const void *src, void *dest, u32 size) {
    func_020bfb28(src, dest, size);
}
typedef u16 GXScrFmtText;
typedef struct NNSG2dScreenData {
    u16 screenWidth;
    u16 screenHeight;
    u16 colorMode;
    u16 screenFormat;
    u32 szByte;
    u32 rawData[1];
} NNSG2dScreenData;
void func_020a6d70(void *pScreenDst, const NNSG2dScreenData *pScnData, int srcX, int srcY, int dstX, int dstY, int dstW,
                   int width, int height) {

    {
        const int src_y_end      = srcY + height;
        const int srcW           = pScnData->screenWidth / 8;
        const u32 szLine         = sizeof(GXScrFmtText) * width;
        const GXScrFmtText *pSrc = (const GXScrFmtText *) pScnData->rawData;
        GXScrFmtText *pDst       = (GXScrFmtText *) pScreenDst;
        int y;

        pSrc += srcY * srcW + srcX;
        pDst += dstY * dstW + dstX;

        for (y = srcY; y < src_y_end; y++) {
            MI_CpuCopy16(pSrc, pDst, szLine);
            pSrc += srcW;
            pDst += dstW;
        }
    }
}
