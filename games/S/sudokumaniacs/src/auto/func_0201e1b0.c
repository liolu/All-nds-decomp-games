/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u64 vu64;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern void func_0201c2b0(u32 timerNo, void (*func)(void *), void *arg);
extern BOOL data_0203e080;
extern vu64 data_0203e084;
extern void func_0201e1b0(void);

/* func_02079b88 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_tick.c (license: none), reused by
 * tools/donor_match.py */
void func_0201e1b0(void) {
    data_0203e084++;

    if (data_0203e080) {
        (*(vu16 *) 0x04000102) = 0;
        (*(vu16 *) 0x04000100) = 0;
        (*(vu16 *) 0x04000102) = 0xc1;
        data_0203e080          = 0;
    }

    func_0201c2b0(0, (void (*)(void *)) func_0201e1b0, 0);
}
