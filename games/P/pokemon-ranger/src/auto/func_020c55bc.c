/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c25e0();                                /* extern */
extern M2C_UNK data_020e3890;
extern s32 data_020f6910;
extern s32 data_020f6914;

void func_020c55bc(void) {
    s32 temp_r0;

    temp_r0       = func_020c25e0();
    data_020f6914 = temp_r0;
    data_020f6910 = *((u16 *) ((s8 *) &data_020e3890 + ((temp_r0 >> 4) * 2))) << 0xC;
}
