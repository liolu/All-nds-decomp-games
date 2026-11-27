/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dLoadPaletteEx from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Image.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_020d2894(const void *startAddr, u32 nBytes);
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
extern void func_020cfd18(const void *pSrc, u32 offset, u32 szByte);
extern void func_020d067c(void);
extern void func_020d06c4(const void *pSrc, u32 destSlotAddr, u32 szByte);
extern void func_020d0730(void);
extern void func_020cfd70(const void *pSrc, u32 offset, u32 szByte);
extern void func_020d0830(void);
extern void func_020d0848(const void *pSrc, u32 destSlotAddr, u32 szByte);
extern void func_020d08ac(void);
extern void func_020d0ad4(void);
extern void func_020d0b08(const void *pSrc, u32 destSlotAddr, u32 szByte);
extern void func_020d0b74(void);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSG2dPaletteCompressInfo {
    u16 numPalette;
    u16 pad16;
    void *pPlttIdxTbl;
} NNSG2dPaletteCompressInfo;
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
extern void func_020b87c4(const NNSG2dPaletteData *pSrcData, const NNSG2dPaletteCompressInfo *pCmpInfo, u32 addr,
                          NNS_G2D_VRAM_TYPE type, NNSG2dImagePaletteProxy *pPltProxy);
extern void func_020b806c(NNSG2dImagePaletteProxy *pImg, NNS_G2D_VRAM_TYPE type, u32 addr);
static inline void DoLoadingPalette_(const NNSG2dPaletteData *pSrcData, u32 srcOffset, u32 addr, u32 szByte,
                                     NNS_G2D_VRAM_TYPE type) {
    ((void) 0);
    {
        const void *pSrcRawData = (const void *) ((const u8 *) pSrcData->pRawData + srcOffset);

        func_020d2894(pSrcData->pRawData, pSrcData->szByte);

        switch (type) {
            case NNS_G2D_VRAM_TYPE_2DMAIN:
                if (pSrcData->bExtendedPlt) {
                    func_020d067c();
                    func_020d06c4(pSrcRawData, addr, szByte);
                    func_020d0730();
                } else {
                    func_020cfd18(pSrcRawData, addr, szByte);
                }
                break;
            case NNS_G2D_VRAM_TYPE_2DSUB:
                if (pSrcData->bExtendedPlt) {
                    func_020d0830();
                    func_020d0848(pSrcRawData, addr, szByte);
                    func_020d08ac();
                } else {
                    func_020cfd70(pSrcRawData, addr, szByte);
                }
                break;
            case NNS_G2D_VRAM_TYPE_3DMAIN:
                func_020d0ad4();
                func_020d0b08(pSrcRawData, addr, szByte);
                func_020d0b74();
                break;
            default:
                ((void) 0);
                break;
        }
    }
}
static inline u32 CalcSizePerOnePltt_(const NNSG2dPaletteData *pSrcData) {
    ((void) 0);

    if (pSrcData->fmt == GX_TEXFMT_PLTT16) {
        return 16 * sizeof(u16);
    } else {
        ((void) 0);
        return 256 * sizeof(u16);
    }
}
static inline u16 GetCompressedPlttOriginalIndex_(const NNSG2dPaletteCompressInfo *pCmpInfo, u16 idx) {
    ((void) 0);
    return *(((u16 *) pCmpInfo->pPlttIdxTbl) + idx);
}
static inline void DoLoadingPaletteEx_(const NNSG2dPaletteData *pSrcData, const NNSG2dPaletteCompressInfo *pCmpInfo, u32 addr,
                                       NNS_G2D_VRAM_TYPE type) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    {
        u16 i;
        u32 offsetAddr;
        const u32 szOnePltt = CalcSizePerOnePltt_(pSrcData);
        const u16 numIdx    = pCmpInfo->numPalette;

        for (i = 0; i < numIdx; i++) {
            offsetAddr = GetCompressedPlttOriginalIndex_(pCmpInfo, i) * szOnePltt;
            DoLoadingPalette_(pSrcData, szOnePltt * i, addr + offsetAddr, szOnePltt, type);
        }
    }
}
void func_020b806c(NNSG2dImagePaletteProxy *pImg, NNS_G2D_VRAM_TYPE type, u32 addr);
void func_020b87c4(const NNSG2dPaletteData *pSrcData, const NNSG2dPaletteCompressInfo *pCmpInfo, u32 addr,
                   NNS_G2D_VRAM_TYPE type, NNSG2dImagePaletteProxy *pPltProxy) {
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);

    DoLoadingPaletteEx_(pSrcData, pCmpInfo, addr, type);

    pPltProxy->fmt          = pSrcData->fmt;
    pPltProxy->bExtendedPlt = pSrcData->bExtendedPlt;

    func_020b806c(pPltProxy, type, addr);
}
