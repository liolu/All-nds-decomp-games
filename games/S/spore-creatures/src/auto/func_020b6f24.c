/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b6f24 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_020b6bd0(void);
extern void func_020b6f24(void);
extern void func_020b6f34(void);
void func_020b6f24(void) {
    while (1) {
        func_020b6bd0();
        func_020b6f34();
    }
}
void func_020b6f34(void);
