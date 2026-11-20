#include "m2c.h"

s32 func_02030ad4();                                /* extern */
extern M2C_UNK data_02181ce0;

void func_020363a4(s32 arg0, s8 arg1) {
    s32 temp_r0;

    temp_r0 = func_02030ad4();
    if (temp_r0 == -1) {
        return;
    }
    *((u8 *) ((s8 *) &data_02181ce0 + (temp_r0 * 0xAC))) = arg1;
}
