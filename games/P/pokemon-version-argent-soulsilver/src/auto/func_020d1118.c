/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02077594 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo data_021e1638[8];
extern void func_020d1118(u32 dmaNo, void (*func)(void *), void *arg);
extern u32 _Z24EnableSpecificInterruptsj(u32 mask);
extern UnkIrqCallbackInfo data_021e1638[8];
void func_020d1118(u32 dmaNo, void (*func)(void *), void *arg) {
    u32 mask                    = 1 << (dmaNo + 8);
    data_021e1638[dmaNo].func   = func;
    data_021e1638[dmaNo].arg    = arg;
    data_021e1638[dmaNo].enable = _Z24EnableSpecificInterruptsj(mask) & mask;
}
u32 _Z24EnableSpecificInterruptsj(u32 mask);
