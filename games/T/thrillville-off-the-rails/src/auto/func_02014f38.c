/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063920 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_020dff64;
extern void func_02020ad0(u32 dmaNo);
extern u32 data_020dff64;
u32 func_02014f38(u32 dmaNo) {
    u32 prev = data_020dff64;
    u32 e;
    if (prev != -1) {
        func_02020ad0(prev);
    }
    e             = func_02024624();
    data_020dff64 = dmaNo;
    func_02024638(e);
    return prev;
}
