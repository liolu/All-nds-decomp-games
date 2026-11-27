/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G2dSetMCDataToMCInstanceImpl from https://github.com/Project-Holon/aletheia
 * src/game/arm9/nns_g2d_multi_cell_animation.c (license: none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef s32 fx32;
typedef int BOOL;
typedef struct AnimFrameData {
    void *pContent;
    u16 frames;
    u16 pad;
} AnimFrameData;
typedef struct AnimSequenceData {
    u16 numFrames;
    u16 loopStartFrameIdx;
    u32 animType;
    u32 playMode;
    AnimFrameData *pAnmFrameArray;
} AnimSequenceData;
struct AnimBank {
    u16 numSequences;
    u16 numTotalFrames;
    AnimSequenceData *pSequences;
    AnimFrameData *pFrames;
    u8 *pPool;
    u32 pStringBank;
    u8 *pSubBank;
};
typedef void (*AnimCallBackFunc)(void *param, u32 frame);
typedef struct AnimCallBack {
    u32 type;
    void *param;
    AnimCallBackFunc pFunc;
    u16 frameIdx;
    u16 pad;
} AnimCallBack;
typedef struct AnimCtrl {
    const AnimFrameData *pCurrent;
    const AnimFrameData *pActiveCurrent;
    BOOL bReverse;
    BOOL bActive;
    fx32 currentTime;
    fx32 speed;
    u32 overriddenPlayMode;
    const AnimSequenceData *pAnimSequence;
    AnimCallBack callBack;
} AnimCtrl;
typedef struct NNSG2dSRTControl {
    u32 mode;
    fx32 scaleX;
    fx32 scaleY;
    s16 transX;
    s16 transY;
    u16 rotZ;
    u16 dirtyFlags;
} SRTControl;
typedef struct CellVramTransferData {
    u32 szByteMax;
    u8 *pTransferDataArray;
} CellVramTransferData;
typedef struct CellDataBank {
    u16 numCells;
    u16 bankAttr;
    void *pCells;
    u32 reserved08;
    CellVramTransferData *pVramTransferData;
    u32 reserved10;
    u8 *pUserExt;
} CellDataBank;
typedef struct CellAnim {
    AnimCtrl animCtrl;
    const void *pCurrentCell;
    CellDataBank *pCellDataBank;
    s32 transferStateHandle;
    SRTControl srtCtrl;
    u8 pad50[8];
} CellAnim;
typedef struct MCCellAnimation {
    CellAnim cellAnim;
    BOOL bInited;
} MCCellAnimation;
typedef struct Node {
    void *pContent;
    u32 type;
    BOOL bVisible;
    SRTControl srtCtrl;
    u8 pad20[8];
} Node;
typedef struct HierData {
    u16 animSequenceIdx;
    s16 posX;
    s16 posY;
    u16 nodeAttr;
} HierData;
typedef struct MultiCellData {
    u16 numNodes;
    u16 numCellAnim;
    HierData *pHierDataArray;
} MultiCellData;
typedef struct MCInstance {
    const MultiCellData *pCurrentMultiCell;
    const struct AnimBank *pAnimDataBank;
    u32 mcType;
    void *pCellAnimInstasnces;
} MCInstance;
extern const AnimSequenceData *func_020b6e80(const struct AnimBank *bank, u32 idx);
extern s32 func_020b788c(CellAnim *anim);
extern void func_020b8954(SRTControl *obj, s16 x, s16 y);
extern void func_020b8bc4(CellAnim *pCellAnim, const AnimSequenceData *pAnimSeq);
extern void func_020b8bdc(CellAnim *pCellAnim, fx32 frames);
extern void func_020b8c1c(MCInstance *pMCInst, const MultiCellData *pMcData, u16 mcTotalFrame);
void func_020b8bc4(CellAnim *pCellAnim, const AnimSequenceData *pAnimSeq);
void func_020b8bdc(CellAnim *pCellAnim, fx32 frames);
static inline u32 CalcTotal(const AnimSequenceData *pAnimSeq) {
    u32 i;
    u32 total = 0;

    for (i = 0; i < pAnimSeq->numFrames; i++) {
        total += pAnimSeq->pAnmFrameArray[i].frames;
    }
    return total;
}
static inline u32 GetPlayMode(const HierData *pNode) {
    const u32 mode = (u32) ((pNode->nodeAttr >> 0) & 0xF);
    return mode;
}
static inline u16 GetCellAnimIdx(const HierData *pNodeData) {
    return (u16) ((0xFF00 & pNodeData->nodeAttr) >> 8);
}
static inline void SetNodeDataToCellAnim_(CellAnim *pCellAnim, const HierData *pNodeData, const struct AnimBank *pAnimBank,
                                          u16 mcTotalFrame) {
    const AnimSequenceData *pAnimSeq = 0;

    pAnimSeq = func_020b6e80(pAnimBank, pNodeData->animSequenceIdx);

    func_020b8bc4(pCellAnim, pAnimSeq);
    pCellAnim->animCtrl.bActive = 1;

    if (GetPlayMode(pNodeData) == 1) {
        const u32 animSeqLength = CalcTotal(pAnimSeq);

        if (func_020b788c((CellAnim *) (&pCellAnim->animCtrl))) {
            const u32 frameToMove = (mcTotalFrame % animSeqLength);
            func_020b8bdc(pCellAnim, (fx32) (frameToMove << 12));
        } else {
            const u32 frameToMove = (mcTotalFrame >= animSeqLength) ? animSeqLength : mcTotalFrame;
            func_020b8bdc(pCellAnim, (fx32) (frameToMove << 12));
        }
    }
}
void func_020b8c1c(MCInstance *pMCInst, const MultiCellData *pMcData, u16 mcTotalFrame) {
    u16 i;

    pMCInst->pCurrentMultiCell = pMcData;

    if (pMCInst->mcType == 1) {
        MCCellAnimation *pCellAnimArray = (MCCellAnimation *) pMCInst->pCellAnimInstasnces;

        for (i = 0; i < pMcData->numCellAnim; i++) {
            pCellAnimArray[i].bInited = 0;
        }

        for (i = 0; i < pMcData->numNodes; i++) {
            const HierData *pNodeData = &pMcData->pHierDataArray[i];
            const u16 cellAnimIdx     = GetCellAnimIdx(pNodeData);

            if (!pCellAnimArray[cellAnimIdx].bInited) {
                CellAnim *pCellAnim = &pCellAnimArray[cellAnimIdx].cellAnim;

                SetNodeDataToCellAnim_(pCellAnim, pNodeData, pMCInst->pAnimDataBank, mcTotalFrame);

                pCellAnimArray[cellAnimIdx].bInited = 1;
            }
        }
    } else {
        Node *pNodeArray = (Node *) (pMCInst->pCellAnimInstasnces);

        for (i = 0; i < pMcData->numNodes; i++) {
            const HierData *pNodeData = &pMcData->pHierDataArray[i];
            CellAnim *pCellAnim       = (CellAnim *) pNodeArray[i].pContent;

            SetNodeDataToCellAnim_(pCellAnim, pNodeData, pMCInst->pAnimDataBank, mcTotalFrame);

            pNodeArray[i].bVisible = 1;
            func_020b8954(&pNodeArray[i].srtCtrl, pNodeData->posX, pNodeData->posY);
        }
    }
}
