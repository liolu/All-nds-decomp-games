/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_InitVramExclusive from projets/blue-dragon-awakened-shadow/src/auto/OSi_InitVramExclusive.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern void func_0201e600(void);
extern u32 data_0203e0b4;
extern u16 data_0203e0b8[9];
#pragma thumb off
void func_0201e600(void) {
    s32 i;

    data_0203e0b4 = 0x0000;

    for (i = 0; i < 9; i++) {
        data_0203e0b8[i] = 0;
    }
}
