/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_ClearAlarmBit from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_ClearAlarmBit.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern unsigned short data_020f1ca4;
void func_020b64a0(int bit) {
    int mask = ~(1 << bit);
    data_020f1ca4 &= mask;
}
