/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dInitCellAnimationVramTransfered from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_CellAnimation.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSG2dSVec2 {
    s16 x;
    s16 y;
} NNSG2dSVec2;
typedef struct NNSG2dFVec2 {
    fx32 x;
    fx32 y;
} NNSG2dFVec2;
typedef union {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
        fx32 _20, _21;
    };
    fx32 m[3][2];
    fx32 a[6];
} MtxFx32;
typedef enum {
    NNS_G2D_SRTCONTROLTYPE_INVALID,
    NNS_G2D_SRTCONTROLTYPE_SRT,
    NNS_G2D_SRTCONTROLTYPE_MTX2D,
    NNS_G2D_SRTCONTROLTYPE_MTX3D,
    NNS_G2D_SRTCONTROLTYPE_MAX
} NNSG2dSRTControlType;
typedef union {
    struct {
        NNSG2dFVec2 scale;
        NNSG2dSVec2 trans;
        u16 rotZ;
        u16 SRT_EnableFlag;
    };
    MtxFx32 mtx;
} NNSG2dSRTData;
typedef struct {
    NNSG2dSRTControlType type;
    NNSG2dSRTData srtData;
} NNSG2dSRTControl;
typedef enum NNSG2dAnimationPlayMode {
    NNS_G2D_ANIMATIONPLAYMODE_INVALID = 0x0,
    NNS_G2D_ANIMATIONPLAYMODE_FORWARD,
    NNS_G2D_ANIMATIONPLAYMODE_FORWARD_LOOP,
    NNS_G2D_ANIMATIONPLAYMODE_REVERSE,
    NNS_G2D_ANIMATIONPLAYMODE_REVERSE_LOOP,
    NNS_G2D_ANIMATIONPLAYMODE_MAX
} NNSG2dAnimationPlayMode;
typedef struct NNSG2dAnimFrameData {
    void *pContent;
    u16 frames;
    u16 pad16;
} NNSG2dAnimFrameData;
typedef struct NNSG2dAnimSequenceData {
    u16 numFrames;
    u16 loopStartFrameIdx;
    u32 animType;
    NNSG2dAnimationPlayMode playMode;
    NNSG2dAnimFrameData *pAnmFrameArray;
} NNSG2dAnimSequenceData;
typedef enum NNSG2dCharacterDataMappingType {
    NNS_G2D_CHARACTERMAPPING_1D_32,
    NNS_G2D_CHARACTERMAPPING_1D_64,
    NNS_G2D_CHARACTERMAPPING_1D_128,
    NNS_G2D_CHARACTERMAPPING_1D_256,
    NNS_G2D_CHARACTERMAPPING_2D,
    NNS_G2D_CHARACTERMAPPING_MAX
} NNSG2dCharacterDataMappingType;
typedef struct NNSG2dCellVramTransferData {
    u32 srcDataOffset;
    u32 szByte;
} NNSG2dCellVramTransferData;
typedef struct NNSG2dVramTransferData {
    u32 szByteMax;
    NNSG2dCellVramTransferData *pCellTransferDataArray;
} NNSG2dVramTransferData;
typedef struct NNSG2dCellOAMAttrData {
    u16 attr0;
    u16 attr1;
    u16 attr2;
} NNSG2dCellOAMAttrData;
typedef struct NNSG2dCellData {
    u16 numOAMAttrs;
    u16 cellAttr;
    NNSG2dCellOAMAttrData *pOamAttrArray;
} NNSG2dCellData;
typedef struct NNSG2dCellDataBank {
    u16 numCells;
    u16 cellBankAttr;
    NNSG2dCellData *pCellDataArrayHead;
    NNSG2dCharacterDataMappingType mappingMode;
    NNSG2dVramTransferData *pVramTransferData;
    void *pStringBank;
    void *pExtendedData;
} NNSG2dCellDataBank;
typedef NNSG2dAnimFrameData NNSG2dAnimFrame;
typedef NNSG2dAnimSequenceData NNSG2dAnimSequence;
typedef void (*NNSG2dAnmCallBackPtr)(u32 data, fx32 currentFrame);
typedef enum NNSG2dAnmCallbackType {
    NNS_G2D_ANMCALLBACKTYPE_NONE = 0,
    NNS_G2D_ANMCALLBACKTYPE_LAST_FRM,
    NNS_G2D_ANMCALLBACKTYPE_SPEC_FRM,
    NNS_G2D_ANMCALLBACKTYPE_EVER_FRM,
    AnmCallbackType_MAX
} NNSG2dAnmCallbackType;
typedef struct NNSG2dCallBackFunctor {
    NNSG2dAnmCallbackType type;
    u32 param;
    NNSG2dAnmCallBackPtr pFunc;
    u16 frameIdx;
    u16 pad16_;
} NNSG2dCallBackFunctor, NNSG2dAnimCallBackFunctor;
typedef struct NNSG2dAnimController {
    const NNSG2dAnimFrame *pCurrent;
    const NNSG2dAnimFrame *pActiveCurrent;
    BOOL bReverse;
    BOOL bActive;
    fx32 currentTime;
    fx32 speed;
    NNSG2dAnimationPlayMode overriddenPlayMode;
    const NNSG2dAnimSequence *pAnimSequence;
    NNSG2dAnimCallBackFunctor callbackFunctor;
} NNSG2dAnimController;
extern void func_020b77c4(NNSG2dAnimController *pAnimCtrl);
extern void func_020bac94(u32 handle, u32 dstAddr3D, u32 dstAddr2DMain, u32 dstAddr2DSub, u32 szDst, const void *pSrcNCGR,
                          const void *pSrcNCBR, u32 szSrcData);
