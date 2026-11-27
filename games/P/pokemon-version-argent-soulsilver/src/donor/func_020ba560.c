/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dPushMtx from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_renderer.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
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
typedef union {
    u32 attr01;
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
        u32 _2 : 16;
    };
    struct {
        u16 attr0;
        u16 attr1;
        u16 attr2;
        u16 attr3;
    };
} OamAttr;
struct RndOamCell {
    u8 pad_00[0x38];
    OamAttr oam;
};
extern void func_020ba560(void);
extern struct RendererBss data_021d94f8;
extern MtxFx32 data_021d9688[];
extern MCMMtxState data_021d9588[];
extern fx32 data_021d9508[];
extern MtxFx32 data_021d9988[];
static inline void CopySlot(int next) {
    if (data_021d94f8.bDonotUseSRTransform != 0) {
        int cur                 = ((volatile struct RendererBss *) &data_021d94f8)->stackPos_;
        data_021d9688[next]._20 = data_021d9688[cur]._20;
        data_021d9688[next]._21 = data_021d9688[cur]._21;
        data_021d9508[next]     = data_021d9508[cur];
    } else {
        int cur             = ((volatile struct RendererBss *) &data_021d94f8)->stackPos_;
        data_021d9688[next] = data_021d9688[cur];
        data_021d9988[next] = data_021d9988[cur];
        data_021d9508[next] = data_021d9508[cur];
    }
    data_021d94f8.stackPos_ = next;
}
void func_020ba560(void) {
    if ((data_021d94f8.pCurrentInstance_->flag & 1) == 0) {
        int cur  = data_021d94f8.stackPos_;
        u16 old  = cur;
        int next = cur + 1;
        int r    = !(next >= 0x20);
        u16 nw;

        if (r != 0) {
            CopySlot(next);
        }

        nw                = data_021d94f8.stackPos_;
        data_021d9588[nw] = data_021d9588[old];
        if (data_021d9588[old].stateType == 1) {
            data_021d9588[nw].stateType = 2;
        } else {
            data_021d9588[nw].stateType = data_021d9588[old].stateType;
        }
    } else {
        int next = data_021d94f8.stackPos_ + 1;
        int r    = !(next >= 0x20);
        if (r == 0) {
            return;
        }
        CopySlot(next);
    }
}
