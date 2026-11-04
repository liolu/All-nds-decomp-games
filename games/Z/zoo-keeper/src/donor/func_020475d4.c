/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205898c from projets/children-of-mana/src/auto/func_0205898c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_02045714();
extern void func_020475d4();
extern s32 data_0206b964;
extern u32 data_0206b960;
extern u32 data_0206b95c;
#pragma thumb off
void func_020475d4() {
    data_0206b964 = (s32) func_02045714();
    switch (data_0206b964) {
        case 0:
            break;
        case 0x10:
            data_0206b960 = 0x06880000;
            data_0206b95c = 0x0;
            break;
        case 0x40:
            data_0206b960 = 0x06894000;
            data_0206b95c = 0x4000;
            break;
        case 0x20:
        case 0x60:
            data_0206b960 = 0x06890000;
            data_0206b95c = 0x0;
            break;
    }
}
