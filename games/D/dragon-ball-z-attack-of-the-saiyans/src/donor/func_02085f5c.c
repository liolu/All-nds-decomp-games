/* compiler: 2.0/sp1p5  */
/* RTC_ConvertDateToDay from projets/blue-dragon-awakened-shadow/src/auto/RTC_ConvertDateToDay.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0209f748;
s32 func_02085f5c(void *arg0) {
    s32 var_r2;
    u32 temp_r1;
    u32 temp_r2;
    u32 temp_r3;

    temp_r3 = (*(u32 *) ((s8 *) (arg0) + (0)));
    if ((temp_r3 >= 0x64U) || (temp_r2 = (*(u32 *) ((s8 *) (arg0) + (4))), (temp_r2 < 1U)) || (temp_r2 > 0xCU) ||
        (temp_r1 = (*(u32 *) ((s8 *) (arg0) + (8))), (temp_r1 < 1U)) || (temp_r1 > 0x1FU) ||
        ((s32) (*(s32 *) ((s8 *) (arg0) + (0xC))) >= 7) || (temp_r2 < 1U) || (temp_r2 > 0xCU)) {
        return -1;
    }
    var_r2 = (temp_r1 - 1) + *((M2C_UNK *) ((s8 *) &data_0209f748 + (temp_r2 * 4)));
    if ((temp_r2 >= 3U) && !(temp_r3 & 3)) {
        var_r2 += 1;
    }
    return (temp_r3 * 0x16D) + var_r2 + ((u32) (temp_r3 + 3) >> 2);
}
