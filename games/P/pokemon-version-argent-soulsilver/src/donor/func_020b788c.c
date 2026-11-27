/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dIsCellAnimationBoundingBox from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_cell_animation.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
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
extern s32 func_020b788c(CellAnim *anim);
s32 func_020b788c(CellAnim *anim) {
    u32 attr = anim->animCtrl.overriddenPlayMode;

    if (attr == 0) {
        attr = anim->animCtrl.pAnimSequence->playMode;
    }

    if (attr == 2 || attr == 4) {
        return 1;
    }

    return 0;
}
