/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G2dTickMCInstance from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_multi_cell_animation.c (license:
 * none (MIT = tooling only)), reused by tools/donor_match.py */
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
extern void func_020b8bdc(CellAnim *pCellAnim, fx32 frames);
extern void func_020b8fa4(MCInstance *pMCInst, fx32 frames);
void func_020b8bdc(CellAnim *pCellAnim, fx32 frames);
void func_020b8fa4(MCInstance *pMCInst, fx32 frames) {
    if (pMCInst->mcType == 1) {
        u16 i;
        MCCellAnimation *cells = (MCCellAnimation *) pMCInst->pCellAnimInstasnces;
        for (i = 0; i < pMCInst->pCurrentMultiCell->numCellAnim; i++) {
            func_020b8bdc(&cells[i].cellAnim, frames);
        }
    } else {
        u16 i;
        Node *nodes = (Node *) pMCInst->pCellAnimInstasnces;
        for (i = 0; i < pMCInst->pCurrentMultiCell->numNodes; i++) {
            func_020b8bdc((CellAnim *) nodes[i].pContent, frames);
        }
    }
}
