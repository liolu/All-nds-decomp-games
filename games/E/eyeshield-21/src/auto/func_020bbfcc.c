/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214c2f8 from https://github.com/RonyxDumb/mkds src/arm9/0214c2f8_func_0214c2f8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020b8cd0();
extern void func_020bbfcc();
extern s32 data_0212d7a0;
extern u32 data_0212d7b0;
#pragma thumb off
void func_020bbfcc() {
    u32 temp      = func_020b8cd0();
    data_0212d7a0 = (s32) temp;
    switch (temp) {
        case 2:
        case 3:
            data_0212d7b0 = 0x6800000;
            return;
        case 8:
        case 12:
            data_0212d7b0 = 0x6840000;
            return;
        case 1:
            data_0212d7b0 = 0x67E0000;
            return;
        case 4:
            data_0212d7b0 = 0x6820000;
    }
}
