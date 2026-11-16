/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_HBlankIntr from projets/heroes-of-mana/src/nitro/gx/gx_2.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern s32 func_02080884(BOOL enabled);
s32 func_02080884(BOOL enabled) {
    s32 prev = (*(vu16 *) 0x04000004) & 0x10;
    if (enabled) {
        (*(vu16 *) 0x04000004) |= 0x10;
    } else {
        (*(vu16 *) 0x04000004) &= ~0x10;
    }
    return prev;
}
