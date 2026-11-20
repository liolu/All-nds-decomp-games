/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200d110 from https://github.com/kh-recoded-decomp/kh-recoded-decomp eu/libs/nitro/spi/calls/func_0200d110.c
 * (license: MIT), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_0200d050(u32 *words, int count);
extern BOOL func_0200d85c(int sw, int led, BOOL skip, BOOL isSync);
u32 func_0200d110(u16 trigger, u16 keyIntrData) {
    u32 command[2];

    command[0] = 0x03006000;
    func_0200d050(command, 1);

    while (func_0200d85c(0, 2, 0, 1) != 1) {
    }

    command[0] = (trigger & 0xff) | 0x02006200;
    command[1] = (keyIntrData & 0xffff) | 0x01010000;
    func_0200d050(command, 2);

    return 0;
}