typedef struct NNSG2dCellAnimation {
    NNSG2dAnimController animCtrl;
    const NNSG2dCellData *pCurrentCell;
    const NNSG2dCellDataBank *pCellDataBank;
    u32 cellTransferStateHandle;
    NNSG2dSRTControl srtCtrl;
} NNSG2dCellAnimation;
extern void func_020b8b40(NNSG2dCellAnimation *pCellAnim, const NNSG2dAnimSequence *pAnimSeq,
                          const NNSG2dCellDataBank *pCellBank, u32 vramSettingHandle, u32 dstAddr3D, u32 dstAddr2DMain,
                          u32 dstAddr2DSub, const void *pSrcNCGR, const void *pSrcNCBR, u32 szSrcData);
extern void func_020b8bc4(NNSG2dCellAnimation *pCellAnim, const NNSG2dAnimSequence *pAnimSeq);
inline void NNSi_G2dSetCellAnimVramTransferHandle(NNSG2dCellAnimation *pCellAnim, u32 handle) {
    ((void) 0);
    ((void) 0);

    pCellAnim->cellTransferStateHandle = handle;
}
extern void func_020b89b8(NNSG2dSRTControl *pCtrl, NNSG2dSRTControlType type);
static inline void InitCellAnimationImpl_(NNSG2dCellAnimation *pCellAnim, const NNSG2dAnimSequence *pAnimSeq,
                                          const NNSG2dCellDataBank *pCellDataBank, u32 cellTransferStateHandle) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    pCellAnim->pCellDataBank           = pCellDataBank;
    pCellAnim->cellTransferStateHandle = cellTransferStateHandle;

    func_020b89b8(&pCellAnim->srtCtrl, NNS_G2D_SRTCONTROLTYPE_SRT);

    func_020b77c4(&pCellAnim->animCtrl);
    func_020b8bc4(pCellAnim, pAnimSeq);
}
void func_020b8b40(NNSG2dCellAnimation *pCellAnim, const NNSG2dAnimSequence *pAnimSeq, const NNSG2dCellDataBank *pCellBank,
                   u32 vramStateHandle, u32 dstAddr3D, u32 dstAddr2DMain, u32 dstAddr2DSub, const void *pSrcNCGR,
                   const void *pSrcNCBR, u32 szSrcData) {
    ((void) 0);

    {
        const NNSG2dVramTransferData *pVramData = (const NNSG2dVramTransferData *) pCellBank->pVramTransferData;

        func_020bac94(vramStateHandle, dstAddr3D, dstAddr2DMain, dstAddr2DSub, pVramData->szByteMax, pSrcNCGR, pSrcNCBR,
                      szSrcData);

        NNSi_G2dSetCellAnimVramTransferHandle(pCellAnim, vramStateHandle);
    }

    InitCellAnimationImpl_(pCellAnim, pAnimSeq, pCellBank, vramStateHandle);
}
void func_020b8bc4(NNSG2dCellAnimation *pCellAnim, const NNSG2dAnimSequence *pAnimSeq);
