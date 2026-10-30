/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02068f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_softsprite.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
void func_0202989c(s32 u0, s32 u1, s32 v0, s32 v1);
void func_02029a5c(int x, int y, int z, int w, int h, int u0, int v0, int u1, int v1) {
    (*(vu32 *) 0x04000470) = x << 12;
    (*(vu32 *) 0x04000470) = y << 12;
    (*(vu32 *) 0x04000470) = z << 12;
    (*(vu32 *) 0x0400046C) = w << 12;
    (*(vu32 *) 0x0400046C) = h << 12;
    (*(vu32 *) 0x0400046C) = 0x1000;
    func_0202989c(u0 << 12, u1 << 12, v0 << 12, v1 << 12);
}
