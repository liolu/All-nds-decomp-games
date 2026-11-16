/* compiler: 2.0/sp1p5 -O2,s */
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
extern UnkIrqCallbackInfo data_021e1638[8];
extern u16 data_02110ca4[8];
extern u32 func_020d1204(u32 mask);
void func_020d0ee4(int index) {
    u32 mask             = 1 << data_02110ca4[index];
    void (*func)(void *) = data_021e1638[index].func;

    data_021e1638[index].func = 0;
    if (func != 0) {
        func(data_021e1638[index].arg);
    }

    (*(vu32 *) ((u32) data_027e0000 + 0x3FF8)) |= mask;

    if (!data_021e1638[index].enable) {
        func_020d1204(mask);
    }
}
