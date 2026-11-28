/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern u32 data_020dff64;
extern void func_02020db4(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_020211c8(u32 data, void *dest, u32 size);
extern void func_02016a00(void);
extern void func_02020be8(u32 dmaNo, void *dest, u32 data, u32 size, void (*callback)(void *), void *arg);

/* func_02065444 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/g3x.c (license: none), reused by
 * tools/donor_match.py */
void func_02016a00(void) {
    s32 i;

    if (data_020dff64 != -1) {
        func_02020be8(data_020dff64, (void *) 0x04000330, 0, 0x10, 0, 0);
        func_02020db4(data_020dff64, (void *) 0x04000360, 0, 0x60);
    } else {
        func_020211c8(0, (void *) 0x04000330, 0x10);
        func_020211c8(0, (void *) 0x04000360, 0x60);
    }
    for (i = 0; i < 0x20; i++) {
        (*(vu32 *) 0x040004d0) = 0;
    }
}
