/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G2dRendererDrawMultiCellTransformed from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_renderer.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
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
extern u32 func_020bbf5c(const NNSG2dRndCoreInstance *pRnd);
extern u32 func_020bbf70(const NNSG2dRndCoreInstance *pRnd);
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
typedef struct NNSG2dMultiCellHierarchyData {
    u16 animSequenceIdx;
    s16 posX;
    s16 posY;
    u16 nodeAttr;
} NNSG2dMultiCellHierarchyData;
typedef struct NNSG2dMultiCellData {
    u16 numNodes;
    u16 numCellAnim;
    NNSG2dMultiCellHierarchyData *pHierDataArray;
} NNSG2dMultiCellData;
typedef struct NNSG2dMultiCellInstance {
    const NNSG2dMultiCellData *pCurrentMultiCell;
    const void *pAnimDataBank;
    u32 mcType;
    void *pCellAnimInstasnces;
} NNSG2dMultiCellInstance;
struct MultiCellDrawCmd {
    u8 pad_00[0x34];
    NNSG2dMultiCellInstance multiCell;
    u8 pad_44[8];
    fx32 scaleX;
    fx32 scaleY;
    s16 transX;
    s16 transY;
    u16 angle;
    u16 flags;
};
extern void func_020ba1b0(const NNSG2dMultiCellInstance *pMC);
extern void func_020ba484(struct MultiCellDrawCmd *c);
extern void func_020ba560(void);
extern void func_020ba784(int n);
extern void func_020ba7d4(fx32 x, fx32 y, fx32 z);
extern void func_020ba8d0(fx32 x, fx32 y, fx32 z);
extern void func_020baa24(fx32 sin, fx32 cos);
extern struct RendererBss data_021d94f8;
extern s16 data_02109500[];
void func_020ba1b0(const NNSG2dMultiCellInstance *pMC);
void func_020ba484(struct MultiCellDrawCmd *c) {
    if (c->flags == 0) {
        func_020ba1b0(&c->multiCell);
        return;
    }

    func_020ba560();

    if ((c->flags & 8) != 0) {
        int x, y;

        y = c->transY;
        x = c->transX;

        if (func_020bbf5c((struct NNSG2dRndCoreInstance *) data_021d94f8.pCurrentInstance_) != 0) {
            x = -x;
        }
        if (func_020bbf70((struct NNSG2dRndCoreInstance *) data_021d94f8.pCurrentInstance_) != 0) {
            y = -y;
        }

        func_020ba7d4(x << 12, y << 12, 0);
    }

    if ((c->flags & 4) != 0) {
        int i = c->angle >> 4;

        func_020baa24(data_02109500[i * 2], data_02109500[i * 2 + 1]);
    }

    if ((c->flags & 2) != 0) {
        func_020ba8d0(c->scaleX, c->scaleY, 0x1000);
    }

    func_020ba1b0(&c->multiCell);
    func_020ba784(1);
}
void func_020ba560(void);
void func_020ba784(int n);
void func_020ba7d4(fx32 x, fx32 y, fx32 z);
void func_020ba8d0(fx32 x, fx32 y, fx32 z);
void func_020baa24(fx32 sin, fx32 cos);
