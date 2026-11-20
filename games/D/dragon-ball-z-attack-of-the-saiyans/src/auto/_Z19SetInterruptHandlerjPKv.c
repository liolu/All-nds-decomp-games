/* compiler: 2.0/sp1p5 -O3,s */
/* func_02077480 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef void (*UnkIrqFunction)(void);
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqFunction data_027e0000[22];
extern UnkIrqCallbackInfo data_020d859c[8];
extern void _Z19SetInterruptHandlerjPKv(u32 mask, UnkIrqFunction func);
void _Z19SetInterruptHandlerjPKv(u32 mask, UnkIrqFunction func) {
    s32 i;
    for (i = 0; i < 22; i++) {
        if (mask & 1) {
            UnkIrqCallbackInfo *info = 0;

            if (8 <= i && i <= 11) {
                info = &data_020d859c[i - 8];
            } else if (3 <= i && i <= 6) {
                info = &data_020d859c[i + 1];
            } else {
                data_027e0000[i] = func;
            }

            if (info != 0) {
                info->func   = (void (*)(void *)) func;
                info->arg    = 0;
                info->enable = 1;
            }
        }
        mask >>= 1;
    }
}
