/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_02067278(void);
extern u32 func_0206728c(u32 state);
extern u32 data_020e666c;
extern u16 data_020e6670[9];
u32 func_020675bc(register u32 value);

/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
void func_020675c4(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_02067278();

    mask = bank & data_020e666c & 0x1ff;

    while (1) {
        s32 i = 31 - func_020675bc(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_020e6670[i] == lockID) {
            data_020e6670[i] = 0;
            data_020e666c &= ~(1 << i);
        }
    }
    func_0206728c(enabled);
}
