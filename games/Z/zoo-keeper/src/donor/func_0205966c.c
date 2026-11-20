/* compiler: 1.2/sp2p3  */
/* func_02074bb0 from projets/club-house-games/src/auto/func_02074bb0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
extern u32 data_0206425c;
s32 func_0205966c(void) {
    u32 temp_r0;

    temp_r0       = (data_0206425c * 0x41C64E6D) + 0x3039;
    data_0206425c = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}
