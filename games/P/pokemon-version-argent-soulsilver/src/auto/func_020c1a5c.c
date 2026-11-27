/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c1a5c from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g3d_sbc.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned long size_t;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
typedef float f32;
typedef volatile f32 vf32;
typedef int BOOL;
typedef u32 uptr;
typedef s32 sptr;
typedef struct NNSG3dJntAnmResult {
    u32 flag;
    fx32 scale[3];
    fx32 scaleEx0[3];
    fx32 scaleEx1[3];
    fx32 rot[3][3];
    fx32 trans[3];
} NNSG3dJntAnmResult;
struct NNSG3dAnmObj;
typedef void (*NNSG3dAnmObjFunc)(void *result, const struct NNSG3dAnmObj *anmObj, u32 dataIdx);
typedef struct NNSG3dAnmFmtHeader {
    u8 category0;
    u8 dummy_;
    u16 category1;
} NNSG3dAnmFmtHeader;
typedef struct NNSG3dAnmObj {
    fx32 frame;
    fx32 ratio;
    const void *resAnm;
    NNSG3dAnmObjFunc funcAnm;
    struct NNSG3dAnmObj *next;
    const void *resTex;
    u8 priority;
    u8 numMapData;
    u16 mapData[1];
} NNSG3dAnmObj;
typedef struct VecFx32 {
    fx32 x, y, z;
} VecFx32;
typedef struct VecFx16 {
    fx16 x, y, z;
} VecFx16;
typedef union MtxFx22 {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
    };
    fx32 m[2][2];
    fx32 a[4];
} MtxFx22;
typedef union MtxFx33 {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
    };
    fx32 m[3][3];
    fx32 a[9];
} MtxFx33;
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
typedef union MtxFx44 {
    struct {
        fx32 _00, _01, _02, _03;
        fx32 _10, _11, _12, _13;
        fx32 _20, _21, _22, _23;
        fx32 _30, _31, _32, _33;
    };
    fx32 m[4][4];
    fx32 a[16];
} MtxFx44;
typedef struct {
    u32 cmd0;
    u32 mtxmodeProj;
    MtxFx44 projMtx;
    u32 mtxmodePosVec;
    MtxFx43 cameraMtx;
    u32 cmd1;
    u32 lightVec[4];
    u32 cmd2;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmViewPort;
    u32 cmd3;
    u32 lightColor[4];
    u32 cmd4;
    MtxFx33 prmBaseRot;
    VecFx32 prmBaseTrans;
    VecFx32 prmBaseScale;
    u32 prmTexImageParam;
    u32 flag;
    MtxFx43 invCameraMtx;
    MtxFx43 wvMtx;
    MtxFx43 invWvMtx;
    u32 pad190[12];
    MtxFx44 invProjMtx;
    MtxFx44 invVpMtx;
    union {
        MtxFx33 viewFlipMtx;
        struct {
            VecFx32 camPos;
            VecFx32 camUp;
            VecFx32 camTarget;
        };
    };
} NNSG3dGlb;
extern NNSG3dGlb data_021da4bc;
typedef struct NNSG3dSbcNodeDesc {
    u8 cmd;
    u8 nodeId;
    u8 parentNodeId;
    u8 flag;
} NNSG3dSbcNodeDesc;
typedef struct NNSG3dResDictTreeNode {
    u8 refBit;
    u8 idxLeft;
    u8 idxRight;
    u8 idxEntry;
} NNSG3dResDictTreeNode;
typedef struct NNSG3dResDict {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy;
    u16 ofsEntry;
} NNSG3dResDict;
typedef struct NNSG3dResDictEntryHdr {
    u16 sizeUnit;
    u16 ofsName;
} NNSG3dResDictEntryHdr;
typedef struct NNSG3dResDictUnit {
    u32 ofsData;
} NNSG3dResDictUnit;
typedef struct NNSG3dResNodeData {
    u16 flag;
    s16 rotM00;
    fx32 trans[3];
} NNSG3dResNodeData;
typedef struct NNSG3dResMdlInfo {
    u8 sbcType;
    u8 scalingRule;
    u8 texMtxMode;
    u8 numNode;
    u8 numMat;
    u8 numShp;
    u8 firstUnusedMtxStackId;
    u8 dummy_;
    fx32 posScale;
    fx32 invPosScale;
    u16 numVertex;
    u16 numPolygon;
    u16 numTriangle;
    u16 numQuad;
    fx16 boxX;
    fx16 boxY;
    fx16 boxZ;
    fx16 boxW;
    fx16 boxH;
    fx16 boxD;
    fx32 boxPosScale;
    fx32 boxInvPosScale;
} NNSG3dResMdlInfo;
typedef struct NNSG3dResMdl {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u32 ofsShp;
    u32 ofsEvpMtx;
    NNSG3dResMdlInfo info;
    NNSG3dResDict nodeInfo;
} NNSG3dResMdl;
typedef struct NNSG3dResAnmHdr {
    u8 category0;
    u8 category1;
    u16 revision;
} NNSG3dResAnmHdr;
typedef struct NNSG3dResAnmCommon {
    NNSG3dResAnmHdr hdr;
    u16 numFrame;
} NNSG3dResAnmCommon;
typedef struct NNSG3dResJntAnm {
    NNSG3dResAnmHdr hdr;
    u16 numFrame;
    u16 numNode;
    u32 flag;
    u32 ofsRot3;
    u32 ofsRot9;
    u16 ofsNodeAnm[1];
} NNSG3dResJntAnm;
typedef struct NNSG3dPivotSlot {
    u8 index;
    u8 others[3];
} NNSG3dPivotSlot;
typedef struct NNSG3dJntAnmTInfo {
    u32 info;
    u32 offset;
} NNSG3dJntAnmTInfo;
typedef NNSG3dJntAnmTInfo NNSG3dJntAnmSInfo;
typedef NNSG3dJntAnmTInfo NNSG3dJntAnmRInfo;
typedef struct ScaleFx16 {
    fx16 s;
    fx16 invs;
} ScaleFx16;
typedef struct ScaleFx32 {
    fx32 s;
    fx32 invs;
} ScaleFx32;
typedef void (*NNSG3dJntScaleFunc)(NNSG3dJntAnmResult *pResult, const fx32 *pScale, const NNSG3dSbcNodeDesc *pCmd, u32 flag);
typedef struct NNSG3dResItemTag {
    u16 tag;
    u16 size;
} NNSG3dResItemTag;
typedef struct NNSG3dResMat {
    u16 ofsDictTexToMatList;
    u16 ofsDictPlttToMatList;
    NNSG3dResDict dict;
} NNSG3dResMat;
typedef struct NNSG3dResShp {
    NNSG3dResDict dict;
} NNSG3dResShp;
typedef struct NNSG3dResMatData {
    u16 itemTag;
    u16 size;
    u32 diffAmb;
    u32 specEmi;
    u32 polyAttr;
    u32 polyAttrMask;
    u32 texImageParam;
    u32 texImageParamMask;
    u16 texPlttBase;
    u16 flag;
    u16 origWidth;
    u16 origHeight;
    fx32 magW;
    fx32 magH;
    u32 effectData[1];
} NNSG3dResMatData;
typedef struct NNSG3dResShpData {
    u16 itemTag;
    u16 size;
    u32 flag;
    u32 ofsDisplayList;
    u32 sizeDisplayList;
} NNSG3dResShpData;
typedef struct NNSG3dMatAnmResult {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS;
    fx32 scaleT;
    fx16 sinR;
    fx16 cosR;
    fx32 transS;
    fx32 transT;
    u16 origWidth;
    u16 origHeight;
    fx32 magW;
    fx32 magH;
} NNSG3dMatAnmResult;
typedef struct NNSG3dVisAnmResult {
    u32 isVisible;
} NNSG3dVisAnmResult;
struct NNSG3dRS;
typedef void (*NNSG3dSbcCallBackFunc)(struct NNSG3dRS *pRS);
typedef void (*NNSG3dFuncMatTexMtx)(NNSG3dMatAnmResult *pResult);
typedef void (*NNSG3dFuncJntMtx)(const NNSG3dJntAnmResult *pResult);
typedef void (*NNSG3dFuncBlendMat)(NNSG3dMatAnmResult *pResult, const NNSG3dAnmObj *pAnmObj, u32 idxMat);
typedef int (*NNSG3dFuncBlendJnt)(NNSG3dJntAnmResult *pResult, const NNSG3dAnmObj *pAnmObj, u32 idxNode);
typedef int (*NNSG3dFuncBlendVis)(NNSG3dVisAnmResult *pResult, const NNSG3dAnmObj *pAnmObj, u32 idxNode);
typedef struct NNSG3dRenderObj {
    u32 flag;
    const NNSG3dResMdl *resMdl;
    NNSG3dAnmObj *anmMat;
    NNSG3dFuncBlendMat funcBlendMat;
    NNSG3dAnmObj *anmJnt;
    NNSG3dFuncBlendJnt funcBlendJnt;
    NNSG3dAnmObj *anmVis;
    NNSG3dFuncBlendVis funcBlendVis;
    NNSG3dSbcCallBackFunc cbFunc;
    u8 cbCmd;
    u8 cbTiming;
    u8 reserved26[2];
    NNSG3dSbcCallBackFunc cbInitFunc;
    u32 reserved2C;
    const u8 *ptrSbc;
    NNSG3dJntAnmResult *recJntAnm;
    NNSG3dMatAnmResult *recMatAnm;
    u32 matAnmExist[2];
    u32 jntAnmExist[2];
    u32 visAnmExist[2];
} NNSG3dRenderObj;
typedef struct NNSG3dRS {
    const NNSG3dSbcNodeDesc *c;
    NNSG3dRenderObj *pRenderObj;
    u32 flag;
    NNSG3dSbcCallBackFunc cbVecFunc[32];
    u8 cbVecTiming[32];
    u8 currentNode;
    u8 currentMat;
    u8 currentNodeDesc;
    u8 dummy_;
    NNSG3dMatAnmResult *pMatAnmResult;
    NNSG3dJntAnmResult *pJntAnmResult;
    NNSG3dVisAnmResult *pVisAnmResult;
    u32 isMatCached[2];
    union {
        u32 bits[4];
        struct {
            u32 isMtxCached[2];
            u32 isEvpCached[2];
        };
    };
    const NNSG3dResDict *nodeDict;
    NNSG3dResMat *pResMat;
    NNSG3dResShp *pResShp;
    fx32 posScale;
    fx32 invPosScale;
    NNSG3dJntScaleFunc jntScaleFunc;
    NNSG3dFuncJntMtx jntMtxFunc;
    NNSG3dFuncMatTexMtx matTexMtxFunc;
    NNSG3dMatAnmResult tmpMatAnmResult;
    NNSG3dJntAnmResult tmpJntAnmResult;
    NNSG3dVisAnmResult tmpVisAnmResult;
} NNSG3dRS;
typedef union NNSG3dResName {
    char name[16];
    u32 val[4];
} NNSG3dResName;
typedef struct NNSG3dResMatAnm {
    NNSG3dResAnmHdr hdr;
    u16 numFrame;
    u16 dummy;
    NNSG3dResDict dict;
} NNSG3dResMatAnm;
typedef struct NNSG3dResMatAnmData {
    u32 diffuse;
    u32 ambient;
    u32 specular;
    u32 emission;
    u32 polygonAlpha;
} NNSG3dResMatAnmData;
typedef struct NNSG3dResTexSRTAnm {
    NNSG3dResAnmHdr hdr;
    u16 numFrame;
    u16 dummy;
    NNSG3dResDict dict;
} NNSG3dResTexSRTAnm;
typedef struct NNSG3dTexSRTTrack {
    u32 info;
    u32 offset;
} NNSG3dTexSRTTrack;
typedef struct NNSG3dResTexSRTAnmData {
    NNSG3dTexSRTTrack scaleS;
    NNSG3dTexSRTTrack scaleT;
    NNSG3dTexSRTTrack rot;
    NNSG3dTexSRTTrack transS;
    NNSG3dTexSRTTrack transT;
} NNSG3dResTexSRTAnmData;
typedef struct NNSG3dResTexPatAnm {
    NNSG3dResAnmHdr hdr;
    u16 numFrame;
    u8 numTex;
    u8 numPltt;
    u16 ofsTexName;
    u16 ofsPlttName;
    NNSG3dResDict dict;
} NNSG3dResTexPatAnm;
typedef struct NNSG3dVec3Fx {
    fx32 x;
    fx32 y;
    fx32 z;
} NNSG3dVec3Fx;
typedef struct NNSG3dMayaScaleRow {
    NNSG3dVec3Fx invScale;
    fx32 reserved0C[3];
} NNSG3dMayaScaleRow;
typedef struct NNSG3dTexMtxCmd {
    u32 op;
    u32 mtxMode;
    MtxFx44 mtx;
    u32 mtxModeRestore;
} NNSG3dTexMtxCmd;
typedef struct NNSG3dTexMtxCmd43 {
    u32 op;
    u32 mtxMode;
    MtxFx43 mtx;
    u32 mtxModeRestore;
} NNSG3dTexMtxCmd43;
typedef void (*NNSG3dTexMtxBuildFunc)(MtxFx44 *pMtx, const NNSG3dMatAnmResult *pResult);
typedef struct NNSG3dResVisAnm {
    NNSG3dResAnmHdr hdr;
    u16 numFrame;
    u16 numNode;
    u8 reserved08[4];
    u32 visData[1];
} NNSG3dResVisAnm;
typedef struct NNSG3dResTexPatAnmFV {
    u16 idxFrame;
    u8 idTex;
    u8 idPltt;
} NNSG3dResTexPatAnmFV;
typedef struct NNSG3dResTexInfo {
    u32 vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
} NNSG3dResTexInfo;
typedef struct NNSG3dResTex4x4Info {
    u32 vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
    u32 ofsTexPlttIdx;
} NNSG3dResTex4x4Info;
typedef struct NNSG3dResPlttInfo {
    u32 vramKey;
    u16 sizePltt;
    u16 flag;
    u16 ofsDict;
    u16 dummy_;
    u32 ofsPlttData;
} NNSG3dResPlttInfo;
typedef struct NNSG3dResTex {
    u32 header[2];
    NNSG3dResTexInfo texInfo;
    NNSG3dResTex4x4Info tex4x4Info;
    NNSG3dResPlttInfo plttInfo;
    NNSG3dResDict dictTex;
} NNSG3dResTex;
typedef struct NNSG3dResFileHeader {
    u32 signature;
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} NNSG3dResFileHeader;
typedef struct NNSG3dResDataBlockHeader {
    u32 kind;
    u32 size;
} NNSG3dResDataBlockHeader;
typedef struct NNSG3dResMdlSet {
    NNSG3dResDataBlockHeader header;
    NNSG3dResDict dict;
} NNSG3dResMdlSet;
typedef struct NNSG3dResDictTexData {
    u32 texImageParam;
    u32 extraParam;
} NNSG3dResDictTexData;
typedef struct NNSG3dResDictPlttData {
    u16 offset;
    u16 flag;
} NNSG3dResDictPlttData;
typedef enum {
    SCFG_CPU_SPEED_1X = 0,
    SCFG_CPU_SPEED_2X = 1
} SCFGCpuSpeed;
extern void MIi_CpuClear16(u16 data, void *destp, u32 size);
extern void MIi_CpuCopy16(const void *srcp, void *destp, u32 size);
extern void MIi_CpuClear32(u32 data, void *destp, u32 size);
extern void MIi_CpuCopy32(const void *srcp, void *destp, u32 size);
extern void MIi_CpuSend32(const void *srcp, volatile void *destp, u32 size);
extern void MIi_CpuClearFast(u32 data, void *destp, u32 size);
extern void MIi_CpuCopyFast(const void *srcp, void *destp, u32 size);
extern void MI_Copy32B(const void *pSrc, void *pDest);
extern void MI_Copy36B(const void *pSrc, void *pDest);
extern void MI_Copy48B(const void *pSrc, void *pDest);
extern void MI_Copy64B(void *pSrc, void *pDest);
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuFill(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
extern int MI_CpuComp8(const void *mem1, const void *mem2, u32 size);
extern void MI_CpuCopy(const void *src, void *dest, u32 size);
extern void MI_CpuMove(const void *srcp, void *dstp, u32 size);
extern void MI_Zero36B(void *dst);
typedef struct BillboardCmdBlock {
    u32 cmd;
    u32 params[2];
    MtxFx43 mtx;
    VecFx32 scale;
} BillboardCmdBlock;
extern void func_020c2528(u32 cmd, const void *params, u32 n);
extern void NNS_G3dGeFlushBuffer(void);
extern int G3X_GetClipMtx(MtxFx44 *pClipMtx);
extern MtxFx43 *NNS_G3dGlbGetWVMtx(void);
extern MtxFx43 *NNS_G3dGlbGetInvWVMtx(void);
extern MtxFx43 *NNS_G3dGlbGetInvCameraMtx(void);
extern void NNS_G3dGeSendDL(const u32 *pDisplayList, u32 size);
extern void MTX_Copy43To44_(const MtxFx43 *pSrc, MtxFx44 *pDst);
extern void MTX_Concat44(const MtxFx44 *pA, const MtxFx44 *pB, MtxFx44 *pAB);
extern fx32 VEC_Mag(const VecFx32 *pVec);
static inline void *NNSi_G3dGetResDataByIdx(const NNSG3dResDict *pDict, u32 idx) {
    if (pDict && idx < pDict->numEntry) {
        const NNSG3dResDictEntryHdr *pHdr = (const NNSG3dResDictEntryHdr *) ((const u8 *) pDict + pDict->ofsEntry);

        return (void *) ((uptr) pHdr + sizeof(NNSG3dResDictEntryHdr) + pHdr->sizeUnit * idx);
    }
    return 0;
}
static inline const NNSG3dResMatData *NNSi_G3dGetMatDataByIdx(const NNSG3dResMat *pMat, u32 idx) {
    if (pMat) {
        const u32 *pOfs = (const u32 *) NNSi_G3dGetResDataByIdx(&pMat->dict, idx);

        if (pOfs) {
            return (const NNSG3dResMatData *) ((const u8 *) pMat + *pOfs);
        }
    }
    return 0;
}
static inline const NNSG3dResShpData *NNSi_G3dGetShpDataByIdx(const NNSG3dResShp *pShp, u32 idx) {
    if (pShp) {
        const u32 *pOfs = (const u32 *) NNSi_G3dGetResDataByIdx(&pShp->dict, idx);

        if (pOfs) {
            return (const NNSG3dResShpData *) ((const u8 *) pShp + *pOfs);
        }
    }
    return 0;
}
static inline const NNSG3dResNodeData *NNSi_G3dGetNodeDataByIdx(const NNSG3dResDict *pDict, u32 idx) {
    if (pDict) {
        const u32 *pOfs = (const u32 *) NNSi_G3dGetResDataByIdx(pDict, idx);

        if (pOfs) {
            return (const NNSG3dResNodeData *) ((const u8 *) pDict + *pOfs);
        }
    }
    return 0;
}
static inline u32 NNSi_G3dCheckPossibilityOfCallback(NNSG3dRS *pRS, u32 cmd) {
    return pRS->cbVecFunc[cmd] ? pRS->cbVecTiming[cmd] : 0;
}
static inline u32 NNSi_G3dCallBackCheckA(NNSG3dRS *pRS, u32 cmd, u32 *pTiming) {
    if (*pTiming == 1) {
        pRS->flag &= ~0x0040;
        (*pRS->cbVecFunc[cmd])(pRS);
        *pTiming = NNSi_G3dCheckPossibilityOfCallback(pRS, cmd);
        return pRS->flag & 0x0040;
    }
    return 0;
}
static inline u32 NNSi_G3dCallBackCheckB(NNSG3dRS *pRS, u32 cmd, u32 *pTiming) {
    if (*pTiming == 2) {
        pRS->flag &= ~0x0040;
        (*pRS->cbVecFunc[cmd])(pRS);
        *pTiming = NNSi_G3dCheckPossibilityOfCallback(pRS, cmd);
        return pRS->flag & 0x0040;
    }
    return 0;
}
static inline u32 NNSi_G3dCallBackCheckC(NNSG3dRS *pRS, u32 cmd, u32 timing) {
    if (timing == 3) {
        pRS->flag &= ~0x0040;
        (*pRS->cbVecFunc[cmd])(pRS);
        return pRS->flag & 0x0040;
    }
    return 0;
}
typedef void (*NNSG3dSbcFunc)(NNSG3dRS *pRS, u32 opt);
typedef struct NNSG3dEvpMtx {
    MtxFx43 invM;
    MtxFx33 invN;
} NNSG3dEvpMtx;
typedef struct NNSG3dEvpCache {
    MtxFx44 M;
    MtxFx33 N;
} NNSG3dEvpCache;
typedef struct TexImageParamCmd {
    u32 op0;
    u32 param0;
    u32 op1;
    u32 param1;
} TexImageParamCmd;
extern void VEC_Add(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void VEC_Subtract(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void VEC_Fx16Add(const VecFx16 *a, const VecFx16 *b, VecFx16 *ab);
extern fx32 VEC_DotProduct(const VecFx32 *a, const VecFx32 *b);
extern fx32 VEC_Fx16DotProduct(const VecFx16 *a, const VecFx16 *b);
extern void VEC_CrossProduct(const VecFx32 *a, const VecFx32 *b, VecFx32 *axb);
extern void VEC_Fx16CrossProduct(const VecFx16 *a, const VecFx16 *b, VecFx16 *axb);
extern fx32 VEC_Mag(const VecFx32 *pSrc);
extern fx32 VEC_Fx16Mag(const VecFx16 *pSrc);
extern void VEC_Normalize(const VecFx32 *pSrc, VecFx32 *pDst);
extern void VEC_Fx16Normalize(const VecFx16 *pSrc, VecFx16 *pDst);
extern void VEC_MultAdd(fx32 a, const VecFx32 *v1, const VecFx32 *v2, VecFx32 *pDest);
extern fx32 VEC_Distance(const VecFx32 *v1, const VecFx32 *v2);
extern void G3_LoadMtx44(const void *m);
extern void G3_LoadMtx43(const void *m);
extern void G3_MultMtx44(const void *m);
extern void G3_MultMtx43(const void *m);
extern void G3_MultMtx33(const void *m);
extern void G3_MultTransMtx33(const MtxFx33 *mtx, const VecFx32 *trans);
typedef enum GXVRam {
    GX_VRAM_NONE = 0x0000,
    GX_VRAM_A    = 0x0001,
    GX_VRAM_B    = 0x0002,
    GX_VRAM_C    = 0x0004,
    GX_VRAM_D    = 0x0008,
    GX_VRAM_E    = 0x0010,
    GX_VRAM_F    = 0x0020,
    GX_VRAM_G    = 0x0040,
    GX_VRAM_H    = 0x0080,
    GX_VRAM_I    = 0x0100
} GXVRam;
typedef enum GXDispSelect {
    GX_DISP_SELECT_SUB_MAIN = 0,
    GX_DISP_SELECT_MAIN_SUB = 1
} GXDispSelect;
typedef enum GXBGColorMode {
    GX_BG_COLORMODE_16  = 0,
    GX_BG_COLORMODE_256 = 1
} GXBGColorMode;
typedef enum GXBGAreaOver {
    GX_BG_AREAOVER_REPEAT = 0,
    GX_BG_AREAOVER_XLU    = 1
} GXBGAreaOver;
typedef enum GXBGExtPltt {
    GX_BG_EXTPLTT_01 = 0,
    GX_BG_EXTPLTT_23 = 1
} GXBGExtPltt;
typedef enum GXBGCharBase {
    GX_BG_CHARBASE_0x00000 = 0,
    GX_BG_CHARBASE_0x04000,
    GX_BG_CHARBASE_0x08000,
    GX_BG_CHARBASE_0x0c000,
    GX_BG_CHARBASE_0x10000,
    GX_BG_CHARBASE_0x14000,
    GX_BG_CHARBASE_0x18000,
    GX_BG_CHARBASE_0x1c000,
    GX_BG_CHARBASE_0x20000,
    GX_BG_CHARBASE_0x24000,
    GX_BG_CHARBASE_0x28000,
    GX_BG_CHARBASE_0x2c000,
    GX_BG_CHARBASE_0x30000,
    GX_BG_CHARBASE_0x34000,
    GX_BG_CHARBASE_0x38000,
    GX_BG_CHARBASE_0x3c000
} GXBGCharBase;
typedef enum GXBGScrBase {
    GX_BG_SCRBASE_0x0000 = 0,
    GX_BG_SCRBASE_0x0800,
    GX_BG_SCRBASE_0x1000,
    GX_BG_SCRBASE_0x1800,
    GX_BG_SCRBASE_0x2000,
    GX_BG_SCRBASE_0x2800,
    GX_BG_SCRBASE_0x3000,
    GX_BG_SCRBASE_0x3800,
    GX_BG_SCRBASE_0x4000,
    GX_BG_SCRBASE_0x4800,
    GX_BG_SCRBASE_0x5000,
    GX_BG_SCRBASE_0x5800,
    GX_BG_SCRBASE_0x6000,
    GX_BG_SCRBASE_0x6800,
    GX_BG_SCRBASE_0x7000,
    GX_BG_SCRBASE_0x7800,
    GX_BG_SCRBASE_0x8000,
    GX_BG_SCRBASE_0x8800,
    GX_BG_SCRBASE_0x9000,
    GX_BG_SCRBASE_0x9800,
    GX_BG_SCRBASE_0xa000,
    GX_BG_SCRBASE_0xa800,
    GX_BG_SCRBASE_0xb000,
    GX_BG_SCRBASE_0xb800,
    GX_BG_SCRBASE_0xc000,
    GX_BG_SCRBASE_0xc800,
    GX_BG_SCRBASE_0xd000,
    GX_BG_SCRBASE_0xd800,
    GX_BG_SCRBASE_0xe000,
    GX_BG_SCRBASE_0xe800,
    GX_BG_SCRBASE_0xf000,
    GX_BG_SCRBASE_0xf800
} GXBGScrBase;
typedef enum GXBGScrSizeText {
    GX_BG_SCRSIZE_TEXT_256x256 = 0,
    GX_BG_SCRSIZE_TEXT_512x256,
    GX_BG_SCRSIZE_TEXT_256x512,
    GX_BG_SCRSIZE_TEXT_512x512
} GXBGScrSizeText;
typedef enum GXOBJVRamModeChar {
    GX_OBJVRAMMODE_CHAR_2D      = 0x00000000,
    GX_OBJVRAMMODE_CHAR_1D_32K  = 0x00000010,
    GX_OBJVRAMMODE_CHAR_1D_64K  = 0x00100010,
    GX_OBJVRAMMODE_CHAR_1D_128K = 0x00200010,
    GX_OBJVRAMMODE_CHAR_1D_256K = 0x00300010
} GXOBJVRamModeChar;
typedef enum GXPolygonMode {
    GX_POLYGONMODE_MODULATE = 0,
    GX_POLYGONMODE_DECAL    = 1,
    GX_POLYGONMODE_TOON     = 2,
    GX_POLYGONMODE_SHADOW   = 3
} GXPolygonMode;
typedef enum GXCull {
    GX_CULL_ALL   = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK  = 2,
    GX_CULL_NONE  = 3
} GXCull;
typedef enum GXShading {
    GX_SHADING_TOON      = 0,
    GX_SHADING_HIGHLIGHT = 1
} GXShading;
typedef enum GXFogBlend {
    GX_FOGBLEND_COLOR_ALPHA = 0,
    GX_FOGBLEND_ALPHA       = 1
} GXFogBlend;
typedef enum GXFogSlope {
    GX_FOGSLOPE_0x0400 = 0,
    GX_FOGSLOPE_0x0200,
    GX_FOGSLOPE_0x0100,
    GX_FOGSLOPE_0x0080,
    GX_FOGSLOPE_0x0040,
    GX_FOGSLOPE_0x0020,
    GX_FOGSLOPE_0x0010,
    GX_FOGSLOPE_0x0008,
    GX_FOGSLOPE_0x0004,
    GX_FOGSLOPE_0x0002,
    GX_FOGSLOPE_0x0001
} GXFogSlope;
typedef enum GXTexFmt {
    GX_TEXFMT_NONE    = 0,
    GX_TEXFMT_A3I5    = 1,
    GX_TEXFMT_PLTT4   = 2,
    GX_TEXFMT_PLTT16  = 3,
    GX_TEXFMT_PLTT256 = 4,
    GX_TEXFMT_COMP4x4 = 5,
    GX_TEXFMT_A5I3    = 6,
    GX_TEXFMT_DIRECT  = 7
} GXTexFmt;
typedef enum GXTexSizeS {
    GX_TEXSIZE_S8 = 0,
    GX_TEXSIZE_S16,
    GX_TEXSIZE_S32,
    GX_TEXSIZE_S64,
    GX_TEXSIZE_S128,
    GX_TEXSIZE_S256,
    GX_TEXSIZE_S512,
    GX_TEXSIZE_S1024
} GXTexSizeS;
typedef enum GXTexSizeT {
    GX_TEXSIZE_T8 = 0,
    GX_TEXSIZE_T16,
    GX_TEXSIZE_T32,
    GX_TEXSIZE_T64,
    GX_TEXSIZE_T128,
    GX_TEXSIZE_T256,
    GX_TEXSIZE_T512,
    GX_TEXSIZE_T1024
} GXTexSizeT;
typedef enum GXTexRepeat {
    GX_TEXREPEAT_NONE = 0,
    GX_TEXREPEAT_S    = 1,
    GX_TEXREPEAT_T    = 2,
    GX_TEXREPEAT_ST   = 3
} GXTexRepeat;
typedef enum GXTexFlip {
    GX_TEXFLIP_NONE = 0,
    GX_TEXFLIP_S    = 1,
    GX_TEXFLIP_T    = 2,
    GX_TEXFLIP_ST   = 3
} GXTexFlip;
typedef enum GXTexGen {
    GX_TEXGEN_NONE     = 0,
    GX_TEXGEN_TEXCOORD = 1,
    GX_TEXGEN_NORMAL   = 2,
    GX_TEXGEN_VERTEX   = 3
} GXTexGen;
typedef enum GXTexPlttColor0 {
    GX_TEXPLTTCOLOR0_USE  = 0,
    GX_TEXPLTTCOLOR0_TRNS = 1
} GXTexPlttColor0;
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
typedef struct GX_VRAMCnt_ {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clrImg;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 sub_bg;
    u16 sub_obj;
    u16 sub_bgExtPltt;
    u16 sub_objExtPltt;
} GX_VRAMCnt_;
typedef struct GX_State {
    GX_VRAMCnt_ vramCnt;
} GX_State;
extern void G3X_Init(void);
extern void G3X_Reset(void);
extern void G3X_ClearFifo(void);
extern void G3X_InitMtxStack(void);
extern void G3X_ResetMtxStack(void);
extern void G3X_SetFog(BOOL enable, GXFogBlend fogMode, GXFogSlope fogSlope, int fogOffset);
extern int G3X_GetClipMtx(MtxFx44 *m);
extern int G3X_GetVectorMtx(MtxFx33 *m);
extern void G3X_SetEdgeColorTable(const void *src);
extern void G3X_SetFogTable(const void *src);
extern void G3X_SetClearColor(u16 rgb, int alpha, int depth, int polygonID, BOOL fog);
extern void G3X_InitTable(void);
extern int G3X_GetMtxStackLevelPV(s32 *level);
extern int G3X_GetMtxStackLevelPJ(s32 *level);
extern void G3X_SetDisp1DotDepth(fx32 w);
extern int G3X_GetBoxTestResult(s32 *in);
extern void GXi_NopClearFifo128_(void *pDest);
extern int NNS_G3dGeIsBufferExist(void);
extern void NNS_G3dGeSetBuffer(u32 *cmdBuffer);
extern void *NNS_G3dGeReleaseBuffer(void);
extern void NNS_G3dGeFlushBuffer(void);
extern void NNS_G3dGeWaitSendDL(void);
extern void NNSi_G3dGeSendDLDone(void *arg);
extern void NNS_G3dGeSendDL(const u32 *src, u32 sz);
extern void func_020c2528(u32 cmd, const void *params, u32 n);
extern void func_020c260c(void *clipMtxOut, void *vectorMtxOut);
extern void NNSi_G3dSbcRun(NNSG3dRS *pRS);
extern void NNSi_G3dRenderObjRunSbc(NNSG3dRS *pRS, NNSG3dRenderObj *pRenderObj);
extern void NNSi_G3dAnmObjMarkExistMap(u32 *pExistMap, NNSG3dAnmObj *pAnmObj);
extern void NNS_G3dDraw(NNSG3dRenderObj *pRenderObj);
extern void NNSi_G3dFuncSbc_NOP(NNSG3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_RET(NNSG3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_NODE(NNSG3dRS *pRS);
extern void NNSi_G3dFuncSbc_MTX(NNSG3dRS *pRS);
extern void NNSi_G3dFuncSbc_MAT_InternalDefault(NNSG3dRS *pRS, u32 opt, const NNSG3dResMatData *pMatData, u32 idMat);
extern void NNSi_G3dFuncSbc_MAT(NNSG3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_SHP_InternalDefault(NNSG3dRS *pRS, u32 opt, const NNSG3dResShpData *pShp, u32 idxShp);
extern void NNSi_G3dFuncSbc_SHP(NNSG3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_NODEDESC(NNSG3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_BB(NNSG3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_BBY(NNSG3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_NODEMIX(NNSG3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_CALLDL(NNSG3dRS *pRS);
extern void NNSi_G3dFuncSbc_POSSCALE(NNSG3dRS *pRS, u32 which);
extern void func_020c1a5c(NNSG3dRS *pRS, u32 opt);
extern void NNSi_G3dFuncSbc_PRJMAP(NNSG3dRS *pRS, u32 opt);
extern NNSG3dSbcFunc gSbcFuncTable[];
extern NNSG3dJntScaleFunc gJntScaleFuncTable[];
extern NNSG3dFuncJntMtx gJntMtxFuncTable[];
extern NNSG3dFuncMatTexMtx gMatTexMtxFuncTable[];
extern NNSG3dRS *gCurrentRS;
extern NNSG3dMatAnmResult gMatAnmResultScratch[];
extern u32 gMatColorMaskTable[];
extern const u8 gPivotAxisTable[][4];
extern BillboardCmdBlock gBillboardCmd;
extern BillboardCmdBlock gBillboardYCmd;
extern NNSG3dEvpCache gEvpCache[];
extern TexImageParamCmd data_02110abc;
extern MtxFx44 gPrjMapTexMtx;
void NNSi_G3dSbcRun(NNSG3dRS *pRS);
void NNSi_G3dRenderObjRunSbc(NNSG3dRS *pRS, NNSG3dRenderObj *pRenderObj);
void NNSi_G3dAnmObjMarkExistMap(u32 *pExistMap, NNSG3dAnmObj *pAnmObj);
void NNS_G3dDraw(NNSG3dRenderObj *pRenderObj);
void NNSi_G3dFuncSbc_NOP(NNSG3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_RET(NNSG3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_NODE(NNSG3dRS *pRS);
void NNSi_G3dFuncSbc_MTX(NNSG3dRS *pRS);
void NNSi_G3dFuncSbc_MAT_InternalDefault(NNSG3dRS *pRS, u32 opt, const NNSG3dResMatData *pMatData, u32 idMat);
extern void (*gMatHandlerTable[])(NNSG3dRS *, u32, const NNSG3dResMatData *, u32);
extern void (*gShpHandlerTable[])(NNSG3dRS *, u32, const NNSG3dResShpData *, u32);
void NNSi_G3dFuncSbc_MAT(NNSG3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_SHP_InternalDefault(NNSG3dRS *pRS, u32 opt, const NNSG3dResShpData *pShp, u32 idxShp);
void NNSi_G3dFuncSbc_SHP(NNSG3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_NODEDESC(NNSG3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_BB(NNSG3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_BBY(NNSG3dRS *pRS, u32 opt);
static inline u32 NNSi_G3dBitVecCheck(const u32 *vec, u32 idx) {
    return vec[idx >> 5] & (1 << (idx & 31));
}
static inline void NNSi_G3dBitVecSet(u32 *vec, u32 idx) {
    vec[idx >> 5] |= 1 << (idx & 31);
}
void NNSi_G3dFuncSbc_NODEMIX(NNSG3dRS *pRS, u32 opt);
void NNSi_G3dFuncSbc_CALLDL(NNSG3dRS *pRS);
void NNSi_G3dFuncSbc_POSSCALE(NNSG3dRS *pRS, u32 which);
void func_020c1a5c(NNSG3dRS *pRS, u32 opt) {
    if (!(pRS->flag & 0x0200) && (pRS->flag & 1)) {
        MtxFx33 n;
        VecFx32 scale;
        u32 timing;

        if ((pRS->pMatAnmResult->prmTexImage & 0xc0000000) != 0x80000000) {
            pRS->pMatAnmResult->prmTexImage &= ~0xc0000000;
            pRS->pMatAnmResult->prmTexImage |= 0x80000000;
            data_02110abc.param1 = pRS->pMatAnmResult->prmTexImage;
            func_020c2528(data_02110abc.op1, &data_02110abc.param1, 1);
        }
        {
            u32 arg = 3;
            func_020c2528(0x10, &arg, 1);
        }

        timing = NNSi_G3dCheckPossibilityOfCallback(pRS, 12);
        if (!NNSi_G3dCallBackCheckA(pRS, 12, &timing)) {
            int w = pRS->pMatAnmResult->origWidth;
            int h = pRS->pMatAnmResult->origHeight;
            u32 arg;
            scale.x = w << 15;
            scale.y = -h << 15;
            scale.z = 0x10000;
            func_020c2528(0x1b, &scale, 3);
            arg = (u32) (u16) (s16) (w << 3) | ((u32) (u16) (s16) (h << 3) << 16);
            func_020c2528(0x22, &arg, 1);
        }

        if (!NNSi_G3dCallBackCheckB(pRS, 12, &timing)) {
            const NNSG3dResMatData *mat = NNSi_G3dGetMatDataByIdx(pRS->pResMat, (((const u8 *) (pRS)->c)[1]));
            if (mat->flag & 0x2000) {
                const u8 *p = (const u8 *) mat->effectData;
                if (!(mat->flag & 0x0002)) {
                    p += 8;
                }
                if (!(mat->flag & 0x0004)) {
                    p += 4;
                }
                if (!(mat->flag & 0x0008)) {
                    p += 8;
                }
                func_020c2528(0x18, p, 16);
            }
        }

        if (!NNSi_G3dCallBackCheckC(pRS, 12, timing)) {
            {
                u32 arg = 2;
                func_020c2528(0x10, &arg, 1);
            }
            func_020c260c(0, &n);
            {
                u32 arg = 3;
                func_020c2528(0x10, &arg, 1);
            }
            if (data_021da4bc.flag & 1) {
                func_020c2528(0x1a, &data_021da4bc.cameraMtx, 9);
                func_020c2528(0x1a, &data_021da4bc.prmBaseRot, 9);
                func_020c2528(0x1a, &n, 9);
            } else if (data_021da4bc.flag & 2) {
                func_020c2528(0x1a, &data_021da4bc.cameraMtx, 9);
                func_020c2528(0x1a, &n, 9);
            } else {
                func_020c2528(0x1a, &n, 9);
            }
        }
        {
            u32 arg = 2;
            func_020c2528(0x10, &arg, 1);
        }
    }
    ((pRS)->c = (const NNSG3dSbcNodeDesc *) ((const u8 *) (pRS)->c + (3)));
}
void NNSi_G3dFuncSbc_PRJMAP(NNSG3dRS *pRS, u32 opt);
