/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
extern int func_0200fa98();

extern void func_0200faac(int mask);

extern int OSi_SystemCallbackInSwitchThread[];

typedef unsigned int u32;

extern u32 func_020b6bbc(void);

extern void func_020b6f34(void);

extern void func_020b5550(void *arg);

/* func_02078bc4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_thread.c (license: none), reused by
 * tools/donor_match.py */
void func_020b5550(void *arg) {
    func_020b6bbc();
    while (1) {
        func_020b6f34();
    }
}
