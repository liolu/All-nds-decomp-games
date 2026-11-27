/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c5cfc from https://github.com/Yokimitsuro/khdays-decomp libs/nns/g3d/calls/func_020c5cfc.c (license:
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
typedef union NNSG3dResName_ {
    char name[(16)];
    u32 val[((16) / sizeof(u32))];
} NNSG3dResName;
typedef struct NNSG3dResDictPlttData_ {
    u16 offset;
    u16 flag;
} NNSG3dResDictPlttData;
inline u32 NNS_GfdGetTexKeyAddr(NNSGfdTexKey memKey) {
    return (u32) (((0x0000FFFF & memKey)) << 3);
}
extern void *func_020c3818(const NNSG3dResDict *dict, const NNSG3dResName *name);
extern inline NNSG3dResDictPlttData *NNS_G3dGetPlttDataByName(const NNSG3dResTex *tex, const NNSG3dResName *name);
inline NNSG3dResDictPlttData *NNS_G3dGetPlttDataByName(const NNSG3dResTex *tex, const NNSG3dResName *name) {
    NNSG3dResDict *dict;
    if (tex && tex->plttInfo.ofsDict != 0) {
        dict = (NNSG3dResDict *) ((u8 *) tex + tex->plttInfo.ofsDict);
        return (NNSG3dResDictPlttData *) func_020c3818(dict, name);
    } else {
        return ((void *) 0);
    }
}
void func_020c5cfc(const NNSG3dResTex *pTex, const NNSG3dResName *pPlttName, NNSG3dMatAnmResult *pResult) {

    {

        const NNSG3dResDictPlttData *pPlttData = NNS_G3dGetPlttDataByName(pTex, pPlttName);
        u16 plttBase                           = pPlttData->offset;
        u16 vramOffset                         = (u16) (NNS_GfdGetTexKeyAddr(pTex->plttInfo.vramKey) >> 3);

        if (!(pPlttData->flag & 1)) {

            plttBase >>= 1;
            vramOffset >>= 1;
        }

        pResult->prmTexPltt = (u32) (plttBase + vramOffset);
    }
}
