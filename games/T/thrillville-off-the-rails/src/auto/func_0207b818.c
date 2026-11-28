/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206e968 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_res_struct.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef short s16;
typedef s16 fx16;
typedef struct NNSG3dResDict {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 unk_04;
    u16 ofsEntry;
} NNSG3dResDict;
typedef struct UnkTexPatFV {
    u16 idxFrame;
    u8 idxTex;
    u8 idxPltt;
} UnkTexPatFV;
typedef struct UnkTexPatDictData {
    u16 numFV;
    u16 flag;
    fx16 ratioDataFrame;
    u16 offset;
} UnkTexPatDictData;
typedef struct UnkTexPatAnm {
    u8 unk_00[0xc];
    NNSG3dResDict dict;
} UnkTexPatAnm;
extern const UnkTexPatDictData *func_0207b88c(const UnkTexPatAnm *pat, u32 idx);
const UnkTexPatFV *func_0207b818(const UnkTexPatAnm *pat, u32 idx, u32 frame) {
    const UnkTexPatDictData *d = func_0207b88c(pat, idx);
    const UnkTexPatFV *fv      = (const UnkTexPatFV *) ((u8 *) pat + d->offset);
    u32 i                      = (u32) (d->ratioDataFrame * frame) >> 12;

    while (i > 0 && fv[i].idxFrame >= frame) {
        i--;
    }
    while (i + 1 < d->numFV && fv[i + 1].idxFrame <= frame) {
        i++;
    }
    return &fv[i];
}
const UnkTexPatDictData *func_0207b88c(const UnkTexPatAnm *pat, u32 idx);
