/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02006f34 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_02006be0(void);
extern void func_02006f34(void);
extern void func_02006f44(void);
void func_02006f34(void) {
    while (1) {
        func_02006be0();
        func_02006f44();
    }
}
void func_02006f44(void);
