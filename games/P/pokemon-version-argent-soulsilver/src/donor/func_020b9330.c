/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G2dMCMLoadCurrentMtxToCache from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_renderer_mtx_cache.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef s32 fx32;
typedef int BOOL;
typedef union MtxFx22 {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
    };
    fx32 m[2][2];
    fx32 a[4];
} MtxFx22;
typedef union MtxFx43 {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
        fx32 _30, _31, _32;
    };
    fx32 m[4][3];
    fx32 a[12];
} MtxFx43;
typedef union GXOamAttr {
    struct {
        u16 attr0;
        u16 attr1;
        u16 attr2;
        u16 attr3;
    };
    struct {
        u32 attr01;
        u32 attr23;
    };
    struct {
        u32 y : 8;
        u32 rsMode : 2;
        u32 objMode : 2;
        u32 mosaic : 1;
        u32 colorMode : 1;
        u32 shape : 2;
        u32 x : 9;
        u32 rsParam : 5;
        u32 size : 2;
        u32 charNo : 10;
        u32 priority : 2;
        u32 cParam : 4;
        u32 _3 : 16;
    };
    struct {
        u32 _0 : 28;
        u32 flipH : 1;
        u32 flipV : 1;
        u32 _1 : 2;
        u32 _2 : 2;
        u32 _4 : 16;
    };
} GXOamAttr;
typedef struct NNSG2dImageProxy NNSG2dImageProxy;
typedef struct NNSG2dPaletteProxy NNSG2dPaletteProxy;
typedef struct {
    fx32 x;
    fx32 y;
} NNSG2dFVec2;
typedef struct {
    fx32 _00, _01, _10, _11, _20, _21;
} MtxFx32;
typedef struct {
    u16 attr0;
    u16 attr1;
    u16 attr2;
} NNSG2dCellOAMAttrData;
typedef struct {
    u16 numOAMAttrs;
    u16 cellAttr;
    NNSG2dCellOAMAttrData *pOamAttrArray;
} NNSG2dCellData;
typedef struct {
    MtxFx22 m22;
    u16 affineIndex[4][2];
} NNSG2dRndCore2DMtxCache;
typedef void (*DrawOamCB)(struct NNSG2dRndCoreInstance *pRend, const NNSG2dCellData *pCell, u16 oamIdx);
typedef void (*DrawCellCB)(struct NNSG2dRndCoreInstance *pRend, const NNSG2dCellData *pCell);
typedef struct {
    struct {
        NNSG2dFVec2 posTopLeft;
        NNSG2dFVec2 sizeView;
    } viewRect;
    BOOL bActive;
    u32 type;
    DrawCellCB pBeforeDrawCellBackFunc;
    DrawCellCB pAfterDrawCellBackFunc;
    DrawOamCB pBeforeDrawOamBackFunc;
    DrawOamCB pAfterDrawOamBackFunc;
} NNSG2dRndCoreSurface;
typedef BOOL (*OamRegisterFunc)(const GXOamAttr *pOam, u16 affineIndex, BOOL bDoubleAffine);
typedef u16 (*OamAffineRegisterFunc)(const MtxFx22 *mtx);
typedef struct NNSG2dRndCoreInstance {
    NNSG2dRndCoreSurface *pCurrentTargetSurface;
    u32 affineOverwriteMode;
    const NNSG2dImageProxy *pImgProxy;
    const NNSG2dPaletteProxy *pPltProxy;
    u32 base2DCharOffset;
    u32 baseTexAddr3D;
    u32 basePltAddr3D;
    OamRegisterFunc pFuncOamRegister;
    OamAffineRegisterFunc pFuncOamAffineRegister;
    u32 flipFlag;
    NNSG2dRndCore2DMtxCache *pCurrentMtxCacheFor2D;
    const MtxFx32 *pCurrentMxt;
    BOOL bDrawEnable;
    fx32 zFor3DSoftwareSprite;
    GXOamAttr currentOam;
    MtxFx43 mtx;
} NNSG2dRndCoreInstance;
typedef struct MCMMtxState {
    u16 mtxCacheIdx;
    u16 groupID;
    u16 stateType;
    u16 pad16;
} MCMMtxState;
typedef struct NNSG2dRenderSurface NNSG2dRenderSurface;
struct NNSG2dRenderSurface {
    u8 pad_00[0x10];
    int isActive;
    int type;
    void (*pBeforeDrawCellFunc)(struct CellDrawState *pDrawState, void *pCellData);
    void (*pAfterDrawCellFunc)(void *pDrawState, void *pCellData);
    void (*pBeforeDrawOamFunc)(struct RndOamCell *c, void *pCellData, void *pOam);
    void (*pCallOamFunc)(void *pRend, void *pCellData, void *pOam);
    OamRegisterFunc pFuncOamRegister;
    OamAffineRegisterFunc pFuncOamAffineRegister;
    NNSG2dRenderSurface *pNextSurface;
    int (*pFuncVisibilityCulling)(void *pCellData, MtxFx32 *pMtx, void *pSurface);
    void (*pBeforeDrawCellBackFunc)(void *pRend, void *pSurface, void *pCellData, MtxFx32 *pMtx);
    void (*pAfterDrawCellBackFunc)(void *pRend, void *pSurface, void *pCellData, MtxFx32 *pMtx);
    void (*pBeforeDrawOamBackFunc)(void *pRend, void *pSurface, void *pCellData, void *pOam, MtxFx32 *pMtx);
    void (*pAfterDrawOamBackFunc)(void *pRend, void *pSurface, void *pCellData, void *pOam, MtxFx32 *pMtx);
};
typedef struct NNSG2dRendererInstance {
    NNSG2dRndCoreInstance rendererCore;
    NNSG2dRenderSurface *pTargetSurfaceList;
    NNSG2dRenderSurface *pCurrentTargetSurface;
    void *currentCell;
    u32 flag;
    fx32 spriteZoffsetStep;
    u32 overwriteEnableFlag;
    u16 overwritePriority;
    u16 overwritePlttNo;
    int overwriteObjMode;
    int overwriteMosaicFlag;
    u16 overwritePlttNoOffset;
} NNSG2dRendererInstance;
struct RendererBss {
    u16 currentMtxCachePos_;
    u16 groupID_;
    BOOL bDonotUseSRTransform;
    NNSG2dRendererInstance *pCurrentInstance_;
    s32 stackPos_;
    fx32 fxZStack_[32];
    MCMMtxState mtxStateStack_[32];
    MtxFx32 mtxStack_[32];
    MtxFx32 mtxStackFor2DHW_[32];
};
struct RendererData {
    u16 firstSRTransformedMtxIdx_;
    u32 currenVramTransferHandle_;
    MtxFx32 mtxI_;
};
struct CellDrawState {
    u8 pad_00[0x30];
    u32 cullResult;
};
extern void func_020d4858(u32 data, void *destp, u32 size);
extern void func_020b9330(void);
extern struct RendererBss data_021d94f8;
extern struct RendererData data_021109fc;
extern NNSG2dRndCore2DMtxCache data_021d9c88[32];
extern MCMMtxState data_021d9588[32];
static inline void MI_CpuFillFast(void *dest, u32 data, u32 size) {
    func_020d4858(data, dest, size);
}
static inline void NNS_G2dInitRndCore2DMtxCache(NNSG2dRndCore2DMtxCache *pMtxCache) {
    MI_CpuFillFast(pMtxCache->affineIndex, 0xFFFFFFFF, sizeof(pMtxCache->affineIndex));
}
static inline u16 NNSi_G2dGetMtxStackPos(void) {
    return (u16) (data_021d94f8.stackPos_);
}
static inline const MtxFx32 *NNSi_G2dGetCurrentMtxFor2DHW(void) {
    if (data_021d94f8.bDonotUseSRTransform) {
        data_021109fc.mtxI_._20 = data_021d94f8.mtxStack_[data_021d94f8.stackPos_]._20;
        data_021109fc.mtxI_._21 = data_021d94f8.mtxStack_[data_021d94f8.stackPos_]._21;
        return &data_021109fc.mtxI_;
    } else {
        return &data_021d94f8.mtxStackFor2DHW_[data_021d94f8.stackPos_];
    }
}
static inline void NNSi_G2dGetMtxRS(const MtxFx32 *m, MtxFx22 *pRet) {
    pRet->_00 = m->_00;
    pRet->_01 = m->_01;
    pRet->_10 = m->_10;
    pRet->_11 = m->_11;
}
static inline NNSG2dRndCore2DMtxCache *NNSi_RMCGetMtxCacheByIdx(u16 idx) {
    return &data_021d9c88[idx];
}
static inline u16 NNSi_RMCUseNewMtxCache(void) {
    const u16 ret = data_021d94f8.currentMtxCachePos_;

    if (data_021d94f8.currentMtxCachePos_ < 32 - 1) {
        data_021d94f8.currentMtxCachePos_++;
    }

    return ret;
}
static inline u16 GetMtxStateMtxCacheIdx_(const MCMMtxState *pMtxState) {
    return pMtxState->mtxCacheIdx;
}
static inline void SetMtxStateMtxCacheIdx_(MCMMtxState *pMtxState, u16 cacheIdx) {
    pMtxState->mtxCacheIdx = cacheIdx;
}
static inline u16 GetMtxStateGroupID_(const MCMMtxState *pMtxState) {
    return pMtxState->groupID;
}
static inline MCMMtxState *GetCuurentMtxState_(void) {
    return &data_021d9588[NNSi_G2dGetMtxStackPos()];
}
static inline void SetParentMtxStateLoaded_(u16 mtxCacheIdx, u16 groupID) {
    int i;
    const u16 currntStackPos = NNSi_G2dGetMtxStackPos();

    for (i = currntStackPos; i >= 0; i--) {
        if (GetMtxStateGroupID_(&data_021d9588[i]) != groupID) {
            break;
        } else {
            data_021d9588[i].stateType = 3;
            SetMtxStateMtxCacheIdx_(&data_021d9588[i], mtxCacheIdx);
        }
    }
}
static inline NNSG2dRndCore2DMtxCache *NNSi_G2dMCMGetCurrentMtxCache(void) {
    return NNSi_RMCGetMtxCacheByIdx(GetMtxStateMtxCacheIdx_(GetCuurentMtxState_()));
}
static inline BOOL NNSi_G2dMCMShouldCurrentMtxBeLoadedToMtxCache(void) {
    MCMMtxState *pCurrMtxState = GetCuurentMtxState_();

    return (BOOL) (pCurrMtxState->stateType == 1 || pCurrMtxState->stateType == 2);
}
void func_020b9330(void) {
    if (NNSi_G2dMCMShouldCurrentMtxBeLoadedToMtxCache()) {
        MCMMtxState *pCurrentState = GetCuurentMtxState_();
        const u16 mtxCacheIdx      = NNSi_RMCUseNewMtxCache();
        const u16 groupID          = GetMtxStateGroupID_(pCurrentState);

        SetMtxStateMtxCacheIdx_(pCurrentState, mtxCacheIdx);

        {
            NNS_G2dInitRndCore2DMtxCache(NNSi_RMCGetMtxCacheByIdx(mtxCacheIdx));

            NNSi_G2dGetMtxRS(NNSi_G2dGetCurrentMtxFor2DHW(), &NNSi_G2dMCMGetCurrentMtxCache()->m22);
        }

        SetParentMtxStateLoaded_(mtxCacheIdx, groupID);
    }
}
