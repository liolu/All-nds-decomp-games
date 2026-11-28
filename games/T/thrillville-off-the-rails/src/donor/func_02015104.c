/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_SetVCountEqVal from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/gx/auto/GX_SetVCountEqVal.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef int s32;
void func_02015104(s32 value) {
    (*(volatile u16 *) 0x04000004) =
        (u16) (((*(volatile u16 *) 0x04000004) & 0x3f) | ((value & 0xff) << 8) | ((value & 0x100) >> 1));
}
