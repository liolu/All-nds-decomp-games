/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G3dBindMdlPlttEx from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g3d_tex.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef s16 fx16;
typedef s32 fx32;
typedef struct NNSG3dResDict {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy;
    u16 ofsEntry;
} NNSG3dResDict;
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
typedef struct NNSG3dResMat {
    u16 ofsDictTexToMatList;
    u16 ofsDictPlttToMatList;
    NNSG3dResDict dict;
} NNSG3dResMat;
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
typedef struct NNSG3dResDictPlttData {
    u16 offset;
    u16 flag;
} NNSG3dResDictPlttData;
typedef struct {
    u16 offset;
    u8 numIdx;
    u8 flag;
} NNSG3dResPlttToMatIdx;
extern void func_020be9cc(NNSG3dResMat *pMat, NNSG3dResPlttToMatIdx *pBindData, const NNSG3dResTex *pTex,
                          const NNSG3dResDictPlttData *pPlttData);
extern int func_020bebb4(NNSG3dResMdl *pMdl, NNSG3dResTex *pTex, u32 plttToMatIdx, u32 plttDataIdx);
void func_020be9cc(NNSG3dResMat *pMat, NNSG3dResPlttToMatIdx *pBindData, const NNSG3dResTex *pTex,
                   const NNSG3dResDictPlttData *pPlttData);
int func_020bebb4(NNSG3dResMdl *pMdl, NNSG3dResTex *pTex, u32 plttToMatIdx, u32 plttDataIdx) {
    NNSG3dResMat *mat;
    NNSG3dResDict *matDict;
    NNSG3dResDictPlttData *plttData;
    NNSG3dResPlttToMatIdx *bindData;

    mat     = (pMdl != 0 && pMdl->ofsMat != 0) ? (NNSG3dResMat *) ((u8 *) pMdl + pMdl->ofsMat) : 0;
    matDict = (NNSG3dResDict *) ((u8 *) mat + mat->ofsDictPlttToMatList);

    if (pTex != 0 && pTex->plttInfo.ofsDict != 0) {
        NNSG3dResDict *plttDict = (NNSG3dResDict *) ((u8 *) pTex + pTex->plttInfo.ofsDict);
        if (plttDict != 0 && plttDataIdx < plttDict->numEntry) {
            u16 ofsEntry = plttDict->ofsEntry;
            plttData     = (NNSG3dResDictPlttData *) ((u8 *) plttDict + ofsEntry + 4 +
                                                  *(u16 *) ((u8 *) plttDict + ofsEntry) * plttDataIdx);
        } else {
            plttData = 0;
        }
    } else {
        plttData = 0;
    }
    if (matDict != 0 && plttToMatIdx < matDict->numEntry) {
        u16 ofsEntry = matDict->ofsEntry;
        u16 sizeUnit = *(u16 *) ((u8 *) matDict + ofsEntry);
        bindData     = (NNSG3dResPlttToMatIdx *) ((u8 *) matDict + ofsEntry + 4 + sizeUnit * plttToMatIdx);
    } else {
        bindData = 0;
    }

    if (bindData != 0 && !(bindData->flag & 1)) {
        func_020be9cc(mat, bindData, pTex, plttData);
        return 1;
    }
    return 0;
}
