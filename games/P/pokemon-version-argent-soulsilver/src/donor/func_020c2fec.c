/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G3dMdlSetMdlCullMode from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g3d_mdl.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef u32 uptr;
typedef struct {
    u16 ofsDictTexToMatList;
    u16 ofsDictPlttToMatList;
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy;
    u16 ofsEntry;
} ResMat;
typedef struct {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u8 unused0c[0xC];
    u8 numMat;
} ResMdl;
typedef struct {
    u32 ofsMatData;
} ResDictData;
typedef struct {
    u32 unused00[3];
    u32 polyAttr;
} ResMatData;
extern void func_020c2fec(ResMdl *pMdl, u32 matIdx, u32 cullMode);
void func_020c2fec(ResMdl *pMdl, u32 matIdx, u32 cullMode) {
    ResMat *pMat;
    ResMatData *pMatData;
    u8 *pDict;

    pMat = (pMdl != 0 && pMdl->ofsMat != 0) ? (ResMat *) ((u8 *) pMdl + pMdl->ofsMat) : 0;
    if (pMat == 0) {
        goto none;
    }
    pDict = (u8 *) pMat + 4;
    if (pDict == 0) {
        goto nullent;
    }
    if (matIdx >= pMat->numEntry) {
        goto nullent;
    }
    matIdx = (uptr) (pDict + pMat->ofsEntry + 4 + (*(u16 *) (pDict + pMat->ofsEntry)) * matIdx);
    goto have;
nullent:
    matIdx = 0;
have:
    if (matIdx == 0) {
        goto none;
    }
    pMatData = (ResMatData *) ((u8 *) pMat + ((ResDictData *) matIdx)->ofsMatData);
    goto set;
none:
    pMatData = 0;
set:
    pMatData->polyAttr = (pMatData->polyAttr & ~0x000000c0u) | (cullMode << 6);
}
