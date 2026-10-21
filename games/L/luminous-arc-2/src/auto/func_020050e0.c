#include "m2c.h"

M2C_UNK func_02004a04(s32, void *);                 /* extern */
M2C_UNK func_02004bdc();                            /* extern */
s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
extern M2C_UNK data_021478e0;

void func_020050e0(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_02006be0();
    temp_r5 = *M2C_FIELD(&data_021478e0, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_02004a04(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_02004bdc();
    func_02006bf4(temp_r4);
}
