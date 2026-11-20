/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
extern int func_0200fa98();

extern void func_0200faac(int mask);

extern int OSi_SystemCallbackInSwitchThread[];

typedef unsigned int u32;

extern u32 func_02006bcc(void);

extern void func_02006f44(void);

extern void func_0200545c(void *arg);

/* func_02078bc4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_thread.c (license: none), reused by
 * tools/donor_match.py */
void func_0200545c(void *arg) {
    func_02006bcc();
    while (1) {
        func_02006f44();
    }
}
