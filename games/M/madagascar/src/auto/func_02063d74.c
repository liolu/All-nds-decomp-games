/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_Terminate from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_02063cf8(void);
extern void func_02063d74(void);
extern void func_02063d5c(void);
void func_02063d74(void) {
    while (1) {
        func_02063cf8();
        func_02063d5c();
    }
}
void func_02063d5c(void);
