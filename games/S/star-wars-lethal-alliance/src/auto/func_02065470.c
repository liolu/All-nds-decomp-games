/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
extern u32 func_02067264(void);
extern void func_02067680(void);
extern void func_02065470(void *arg);

/* func_02078bc4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_thread.c (license: none), reused by
 * tools/donor_match.py */
void func_02065470(void *arg) {
    func_02067264();
    while (1) {
        func_02067680();
    }
}
