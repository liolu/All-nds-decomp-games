/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02077360 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_irqwait.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef volatile u32 vu32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern u8 data_027e0000[];
extern UnkIrqCallbackInfo data_0212d7c0[8];
extern u16 data_020f94f0[8];
extern u32 func_020bc5f4(u32 mask);
void func_020bc520(int index) {
    u32 mask             = 1 << data_020f94f0[index];
    void (*func)(void *) = data_0212d7c0[index].func;

    data_0212d7c0[index].func = 0;
    if (func != 0) {
        func(data_0212d7c0[index].arg);
    }

    (*(vu32 *) ((u32) data_027e0000 + 0x3FF8)) |= mask;

    if (!data_0212d7c0[index].enable) {
        func_020bc5f4(mask);
    }
}
