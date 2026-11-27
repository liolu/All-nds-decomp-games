/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214b720 from https://github.com/RonyxDumb/mkds src/arm9/0214b720_func_0214b720.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_02056ae8();
extern void func_0205898c();
extern s32 data_0211af74;
extern u32 data_0211af70;
extern u32 data_0211af6c;
#pragma thumb off
void func_0205898c() {
    data_0211af74 = (s32) func_02056ae8();
    switch (data_0211af74) {
        case 0:
            break;
        case 0x10:
            data_0211af70 = 0x06880000;
            data_0211af6c = 0x0;
            break;
        case 0x40:
            data_0211af70 = 0x06894000;
            data_0211af6c = 0x4000;
            break;
        case 0x20:
        case 0x60:
            data_0211af70 = 0x06890000;
            data_0211af6c = 0x0;
            break;
    }
}
