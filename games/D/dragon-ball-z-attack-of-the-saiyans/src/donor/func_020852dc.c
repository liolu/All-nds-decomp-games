/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_InitVramExclusive from projets/blue-dragon-awakened-shadow/src/auto/OSi_InitVramExclusive.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern void func_020852dc(void);
extern u32 data_020d8958;
extern u16 data_020d895c[9];
#pragma thumb off
void func_020852dc(void) {
    s32 i;

    data_020d8958 = 0x0000;

    for (i = 0; i < 9; i++) {
        data_020d895c[i] = 0;
    }
}
