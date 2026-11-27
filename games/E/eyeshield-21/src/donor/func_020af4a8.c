/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G3dMdlGetMdlAlpha from https://github.com/7ucina/acww-decomp src/autoload_2/unk_02106020.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
static inline u32 *MatEnt(u8 *res, u32 i) {
    u8 *b = res + *(u32 *) (res + 8);
    u8 *p = b + 4 + *(u16 *) (b + 10);
    return (u32 *) (b + *(u32 *) (p + *(u16 *) p * i + 4));
}
u32 func_020af4a8(u8 *res, u32 i) {
    u32 *m = MatEnt(res, i);
    return (m[3] & 0x1f0000) >> 16;
}
