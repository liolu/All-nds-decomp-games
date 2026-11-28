/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02070790 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_anm_texpat.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef short s16;
typedef long fx32;
typedef s16 fx16;
extern fx32 func_02014858(fx32 numer, fx32 denom);
typedef struct {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS;
    fx32 scaleT;
    fx16 sinR;
    fx16 cosR;
    fx32 transS;
    fx32 transT;
    u16 origW;
    u16 origH;
    fx32 magW;
    fx32 magH;
} UnkMatAnmResult;
typedef struct {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
} UnkResDict;
typedef struct {
    char name[16];
} UnkResName;
extern void *func_0207b514(const UnkResDict *dict, const UnkResName *name);
typedef struct {
    u32 vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
} UnkResTexInfo;
typedef struct {
    u32 vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
    u32 ofsTexPlttIdx;
} UnkResTex4x4Info;
typedef struct {
    u32 vramKey;
    u16 sizePltt;
    u16 flag;
    u16 ofsDict;
    u16 dummy_;
    u32 ofsPlttData;
} UnkResPlttInfo;
typedef struct {
    u32 kind;
    u32 size;
    UnkResTexInfo texInfo;
    UnkResTex4x4Info tex4x4Info;
    UnkResPlttInfo plttInfo;
    UnkResDict dict;
} UnkResTex;
typedef struct {
    u32 texImageParam;
    u32 extraParam;
} UnkResDictTexData;
void func_0207d620(const UnkResTex *tex, const UnkResName *name, UnkMatAnmResult *result) {
    const UnkResDictTexData *data = func_0207b514(&tex->dict, name);
    u32 vramAddr;
    u32 w, h;

    if ((data->texImageParam & 0x1c000000) != 0x14000000) {
        vramAddr = (u16) tex->texInfo.vramKey;
    } else {
        vramAddr = (u16) tex->tex4x4Info.vramKey;
    }

    result->prmTexImage &= 0xc00f0000;
    result->prmTexImage |= data->texImageParam + vramAddr;
    result->origW = data->extraParam & 0x7ff;
    result->origH = (data->extraParam & (0x7ff << 11)) >> 11;

    w            = data->extraParam & 0x7ff;
    h            = (data->extraParam >> 11) & 0x7ff;
    result->magW = (w == result->origW) ? 0x1000 : func_02014858(w << 12, result->origW << 12);
    result->magH = (h == result->origH) ? 0x1000 : func_02014858(h << 12, result->origH << 12);
}
