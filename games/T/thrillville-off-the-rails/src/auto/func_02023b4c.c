/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u64 vu64;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern void func_02021844(u32 timerNo, void (*func)(void *), void *arg);
extern BOOL data_020ec698;
extern vu64 data_020ec69c;
extern void func_02023b4c(void);

/* func_02079b88 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_tick.c (license: none), reused by
 * tools/donor_match.py */
void func_02023b4c(void) {
    data_020ec69c++;

    if (data_020ec698) {
        (*(vu16 *) 0x04000102) = 0;
        (*(vu16 *) 0x04000100) = 0;
        (*(vu16 *) 0x04000102) = 0xc1;
        data_020ec698          = 0;
    }

    func_02021844(0, (void (*)(void *)) func_02023b4c, 0);
}
