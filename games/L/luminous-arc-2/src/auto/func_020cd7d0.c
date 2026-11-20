#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
M2C_UNK func_020299e0(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_021514f8;
extern M2C_UNK data_02151548;

void func_020cd7d0(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02006be0();
    func_020299e0(&data_02151548, arg0);
    data_021514f8 -= 1;
    func_02006bf4(temp_r4);
}
