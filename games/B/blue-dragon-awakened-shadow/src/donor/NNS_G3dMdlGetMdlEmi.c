/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G3dMdlGetMdlEmi from https://github.com/ntrtwl/NitroSystem libraries/g3d/src/model.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef s32 fx32;
typedef s16 fx16;
typedef u16 GXRgb;
extern const u16(*ctrdgi_fl_maxtime);
typedef u16 NNSG3dItemTag;
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
typedef struct NNSG3dResDictEntryHeader_ {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} NNSG3dResDictEntryHeader;
typedef struct NNSG3dResDictMatData_ {
    u32 offset;
} NNSG3dResDictMatData;
typedef struct NNSG3dResMatData_ {
    NNSG3dItemTag itemTag;
    u16 size;
    u32 diffAmb;
    u32 specEmi;
    u32 polyAttr;
    u32 polyAttrMask;
    u32 texImageParam;
    u32 texImageParamMask;
    u16 texPlttBase;
    u16 flag;
    u16 origWidth, origHeight;
    fx32 magW;
    fx32 magH;
} NNSG3dResMatData;
typedef struct NNSG3dResMat_ {
    u16 ofsDictTexToMatList;
    u16 ofsDictPlttToMatList;
    NNSG3dResDict dict;
} NNSG3dResMat;
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
extern inline void *NNS_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx);
extern inline NNSG3dResMat *NNS_G3dGetMat(const NNSG3dResMdl *mdl);
extern inline NNSG3dResMatData *NNS_G3dGetMatDataByIdx(const NNSG3dResMat *mat, u32 idx);
inline void *NNS_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx) {
    NNSG3dResDictEntryHeader *hdr;
    ((void) 0);

    if (dict != 0 && idx < dict->numEntry) {
        ((void) 0);
        hdr = (NNSG3dResDictEntryHeader *) ((u8 *) dict + dict->ofsEntry);
        return (void *) (&hdr->data[0] + hdr->sizeUnit * idx);
    } else {
        return 0;
    }
}
inline NNSG3dResMat *NNS_G3dGetMat(const NNSG3dResMdl *mdl) {
    ((void) 0);
    ((void) 0);

    if (mdl && mdl->ofsMat != 0) {
        return (NNSG3dResMat *) ((u8 *) mdl + mdl->ofsMat);
    } else {
        return 0;
    }
}
inline NNSG3dResMatData *NNS_G3dGetMatDataByIdx(const NNSG3dResMat *mat, u32 idx) {
    NNSG3dResDictMatData *data;
    ((void) 0);

    if (mat) {
        data = (NNSG3dResDictMatData *) NNS_G3dGetResDataByIdx(&mat->dict, idx);
        if (data) {
            ((void) 0);
            return (NNSG3dResMatData *) ((u8 *) mat + data->offset);
        }
    }

    return 0;
}
extern GXRgb NNS_G3dMdlGetMdlEmi(const NNSG3dResMdl *pMdl, u32 matID);
GXRgb NNS_G3dMdlGetMdlEmi(const NNSG3dResMdl *pMdl, u32 matID) {
    NNSG3dResMatData *data;
    ((void) 0);

    data = NNS_G3dGetMatDataByIdx(NNS_G3dGetMat(pMdl), matID);
    ((void) 0);

    return (GXRgb) ((data->specEmi & (0x001f0000 | 0x03e00000 | 0x7c000000)) >> 16);
}
