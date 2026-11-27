/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dInitMCAnimation from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSystem/src/g2d_mc_animation.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
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
typedef struct NNSG2dAnimBankData {
    u16 numSequences;
    u16 numTotalFrames;
    NNSG2dAnimSequenceData *pSequenceArrayHead;
    NNSG2dAnimFrameData *pFrameArrayHead;
    void *pAnimContents;
    void *pStringBank;
    void *pExtendedData;
} NNSG2dAnimBankData;
typedef enum NNSG2dCharacterDataMapingType {
    NNS_G2D_CHARACTERMAPING_1D_32,
    NNS_G2D_CHARACTERMAPING_1D_64,
    NNS_G2D_CHARACTERMAPING_1D_128,
    NNS_G2D_CHARACTERMAPING_1D_256,
    NNS_G2D_CHARACTERMAPING_2D,
    NNS_G2D_CHARACTERMAPING_MAX
} NNSG2dCharacterDataMapingType;
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
typedef struct NNSG2dCellVramTransferData {
    u32 srcDataOffset;
    u32 szByte;

} NNSG2dCellVramTransferData;
typedef struct NNSG2dVramTransferData {
    u32 szByteMax;
    NNSG2dCellVramTransferData *pCellTransferDataArray;

} NNSG2dVramTransferData;
typedef struct NNSG2dCellDataBank {
    u16 numCells;
    u16 cellBankAttr;
    NNSG2dCellData *pCellDataArrayHead;
    NNSG2dCharacterDataMapingType mappingMode;
    NNSG2dVramTransferData *pVramTransferData;
    void *pStringBank;
    void *pExtendedData;
} NNSG2dCellDataBank;
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
typedef struct NNSG2dMultiCellDataBank {
    u16 numMultiCellData;
    u16 pad16;
    NNSG2dMultiCellData *pMultiCellDataArray;
    NNSG2dMultiCellHierarchyData *pHierarchyDataArray;
    void *pStringBank;
    void *pExtendedData;
} NNSG2dMultiCellDataBank;
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
typedef NNSG2dAnimBankData NNSG2dCellAnimBankData;
typedef struct NNSG2dCellAnimation {
    NNSG2dAnimController animCtrl;
    const NNSG2dCellData *pCurrentCell;
    const NNSG2dCellDataBank *pCellDataBank;
    u32 cellTransferStateHandle;
    NNSG2dSRTControl srtCtrl;
} NNSG2dCellAnimation;
extern void func_020b8b04(NNSG2dCellAnimation *pCellAnim, const NNSG2dAnimSequence *pAnimSeq,
                          const NNSG2dCellDataBank *pCellDataBank);
typedef enum NNSG2dNodeType {
    NNS_G2D_NODETYPE_INVALID = 0,
    NNS_G2D_NODETYPE_CELL,
    NNS_G2D_NODETYPE_MULTICELL,
    NNS_G2D_NODETYPE_MAX

} NNSG2dNodeType;
typedef struct NNSG2dNode {
    void *pContent;
    NNSG2dNodeType type;
    BOOL bVisible;
    NNSG2dSRTControl srtCtrl;

} NNSG2dNode;
typedef enum {
    NNS_G2D_MCTYPE_DONOT_SHARE_CELLANIM,
    NNS_G2D_MCTYPE_SHARE_CELLANIM
} NNSG2dMCType;
typedef struct NNSG2dMultiCellInstance {
    const NNSG2dMultiCellData *pCurrentMultiCell;
    const NNSG2dCellAnimBankData *pAnimDataBank;
    NNSG2dMCType mcType;
    void *pCellAnimInstasnces;
} NNSG2dMultiCellInstance;
typedef struct NNSG2dMultiCellAnimation {
    NNSG2dAnimController animCtrl;
    u16 totalVideoFrame;
    u16 pad16;
    NNSG2dMultiCellInstance multiCellInstance;
    const NNSG2dMultiCellDataBank *pMultiCellDataBank;
    NNSG2dSRTControl srtCtrl;
} NNSG2dMultiCellAnimation;
extern void func_020b91d8(NNSG2dMultiCellAnimation *pMultiCellAnim, NNSG2dNode *pNodeArray, NNSG2dCellAnimation *pCellAnim,
                          u16 numNode, const NNSG2dCellAnimBankData *pAnimBank, const NNSG2dCellDataBank *pCellDataBank,
                          const NNSG2dMultiCellDataBank *pMultiCellDataBank);
extern const NNSG2dAnimSequenceData *func_020b6e80(const NNSG2dAnimBankData *pAnimBank, u16 idx);
extern void func_020b77c4(NNSG2dAnimController *pAnimCtrl);
extern void func_020b89b8(NNSG2dSRTControl *pSrtCtrl, NNSG2dSRTControlType type);
extern void func_020b89f0(NNSG2dNode *pNode, NNSG2dNodeType type);
#pragma force_active on
void func_020b91d8(NNSG2dMultiCellAnimation *pMultiCellAnim, NNSG2dNode *pNodeArray, NNSG2dCellAnimation *pCellAnim,
                   u16 numNode, const NNSG2dCellAnimBankData *pAnimBank, const NNSG2dCellDataBank *pCellDataBank,
                   const NNSG2dMultiCellDataBank *pMultiCellDataBank) {
    u16 i                                                 = 0;
    pMultiCellAnim->multiCellInstance.mcType              = NNS_G2D_MCTYPE_DONOT_SHARE_CELLANIM;
    pMultiCellAnim->multiCellInstance.pCurrentMultiCell   = ((void *) 0);
    pMultiCellAnim->multiCellInstance.pAnimDataBank       = pAnimBank;
    pMultiCellAnim->multiCellInstance.pCellAnimInstasnces = pNodeArray;
    for (; i < numNode; i++) {
        func_020b89f0(&pNodeArray[i], NNS_G2D_NODETYPE_CELL);
        pNodeArray[i].pContent = &pCellAnim[i];
        func_020b8b04(&pCellAnim[i], func_020b6e80(pAnimBank, 0), pCellDataBank);
    }
    func_020b77c4(&pMultiCellAnim->animCtrl);
    pMultiCellAnim->pMultiCellDataBank = pMultiCellDataBank;
    func_020b89b8(&pMultiCellAnim->srtCtrl, NNS_G2D_SRTCONTROLTYPE_SRT);
    pMultiCellAnim->totalVideoFrame = 0;
}
