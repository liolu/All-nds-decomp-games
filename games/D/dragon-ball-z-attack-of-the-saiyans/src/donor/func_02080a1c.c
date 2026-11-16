/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b588c from projets/dragon-ball-origins/src/auto/func_020b588c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef volatile u16 vu16;
int func_02080a1c(vu16 *reg) {
    u16 mode = (u16) (*reg & 0xc000);

    if (mode == 0) {
        return 0;
    } else if (mode == (1 << 14)) {
        return *reg & 0x001f;
    } else if (mode == (2 << 14)) {
        return -(*reg & 0x001f);
    } else {
        return 0;
    }
}
