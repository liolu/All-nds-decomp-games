/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020d3f48 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 _Z20DisableIRQInterruptsv(void);
extern void func_020d3f48(void);
extern void func_020d3f58(void);
void func_020d3f48(void) {
    while (1) {
        _Z20DisableIRQInterruptsv();
        func_020d3f58();
    }
}
void func_020d3f58(void);
