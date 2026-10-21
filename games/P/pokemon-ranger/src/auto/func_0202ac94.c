#include "m2c.h"

extern s32 data_020f1980;
extern M2C_UNK data_020f1988;

void *func_0202ac94(s32 arg0) {
    void *temp_r0;

    if ((u32) (data_020f1980 + arg0) > 0x800U) {
        data_020f1980 = 0;
    }
    temp_r0 = (M2C_UNK *) ((s8 *) &data_020f1988 + (data_020f1980 * 4));
    data_020f1980 += arg0;
    return temp_r0;
}
