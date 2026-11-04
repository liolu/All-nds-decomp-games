/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ba2d0 from projets/eyeshield-21/src/auto/func_020ba2d0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
void func_020586d8(BOOL enable, s32 fogMode, s32 fogSlope, s32 fogOffset) {
    if (enable) {
        (*(vu16 *) 0x0400035c) = fogOffset;
        (*(vu16 *) 0x04000060) = ((*(vu16 *) 0x04000060) & ~0x3f40) | ((fogSlope << 8) | (fogMode << 6) | 0x80);
    } else {
        (*(vu16 *) 0x04000060) &= (u16) ~0x3080;
    }
}
