/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02068e14 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_softsprite.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef short s16;
typedef volatile u32 vu32;
void func_020b729c(s32 u0, s32 u1, s32 v0, s32 v1) {
    (*(vu32 *) 0x04000500) = 1;
    (*(vu32 *) 0x04000488) = ((u32) (u16) (s16) ((u0) >> 8) | ((u32) (u16) (s16) ((v1) >> 8) << 16));
    (*(vu32 *) 0x0400048c) = 0x10000000;
    (*(vu32 *) 0x0400048c) = 0;
    (*(vu32 *) 0x04000488) = ((u32) (u16) (s16) ((u1) >> 8) | ((u32) (u16) (s16) ((v1) >> 8) << 16));
    (*(vu32 *) 0x0400048c) = 0x10001000;
    (*(vu32 *) 0x0400048c) = 0;
    (*(vu32 *) 0x04000488) = ((u32) (u16) (s16) ((u1) >> 8) | ((u32) (u16) (s16) ((v0) >> 8) << 16));
    (*(vu32 *) 0x0400048c) = 0x1000;
    (*(vu32 *) 0x0400048c) = 0;
    (*(vu32 *) 0x04000488) = ((u32) (u16) (s16) ((u0) >> 8) | ((u32) (u16) (s16) ((v0) >> 8) << 16));
    (*(vu32 *) 0x0400048c) = 0;
    (*(vu32 *) 0x0400048c) = 0;
    (*(vu32 *) 0x04000504) = 0;
}
