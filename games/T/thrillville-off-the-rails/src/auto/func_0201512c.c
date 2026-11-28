/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_Init from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
extern void func_020248dc(void);
extern u32 func_02021a1c(void);
extern u32 data_020dff64;
extern u16 data_020ec098;
extern void func_020152b0(void);
extern void func_02020db4(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_020211c8(u32 data, void *dest, u32 size);
extern u32 data_020dff64;
extern u16 data_020ec098;
void func_0201512c(void) {
    (*(vu16 *) 0x04000304) |= 0x8000;
    (*(vu16 *) 0x04000304) = ((*(vu16 *) 0x04000304) & ~0x20e) | 0x20e;
    (*(vu16 *) 0x04000304) |= 1;
    func_020152b0();

    while (data_020ec098 == 0) {
        s32 lockId = func_02021a1c();
        if (lockId == -3) {
            func_020248dc();
        }
        data_020ec098 = lockId;
    }

    (*(vu16 *) 0x04000004)          = 0;
    (*(u32 *) ((0x04000000) | 0x0)) = 0;

    if (data_020dff64 != -1) {
        func_02020db4(data_020dff64, (void *) &(*(vu16 *) ((0x04000000) | 0x8)), 0, 0x60);
        (*(u16 *) ((0x04000000) | 0x6c)) = 0;
        func_02020db4(data_020dff64, (void *) &(*(u32 *) ((0x04001000) | 0x0)), 0, 0x70);
    } else {
        func_020211c8(0, (void *) &(*(vu16 *) ((0x04000000) | 0x8)), 0x60);
        (*(u16 *) ((0x04000000) | 0x6c)) = 0;
        func_020211c8(0, (void *) &(*(u32 *) ((0x04001000) | 0x0)), 0x70);
    }

    (*(u16 *) ((0x04000000) | 0x20)) = 0x100;
    (*(u16 *) ((0x04000000) | 0x26)) = 0x100;
    (*(u16 *) ((0x04000000) | 0x30)) = 0x100;
    (*(u16 *) ((0x04000000) | 0x36)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x20)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x26)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x30)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x36)) = 0x100;
}
