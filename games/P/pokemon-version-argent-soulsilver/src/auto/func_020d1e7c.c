#include "m2c.h"

M2C_UNK func_020d16d8(s32, void *);                 /* extern */
M2C_UNK func_020d18b0();                            /* extern */
s32 func_020d3a38();                                /* extern */
M2C_UNK func_020d3a4c(s32);                         /* extern */
extern M2C_UNK data_021e169c;

void func_020d1e7c(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_020d3a38();
    temp_r5 = *M2C_FIELD(&data_021e169c, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_020d16d8(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_020d18b0();
    func_020d3a4c(temp_r4);
}
