/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G3dForceBindMdlTex from https://github.com/7ucina/acww-decomp src/autoload_2/unk_02103978.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
extern void func_020f41c8(u8 *, u8 *, u8 *, u8 *);
static inline u8 *Ent(u8 *dict, u32 i) {
    u8 *p = dict + *(u16 *) (dict + 6);
    return p + 4 + *(u16 *) p * i;
}
BOOL func_020f4010(u8 *mdl, u8 *pltt, u32 i, u32 j) {
    u8 *set  = mdl + *(u32 *) (mdl + 8);
    u8 *dict = set + *(u16 *) set;
    u8 *t    = Ent(pltt + 0x3c, j);
    u8 *e    = Ent(dict, i);
    if (e == 0) {
        return 0;
    }
    func_020f41c8(set, e, pltt, t);
    return 1;
}
