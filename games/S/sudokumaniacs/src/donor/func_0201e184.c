/* compiler: 2.0/sp1p5  */
/* OSi_SetTimerReserved from projets/blue-dragon-awakened-shadow/src/auto/OSi_SetTimerReserved.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
extern u16 data_0203e078;
void func_0201e184(s32 arg0) {
    data_0203e078 |= 1 << arg0;
}
