/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214b720 from https://github.com/RonyxDumb/mkds src/arm9/0214b720_func_0214b720.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020670c8();
extern void func_02068b8c();
extern s32 data_02184624;
extern u32 data_02184620;
extern u32 data_0218461c;
#pragma thumb off
void func_02068b8c() {
    data_02184624 = (s32) func_020670c8();
    switch (data_02184624) {
        case 0:
            break;
        case 0x10:
            data_02184620 = 0x06880000;
            data_0218461c = 0x0;
            break;
        case 0x40:
            data_02184620 = 0x06894000;
            data_0218461c = 0x4000;
            break;
        case 0x20:
        case 0x60:
            data_02184620 = 0x06890000;
            data_0218461c = 0x0;
            break;
    }
}
