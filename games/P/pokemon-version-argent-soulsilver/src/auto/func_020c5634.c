/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c5634 from https://github.com/Yokimitsuro/khdays-decomp libs/nns/g3d/calls/func_020c5634.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef short s16;
typedef signed long s32;
typedef s16 fx16;
typedef s32 fx32;
typedef u32 NNSGfdTexKey;
typedef enum {
    NNS_G3D_MATANM_RESULTFLAG_TEXMTX_SCALEONE  = 0x00000001,
    NNS_G3D_MATANM_RESULTFLAG_TEXMTX_ROTZERO   = 0x00000002,
    NNS_G3D_MATANM_RESULTFLAG_TEXMTX_TRANSZERO = 0x00000004,
    NNS_G3D_MATANM_RESULTFLAG_TEXMTX_SET       = 0x00000008,
    NNS_G3D_MATANM_RESULTFLAG_TEXMTX_MULT      = 0x00000010,
    NNS_G3D_MATANM_RESULTFLAG_WIREFRAME        = 0x00000020
} NNSG3dMatAnmResultFlag;
typedef struct NNSG3dMatAnmResult_ {
    NNSG3dMatAnmResultFlag flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS, scaleT;
    fx16 sinR, cosR;
    fx32 transS, transT;
    u16 origWidth, origHeight;
    fx32 magW, magH;
} NNSG3dMatAnmResult;
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
typedef struct NNSG3dAnmObj_ {
    fx32 frame;
    fx32 ratio;
    void *resAnm;
    void *funcAnm;
    struct NNSG3dAnmObj_ *next;
    const NNSG3dResTex *resTex;
    u8 priority;
    u8 numMapData;
    u16 mapData[1];
} NNSG3dAnmObj;
typedef struct NNSG3dResAnmHeader_ {
    u8 category0;
    u8 revision;
    u16 category1;
} NNSG3dResAnmHeader;
typedef struct NNSG3dResMatCAnm_ {
    NNSG3dResAnmHeader anmHeader;
    u16 numFrame;
    u16 flag;
    NNSG3dResDict dict;
} NNSG3dResMatCAnm;
typedef struct NNSG3dResDictEntryHeader_ {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} NNSG3dResDictEntryHeader;
typedef struct NNSG3dResDictMatCAnmData_ {
    u32 diffuse;
    u32 ambient;
    u32 specular;
    u32 emission;
    u32 polygon_alpha;
} NNSG3dResDictMatCAnmData;
extern s32 FX_Whole(fx32 v);
static inline s32 FX_Whole(fx32 v) {
    return (s32) (v >> 12);
}
extern inline void *NNS_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx);
inline void *NNS_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx) {
    NNSG3dResDictEntryHeader *hdr;
    if (dict != ((void *) 0) && idx < dict->numEntry) {
        hdr = (NNSG3dResDictEntryHeader *) ((u8 *) dict + dict->ofsEntry);
        return (void *) (&hdr->data[0] + hdr->sizeUnit * idx);
    } else {
        return ((void *) 0);
    }
}
extern u16 func_020c530c(const NNSG3dResMatCAnm *pAnm, u32 info, u32 frame);
extern u16 func_020c5474(const NNSG3dResMatCAnm *pAnm, u32 info, u32 frame);
static inline void GetMatColAnm_(const NNSG3dResMatCAnm *pAnm, u16 idx, u32 frame, NNSG3dMatAnmResult *pResult) {
    {
        u16 diffuse, ambient, emission, specular, polygon_alpha;
        const NNSG3dResDictMatCAnmData *pAnmData = (const NNSG3dResDictMatCAnmData *) NNS_G3dGetResDataByIdx(&pAnm->dict, idx);
        diffuse                                  = func_020c530c(pAnm, pAnmData->diffuse, frame);
        ambient                                  = func_020c530c(pAnm, pAnmData->ambient, frame);
        pResult->prmMatColor0 =
            ((u32) ((diffuse) | ((ambient) << 16) | ((((pResult->prmMatColor0 & 0x00008000)) != 0) << 15)));
        emission = func_020c530c(pAnm, pAnmData->emission, frame);
        specular = func_020c530c(pAnm, pAnmData->specular, frame);
        pResult->prmMatColor1 =
            ((u32) ((specular) | ((emission) << 16) | ((((pResult->prmMatColor1 & 0x00008000)) != 0) << 15)));
        polygon_alpha           = func_020c5474(pAnm, pAnmData->polygon_alpha, frame);
        pResult->prmPolygonAttr = (pResult->prmPolygonAttr & ~0x001f0000) | (polygon_alpha << 16);
    }
}
void func_020c5634(NNSG3dMatAnmResult *pResult, const NNSG3dAnmObj *pAnmObj, u32 dataIdx) {
    {
        const NNSG3dResMatCAnm *pMatAnm = (const NNSG3dResMatCAnm *) pAnmObj->resAnm;
        GetMatColAnm_(pMatAnm, (u16) dataIdx, (u32) FX_Whole(pAnmObj->frame), pResult);
    }
}
