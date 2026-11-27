/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020be790 from https://github.com/Yokimitsuro/khdays-decomp libs/nns/g3d/calls/func_020be790.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef short s16;
typedef signed long s32;
typedef int BOOL;
typedef s16 fx16;
typedef s32 fx32;
typedef u32 NNSGfdTexKey;
typedef struct NNSG3dResDataBlockHeader_ {
    union {
        u32 kind;
        char chr[4];
    };
    u32 size;
} NNSG3dResDataBlockHeader;
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
typedef struct NNSG3dResPlttInfo_ {
    NNSGfdTexKey vramKey;
    u16 sizePltt;
    u16 flag;
    u16 ofsDict;
    u16 dummy_;
    u32 ofsPlttData;
} NNSG3dResPlttInfo;
typedef struct NNSG3dResTex4x4Info_ {
    NNSGfdTexKey vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
    u32 ofsTexPlttIdx;
} NNSG3dResTex4x4Info;
typedef struct NNSG3dResTexInfo_ {
    NNSGfdTexKey vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
} NNSG3dResTexInfo;
typedef struct NNSG3dResTex_ {
    NNSG3dResDataBlockHeader header;
    NNSG3dResTexInfo texInfo;
    NNSG3dResTex4x4Info tex4x4Info;
    NNSG3dResPlttInfo plttInfo;
    NNSG3dResDict dict;
} NNSG3dResTex;
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
typedef struct NNSG3dResMat_ {
    u16 ofsDictTexToMatList;
    u16 ofsDictPlttToMatList;
    NNSG3dResDict dict;
} NNSG3dResMat;
typedef struct NNSG3dResDictEntryHeader_ {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} NNSG3dResDictEntryHeader;
typedef union NNSG3dResName_ {
    char name[(16)];
    u32 val[((16) / sizeof(u32))];
} NNSG3dResName;
typedef struct NNSG3dResDictTexToMatIdxData_ {
    u16 offset;
    u8 numIdx;
    u8 flag;
} NNSG3dResDictTexToMatIdxData;
typedef struct NNSG3dResDictTexData_ {
    u32 texImageParam;
    u32 extraParam;
} NNSG3dResDictTexData;
extern inline const NNSG3dResName *NNS_G3dGetResNameByIdx(const NNSG3dResDict *dict, u32 idx);
extern inline void *NNS_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx);
extern void *func_020c3818(const NNSG3dResDict *dict, const NNSG3dResName *name);
extern inline NNSG3dResMat *NNS_G3dGetMat(const NNSG3dResMdl *mdl);
extern inline NNSG3dResDictTexData *NNS_G3dGetTexDataByName(const NNSG3dResTex *tex, const NNSG3dResName *name);
inline const NNSG3dResName *NNS_G3dGetResNameByIdx(const NNSG3dResDict *dict, u32 idx) {
    NNSG3dResDictEntryHeader *hdr;
    if (dict != ((void *) 0) && idx < dict->numEntry) {
        hdr = (NNSG3dResDictEntryHeader *) ((u8 *) dict + dict->ofsEntry);
        return (NNSG3dResName *) ((u8 *) hdr + hdr->ofsName + sizeof(NNSG3dResName) * idx);
    } else {
        return ((void *) 0);
    }
}
inline void *NNS_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx) {
    NNSG3dResDictEntryHeader *hdr;
    if (dict != ((void *) 0) && idx < dict->numEntry) {
        hdr = (NNSG3dResDictEntryHeader *) ((u8 *) dict + dict->ofsEntry);
        return (void *) (&hdr->data[0] + hdr->sizeUnit * idx);
    } else {
        return ((void *) 0);
    }
}
inline NNSG3dResMat *NNS_G3dGetMat(const NNSG3dResMdl *mdl) {
    if (mdl && mdl->ofsMat != 0) {
        return (NNSG3dResMat *) ((u8 *) mdl + mdl->ofsMat);
    } else {
        return ((void *) 0);
    }
}
inline NNSG3dResDictTexData *NNS_G3dGetTexDataByName(const NNSG3dResTex *tex, const NNSG3dResName *name) {
    if (tex) {
        return (NNSG3dResDictTexData *) func_020c3818(&tex->dict, name);
    } else {
        return ((void *) 0);
    }
}
extern void func_020be5a8(NNSG3dResMat *pMat, NNSG3dResDictTexToMatIdxData *pBindData, const NNSG3dResTex *pTex,
                          const NNSG3dResDictTexData *pTexData);
BOOL func_020be790(NNSG3dResMdl *pMdl, const NNSG3dResTex *pTex) {
    NNSG3dResMat *mat;
    NNSG3dResDict *dictTex;
    u32 i;
    BOOL result = 1;

    mat     = NNS_G3dGetMat(pMdl);
    dictTex = (NNSG3dResDict *) ((u8 *) mat + mat->ofsDictTexToMatList);

    for (i = 0; i < dictTex->numEntry; ++i) {
        const NNSG3dResName *name           = NNS_G3dGetResNameByIdx(dictTex, i);
        const NNSG3dResDictTexData *texData = NNS_G3dGetTexDataByName(pTex, name);

        if (texData) {
            NNSG3dResDictTexToMatIdxData *data = (NNSG3dResDictTexToMatIdxData *) NNS_G3dGetResDataByIdx(dictTex, i);

            if (!(data->flag & 1)) {
                func_020be5a8(mat, data, pTex, texData);
            }
        } else {
            result = 0;
        }
    }
    return result;
}
