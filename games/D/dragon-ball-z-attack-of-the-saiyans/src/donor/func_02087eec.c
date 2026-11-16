/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_SendSleepStart from projets/blue-dragon-awakened-shadow/src/donor/PMi_SendSleepStart.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_02087e2c(u32 *words, int count);
extern BOOL func_02088638(int sw, int led, BOOL skip, BOOL isSync);
u32 func_02087eec(u16 trigger, u16 keyIntrData) {
    u32 command[2];

    command[0] = 0x03006000;
    func_02087e2c(command, 1);

    while (func_02088638(0, 2, 0, 1) != 1) {
    }

    command[0] = (trigger & 0xff) | 0x02006200;
    command[1] = (keyIntrData & 0xffff) | 0x01010000;
    func_02087e2c(command, 2);

    return 0;
}
