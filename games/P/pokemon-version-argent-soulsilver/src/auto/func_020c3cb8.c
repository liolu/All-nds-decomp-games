/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c3cb8 from https://github.com/Yokimitsuro/khdays-decomp
 * libs/nns/g3d/auto/func_020c3cb8.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef short s16;
typedef s16 fx16;
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
typedef struct NNSG3dResAnmHeader_ {
    u8 category0;
    u8 revision;
    u16 category1;
} NNSG3dResAnmHeader;
typedef struct NNSG3dResDictEntryHeader_ {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} NNSG3dResDictEntryHeader;
typedef struct NNSG3dResDictTexPatAnmData_ {
    u16 numFV;
    u16 flag;
    fx16 ratioDataFrame;
    u16 offset;
} NNSG3dResDictTexPatAnmData;
typedef struct NNSG3dResTexPatAnm_ {
    NNSG3dResAnmHeader anmHeader;
    u16 numFrame;
    u8 numTex;
    u8 numPltt;
    u16 ofsTexName;
    u16 ofsPlttName;
    NNSG3dResDict dict;
} NNSG3dResTexPatAnm;
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
const NNSG3dResDictTexPatAnmData *func_020c3cb8(const NNSG3dResTexPatAnm *pPatAnm, u32 idx) {
    return (const NNSG3dResDictTexPatAnmData *) NNS_G3dGetResDataByIdx(&pPatAnm->dict, idx);
}
