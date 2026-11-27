/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G3dMdlGetMdlFogEnableFlag from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSystem/src/g3d_model.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef s32 fx32;
typedef s16 fx16;
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
typedef struct NNSG3dResMdl_ {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u32 ofsShp;
    u32 ofsEvpMtx;
    NNSG3dResMdlInfo info;
    NNSG3dResNodeInfo nodeInfo;
} NNSG3dResMdl;
typedef struct G3dResMatData {
    u16 itemTag;
    u16 size;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 polygonAttrMask;
    u32 texImageParam;
    u32 texImageParamMask;
    u16 texPlttBase;
    u16 flag;
    u16 origWidth;
    u16 origHeight;
    fx32 scaleS;
    fx32 scaleT;
    u8 texMtxData[];
} G3dResMatData;
extern u32 func_020c342c(const NNSG3dResMdl *pResMdl, u32 matID);
static inline u8 *GetMatBlock2(NNSG3dResMdl *pResMdl) {
    if (pResMdl && pResMdl->ofsMat) {
        return (u8 *) pResMdl + pResMdl->ofsMat;
    }
    return ((void *) 0);
}
static inline u8 *GetDictData2(u32 idx, u8 *pDict) {
    if (pDict && idx < ((NNSG3dResDict *) pDict)->numEntry) {
        u32 ofsEntry = ((NNSG3dResDict *) pDict)->ofsEntry;
        u32 sizeUnit = *(u16 *) ((u32) pDict + ofsEntry);
        u8 *pData    = (u8 *) ((u32) pDict + ofsEntry + 4);
        return (u8 *) ((u32) pData + sizeUnit * idx);
    }
    return ((void *) 0);
}
static inline G3dResMatData *GetMatData2(u8 *pResMat, u32 idx) {
    if (pResMat) {
        idx = (u32) GetDictData2(idx, pResMat + 4);
        if (idx) {
            return (G3dResMatData *) (pResMat + *(u32 *) idx);
        }
    }
    return ((void *) 0);
}
static inline G3dResMatData *GetMdlMatData(NNSG3dResMdl *pResMdl, u32 matID) {
    return GetMatData2(GetMatBlock2(pResMdl), matID);
}
u32 func_020c342c(const NNSG3dResMdl *pResMdl, u32 matID) {
    G3dResMatData *pMatData = GetMdlMatData((NNSG3dResMdl *) pResMdl, matID);
    return pMatData->prmPolygonAttr & 0x8000;
}
