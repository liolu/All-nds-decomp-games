/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 _Z20DisableIRQInterruptsv(void);
extern u32 _Z20SetIRQInterruptStatei(u32 state);
extern u32 data_021e1a28;
extern u16 data_021e1a2c[9];
u32 func_020d3cf4(register u32 value);

/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
void func_020d3df0(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = _Z20DisableIRQInterruptsv();

    mask = bank & data_021e1a28 & 0x1ff;

    while (1) {
        s32 i = 31 - func_020d3cf4(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_021e1a2c[i] == lockID) {
            data_021e1a2c[i] = 0;
            data_021e1a28 &= ~(1 << i);
        }
    }
    _Z20SetIRQInterruptStatei(enabled);
}
