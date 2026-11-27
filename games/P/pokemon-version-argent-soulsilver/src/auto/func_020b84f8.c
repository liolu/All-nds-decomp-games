/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dLoadImageVramTransfer from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Image.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef volatile u32 vu32;
typedef vu32 REGType32v;
typedef int BOOL;
extern void func_020d2894(const void *startAddr, u32 nBytes);
typedef enum {
    GX_TEXSIZE_S8    = 0,
    GX_TEXSIZE_S16   = 1,
    GX_TEXSIZE_S32   = 2,
    GX_TEXSIZE_S64   = 3,
    GX_TEXSIZE_S128  = 4,
    GX_TEXSIZE_S256  = 5,
    GX_TEXSIZE_S512  = 6,
    GX_TEXSIZE_S1024 = 7
} GXTexSizeS;
typedef enum {
    GX_TEXSIZE_T8    = 0,
    GX_TEXSIZE_T16   = 1,
    GX_TEXSIZE_T32   = 2,
    GX_TEXSIZE_T64   = 3,
    GX_TEXSIZE_T128  = 4,
    GX_TEXSIZE_T256  = 5,
    GX_TEXSIZE_T512  = 6,
    GX_TEXSIZE_T1024 = 7
} GXTexSizeT;
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
typedef enum {
    GX_TEXPLTTCOLOR0_USE  = 0,
    GX_TEXPLTTCOLOR0_TRNS = 1
} GXTexPlttColor0;
typedef enum {
    GX_OBJVRAMMODE_CHAR_2D      = (0 << 4) | (0 << 20),
    GX_OBJVRAMMODE_CHAR_1D_32K  = (1 << 4) | (0 << 20),
    GX_OBJVRAMMODE_CHAR_1D_64K  = (1 << 4) | (1 << 20),
    GX_OBJVRAMMODE_CHAR_1D_128K = (1 << 4) | (2 << 20),
    GX_OBJVRAMMODE_CHAR_1D_256K = (1 << 4) | (3 << 20)
} GXOBJVRamModeChar;
extern void GX_SetOBJVRamModeChar(GXOBJVRamModeChar mode);
extern void GXS_SetOBJVRamModeChar(GXOBJVRamModeChar mode);
static inline void GX_SetOBJVRamModeChar(GXOBJVRamModeChar mode) {
    ((void) 0);

    (*(REGType32v *) (0x04000000 + 0x000)) =
        (u32) ((*(REGType32v *) (0x04000000 + 0x000)) & ~(0x00300000 | 0x00000010) | mode);
}
static inline void GXS_SetOBJVRamModeChar(GXOBJVRamModeChar mode) {
    ((void) 0);

    (*(REGType32v *) (0x04000000 + 0x1000)) =
        (u32) ((*(REGType32v *) (0x04000000 + 0x1000)) & ~(0x00300000 | 0x00000010) | mode);
}
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSG2dCharacterData {
    u16 H;
    u16 W;
    GXTexFmt pixelFmt;
    GXOBJVRamModeChar mappingType;
    u32 characterFmt;
    u32 szByte;
    void *pRawData;
} NNSG2dCharacterData;
typedef enum NNS_G2D_VRAM_TYPE {
    NNS_G2D_VRAM_TYPE_3DMAIN = 0,
    NNS_G2D_VRAM_TYPE_2DMAIN = 1,
    NNS_G2D_VRAM_TYPE_2DSUB  = 2,
    NNS_G2D_VRAM_TYPE_2DBOTH = 3,
    NNS_G2D_VRAM_TYPE_MAX    = 3
} NNS_G2D_VRAM_TYPE;
typedef struct NNSG2dImageAttr {
    GXTexSizeS sizeS;
    GXTexSizeT sizeT;
    GXTexFmt fmt;
    BOOL bExtendedPlt;
    GXTexPlttColor0 plttUse;
    GXOBJVRamModeChar mappingType;
} NNSG2dImageAttr;
typedef struct NNSG2dVRamLocation {
    u32 baseAddrOfVram[NNS_G2D_VRAM_TYPE_MAX];
} NNSG2dVRamLocation;
typedef struct NNSG2dImageProxy {
    NNSG2dVRamLocation vramLocation;
    NNSG2dImageAttr attr;
} NNSG2dImageProxy;
extern void func_020b8024(NNSG2dImageProxy *pImg, NNS_G2D_VRAM_TYPE type, u32 addr);
extern void func_020b84f8(const NNSG2dCharacterData *pSrcData, u32 baseAddr, NNS_G2D_VRAM_TYPE type,
                          NNSG2dImageProxy *pImgProxy);
static inline int GetPow_(u16 num) {
    switch (num) {
        case 1:
            return GX_TEXSIZE_S8;
        case 2:
            return GX_TEXSIZE_S16;
        case 4:
            return GX_TEXSIZE_S32;
        case 8:
            return GX_TEXSIZE_S64;
        case 16:
            return GX_TEXSIZE_S128;
        case 32:
            return GX_TEXSIZE_S256;
        default:
            ((void) 0);
            return GX_TEXSIZE_S8;
    }
}
static inline void CopyCharDataToImageAttr_(const NNSG2dCharacterData *pSrc, NNSG2dImageAttr *pDst) {
    ((void) 0);
    ((void) 0);

    if (pSrc->mappingType == GX_OBJVRAMMODE_CHAR_2D) {
        pDst->sizeS = (GXTexSizeS) (GetPow_(pSrc->W));
        pDst->sizeT = (GXTexSizeT) (GetPow_(pSrc->H));
    } else {

        ((void) 0);

        pDst->sizeS = (GXTexSizeS) pSrc->W;
        pDst->sizeT = (GXTexSizeT) pSrc->H;
    }

    pDst->fmt          = pSrc->pixelFmt;
    pDst->bExtendedPlt = 0;
    pDst->plttUse      = GX_TEXPLTTCOLOR0_TRNS;
    pDst->mappingType  = pSrc->mappingType;
}
static inline void SetOBJVRamModeCharacterMapping_(NNS_G2D_VRAM_TYPE vramType, GXOBJVRamModeChar vramMode) {
    ((void) 0);

    switch (vramType) {
        case NNS_G2D_VRAM_TYPE_3DMAIN:
            break;
        case NNS_G2D_VRAM_TYPE_2DMAIN:
            GX_SetOBJVRamModeChar(vramMode);
            break;
        case NNS_G2D_VRAM_TYPE_2DSUB:
            GXS_SetOBJVRamModeChar(vramMode);
            break;
        default:
            ((void) 0);
    }
}
void func_020b8024(NNSG2dImageProxy *pImg, NNS_G2D_VRAM_TYPE type, u32 addr);
void func_020b84f8(const NNSG2dCharacterData *pSrcData, u32 baseAddr, NNS_G2D_VRAM_TYPE type, NNSG2dImageProxy *pImgProxy) {
    ((void) 0)

        ;

    ((void) 0);

    func_020d2894(pSrcData->pRawData, pSrcData->szByte);

    SetOBJVRamModeCharacterMapping_(type, pSrcData->mappingType);

    CopyCharDataToImageAttr_(pSrcData, &pImgProxy->attr);

    func_020b8024(pImgProxy, type, baseAddr);
}
