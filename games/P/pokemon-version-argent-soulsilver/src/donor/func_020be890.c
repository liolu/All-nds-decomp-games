/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G3dForceBindMdlTex from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSystem/src/g3d_mdl_bind.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
typedef s16 fx16;
typedef u32 NNSGfdTexKey;
typedef struct NNSG3dResDataBlockHeader_ {
    union {
        u32 kind;
        char chr[4];
    };
    u32 size;
} NNSG3dResDataBlockHeader;
typedef struct NNSG3dResTexInfo_ {
    NNSGfdTexKey vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
} NNSG3dResTexInfo;
typedef struct NNSG3dResTex4x4Info_ {
    NNSGfdTexKey vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
    u32 ofsTexPlttIdx;
} NNSG3dResTex4x4Info;
typedef struct NNSG3dResPlttInfo_ {
    NNSGfdTexKey vramKey;
    u16 sizePltt;
    u16 flag;
    u16 ofsDict;
    u16 dummy_;
    u32 ofsPlttData;
} NNSG3dResPlttInfo;
typedef struct NNSG3dResMdlInfo_ {
    u8 sbcType;
    u8 scalingRule;
    u8 texMtxMode;
    u8 numNode;
    u8 numMat;
    u8 numShp;
    u8 firstUnusedMtxStackID;
    u8 dummy_;
    fx32 posScale;
    fx32 invPosScale;
    u16 numVertex;
    u16 numPolygon;
    u16 numTriangle;
    u16 numQuad;
    fx16 boxX, boxY, boxZ;
    fx16 boxW, boxH, boxD;
    fx32 boxPosScale;
    fx32 boxInvPosScale;
} NNSG3dResMdlInfo;
typedef struct NNSG3dResDictTreeNode_ {
    u8 refBit;
    u8 idxLeft;
    u8 idxRight;
    u8 idxEntry;
} NNSG3dResDictTreeNode;
typedef struct NNSG3dResDict_ {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
    NNSG3dResDictTreeNode node[1];
} NNSG3dResDict;
typedef struct NNSG3dResNodeInfo_ {
    NNSG3dResDict dict;
} NNSG3dResNodeInfo;
typedef struct NNSG3dResTex_ {
    NNSG3dResDataBlockHeader header;
    NNSG3dResTexInfo texInfo;
    NNSG3dResTex4x4Info tex4x4Info;
    NNSG3dResPlttInfo plttInfo;
    NNSG3dResDict dict;
} NNSG3dResTex;
typedef struct NNSG3dResMdl_ {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u32 ofsShp;
    u32 ofsEvpMtx;
    NNSG3dResMdlInfo info;
    NNSG3dResNodeInfo nodeInfo;
} NNSG3dResMdl;
typedef struct NNSG3dResDictEntryHeader_ {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} NNSG3dResDictEntryHeader;
static inline void *NNS_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx) {
    NNSG3dResDictEntryHeader *hdr;

    if (dict != ((void *) 0) && idx < dict->numEntry) {
        hdr = (NNSG3dResDictEntryHeader *) ((u8 *) dict + dict->ofsEntry);
        return (void *) (&hdr->data[0] + hdr->sizeUnit * idx);
    } else {
        return ((void *) 0);
    }
}
typedef struct G3dResMat {
    u16 ofsDictTexToMatList;
    u16 ofsDictPlttToMatList;
    NNSG3dResDict dict;
} G3dResMat;
typedef struct G3dResBindEntry {
    u16 ofsMatIdxList;
    u8 numMat;
    u8 flag;
} G3dResBindEntry;
typedef struct G3dResTexData {
    u32 texImageParam;
    u32 extraParam;
} G3dResTexData;
extern void func_020be5a8(G3dResMat *pMat, G3dResBindEntry *pBind, const NNSG3dResTex *pTex, const G3dResTexData *pTexData);
extern BOOL func_020be890(NNSG3dResMdl *pResMdl, const NNSG3dResTex *pTex, u32 texToMatListIdx, u32 texIdx);
static inline G3dResMat *GetResMat(NNSG3dResMdl *pResMdl) {
    if (pResMdl && pResMdl->ofsMat) {
        return (G3dResMat *) ((u8 *) pResMdl + pResMdl->ofsMat);
    }
    return ((void *) 0);
}
void func_020be5a8(G3dResMat *pMat, G3dResBindEntry *pBind, const NNSG3dResTex *pTex, const G3dResTexData *pTexData);
BOOL func_020be890(NNSG3dResMdl *pResMdl, const NNSG3dResTex *pTex, u32 texToMatListIdx, u32 texIdx) {
    G3dResMat *pMat               = GetResMat(pResMdl);
    NNSG3dResDict *pDict          = (NNSG3dResDict *) ((u8 *) pMat + pMat->ofsDictTexToMatList);
    const G3dResTexData *pTexData = pTex ? NNS_G3dGetResDataByIdx(&pTex->dict, texIdx) : ((void *) 0);
    G3dResBindEntry *pBind        = NNS_G3dGetResDataByIdx(pDict, texToMatListIdx);
    if (!pBind) {
        return 0;
    }
    func_020be5a8(pMat, pBind, pTex, pTexData);
    return 1;
}
