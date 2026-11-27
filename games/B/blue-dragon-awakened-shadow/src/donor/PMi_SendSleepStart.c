/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_SendSleepStart from https://github.com/kh-recoded-decomp/kh-recoded-decomp eu/libs/nitro/spi/calls/PMi_SendSleepStart.c
 * (license: MIT), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef int BOOL;
extern void PMi_TryToSendPxiDataTillSuccess(u32 *words, int count);
extern BOOL PMi_SetLCDPower(int sw, int led, BOOL skip, BOOL isSync);
u32 PMi_SendSleepStart(u16 trigger, u16 keyIntrData) {
    u32 command[2];

    command[0] = 0x03006000;
    PMi_TryToSendPxiDataTillSuccess(command, 1);

    while (PMi_SetLCDPower(0, 2, 0, 1) != 1) {
    }

    command[0] = (trigger & 0xff) | 0x02006200;
    command[1] = (keyIntrData & 0xffff) | 0x01010000;
    PMi_TryToSendPxiDataTillSuccess(command, 2);

    return 0;
}
