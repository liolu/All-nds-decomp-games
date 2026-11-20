#include "m2c.h"

s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */
M2C_UNK func_020ae68c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020e5b70;

void func_020876b0(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020b6bd0();
    func_020ae68c(&data_020e5b70, arg0);
    func_020b6be4(temp_r4);
}
