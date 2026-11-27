/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02056a9c();                                /* extern */
extern M2C_UNK data_020f9790;
extern s32 data_0211af80;
extern s32 data_0211af84;

void func_020594f4(void) {
    s32 temp_r0;

    temp_r0       = func_02056a9c();
    data_0211af84 = temp_r0;
    data_0211af80 = *((u16 *) ((s8 *) &data_020f9790 + ((temp_r0 >> 4) * 2))) << 0xC;
}
