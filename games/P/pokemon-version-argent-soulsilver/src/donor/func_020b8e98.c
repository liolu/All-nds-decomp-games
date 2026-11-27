/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dSetAnimSequenceToMCAnimation from https://github.com/Project-Holon/aletheia
 * src/game/arm9/nns_g2d_multi_cell_animation.c (license: none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef s32 fx32;
typedef int BOOL;
typedef u32 uptr;
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
typedef struct NodeRec {
    u16 index;
    u16 rotZ;
    union {
        fx32 scaleX;
        struct {
            s16 transOnlyX;
            s16 transOnlyY;
        };
    };
    fx32 scaleY;
    s16 transX;
    s16 transY;
} NodeRec;
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
typedef struct MultiCellBank {
    u16 numMultiCell;
    u16 pad02;
    MultiCellData *pArray;
    u32 nodeBase;
    u32 reserved0C;
    u8 *pAnimBank;
} MultiCellBank;
typedef struct MCInstance {
    const MultiCellData *pCurrentMultiCell;
    const struct AnimBank *pAnimDataBank;
    u32 mcType;
    void *pCellAnimInstasnces;
} MCInstance;
typedef struct MultiCellAnim {
    AnimCtrl animCtrl;
    u16 totalFrames;
    u8 pad32[2];
    MCInstance mc;
    MultiCellBank *pMultiCellBank;
    SRTControl srtCtrl;
} MultiCellAnim;
extern MultiCellData *func_020b7090(MultiCellBank *bank, u32 idx);
extern struct NodeRec *func_020b75cc(AnimCtrl *anim);
extern void func_020b787c(CellAnim *anim, void *bank);
extern void func_020b8954(SRTControl *obj, s16 x, s16 y);
extern void func_020b8978(SRTControl *obj, u16 rotZ);
extern void func_020b8998(SRTControl *obj, u32 scaleX, u32 scaleY);
extern void func_020b89b8(SRTControl *pSrtCtrl, u32 mode);
extern void func_020b8c1c(MCInstance *pMCInst, const MultiCellData *pMcData, u16 mcTotalFrame);
extern void func_020b8e98(MultiCellAnim *pMCAnim, const AnimSequenceData *pAnimSeq);
void func_020b8c1c(MCInstance *pMCInst, const MultiCellData *pMcData, u16 mcTotalFrame);
void func_020b8e98(MultiCellAnim *pMCAnim, const AnimSequenceData *pAnimSeq) {
    NodeRec *pNodeRec;
    u32 kind;
    uptr pMultiCellData;

    func_020b787c((CellAnim *) (&pMCAnim->animCtrl), (void *) pAnimSeq);
    pMCAnim->totalFrames = 0;

    if (pMCAnim->animCtrl.pActiveCurrent->frames == 0) {
        return;
    }

    pNodeRec       = func_020b75cc(&pMCAnim->animCtrl);
    pMultiCellData = (uptr) func_020b7090(pMCAnim->pMultiCellBank, pNodeRec->index);
    kind           = pMCAnim->animCtrl.pAnimSequence->animType & 0xff;

    func_020b89b8((SRTControl *) (&pMCAnim->srtCtrl), 1);

    if (kind == 0) {
        goto done;
    }

    if (kind == 2) {
        func_020b8954(&pMCAnim->srtCtrl, pNodeRec->transOnlyX, pNodeRec->transOnlyY);
    } else {
        func_020b8998((SRTControl *) (&pMCAnim->srtCtrl), pNodeRec->scaleX, pNodeRec->scaleY);
        func_020b8978((SRTControl *) (&pMCAnim->srtCtrl), pNodeRec->rotZ);
        func_020b8954(&pMCAnim->srtCtrl, pNodeRec->transX, pNodeRec->transY);
    }

done:
    func_020b8c1c(&pMCAnim->mc, (const MultiCellData *) pMultiCellData, pMCAnim->totalFrames);
}
