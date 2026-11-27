#include "m2c.h"

M2C_UNK func_0208b9cc(void *, M2C_UNK);             /* extern */
M2C_UNK func_0208db98(void *, s32, u16);            /* extern */
extern M2C_UNK data_020af144;

void func_0200bbb8(s32 arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r4;

    temp_r4 = (M2C_UNK *) ((s8 *) &data_020af144 + (arg0 * 4));
    func_0208db98(temp_r4, arg1 >> 0x10, (u16) arg1);
    func_0208b9cc(temp_r4, arg2);
}
