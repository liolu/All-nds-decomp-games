#include "m2c.h"

M2C_UNK func_02036ac0(s32, void *);                 /* extern */
M2C_UNK func_02036c98();                            /* extern */
s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */
extern M2C_UNK data_0215dabc;

void func_020370b8(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_02038e10();
    temp_r5 = *M2C_FIELD(&data_0215dabc, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_02036ac0(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_02036c98();
    func_02038e24(temp_r4);
}
