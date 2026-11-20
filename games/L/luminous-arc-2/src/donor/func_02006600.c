/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_SetTick from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_SetTick.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef struct OsAlarmState {
    u8 pad_00[4];
    u32 bNeedResetTimer;
    u32 nTickCounterLo;
    u32 nTickCounterHi;
} OsAlarmState;
extern OsAlarmState data_02147c38;
extern int func_02006be0(void);
extern void func_02006bf4(int state);
void func_02006600(u64 nTick) {
    int state = func_02006be0();

    (*(volatile u32 *) 0x04000214) = 8;
    data_02147c38.bNeedResetTimer  = 1;
    data_02147c38.nTickCounterLo   = (u32) (nTick >> 16);
    data_02147c38.nTickCounterHi   = (u32) (nTick >> 48);
    (*(volatile u16 *) 0x04000102) = 0;
    (*(volatile u16 *) 0x04000100) = (u16) (nTick & 0xffff);
    (*(volatile u16 *) 0x04000102) = 0xc1;
    func_02006bf4(state);
}
