/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FX_DivFx64c from projets/blue-dragon-awakened-shadow/src/donor/FX_DivFx64c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned short u16;
typedef long long s64;
typedef int s32;
typedef volatile u16 vu16;
extern s64 func_020801cc(s32 denom);
extern void func_02080288(s32 denom);
s64 func_020801cc(s32 denom) {
    func_02080288(denom);
    while ((*(vu16 *) 0x04000280) & 0x8000) {
    }
    return (*(u64 *) 0x040002A0);
}
extern void func_02080288(s32 denom);
