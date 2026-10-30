/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G2dSetupPaletteProxyPrams from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Image.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
typedef enum {
    GX_TEXFMT_NONE    = 0,
    GX_TEXFMT_A3I5    = 1,
    GX_TEXFMT_PLTT4   = 2,
    GX_TEXFMT_PLTT16  = 3,
    GX_TEXFMT_PLTT256 = 4,
    GX_TEXFMT_COMP4x4 = 5,
    GX_TEXFMT_A5I3    = 6,
    GX_TEXFMT_DIRECT  = 7
} GXTexFmt;
typedef struct NNSG2dPaletteData {
    GXTexFmt fmt;
    BOOL bExtendedPlt;
    u32 szByte;
    void *pRawData;
} NNSG2dPaletteData;
typedef enum NNS_G2D_VRAM_TYPE {
    NNS_G2D_VRAM_TYPE_3DMAIN = 0,
    NNS_G2D_VRAM_TYPE_2DMAIN = 1,
    NNS_G2D_VRAM_TYPE_2DSUB  = 2,
    NNS_G2D_VRAM_TYPE_2DBOTH = 3,
    NNS_G2D_VRAM_TYPE_MAX    = 3
} NNS_G2D_VRAM_TYPE;
typedef struct NNSG2dVRamLocation {
    u32 baseAddrOfVram[NNS_G2D_VRAM_TYPE_MAX];
} NNSG2dVRamLocation;
typedef struct NNSG2dImagePaletteProxy {
    GXTexFmt fmt;
    BOOL bExtendedPlt;
    NNSG2dVRamLocation vramLocation;
} NNSG2dImagePaletteProxy;
extern void func_0202a5f4(NNSG2dImagePaletteProxy *pImg, NNS_G2D_VRAM_TYPE type, u32 addr);
extern void func_0202aed8(const NNSG2dPaletteData *pSrcData, u32 addr, NNS_G2D_VRAM_TYPE type,
                          NNSG2dImagePaletteProxy *pPltProxy);
void func_0202a5f4(NNSG2dImagePaletteProxy *pImg, NNS_G2D_VRAM_TYPE type, u32 addr);
void func_0202aed8(const NNSG2dPaletteData *pSrcData, u32 addr, NNS_G2D_VRAM_TYPE type, NNSG2dImagePaletteProxy *pPltProxy) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    pPltProxy->fmt          = pSrcData->fmt;
    pPltProxy->bExtendedPlt = pSrcData->bExtendedPlt;

    func_0202a5f4(pPltProxy, type, addr);
}
