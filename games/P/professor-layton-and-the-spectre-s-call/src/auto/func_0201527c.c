#include "m2c.h"

M2C_UNK func_02014b58(s32, void *);                 /* extern */
M2C_UNK func_02014d2c();                            /* extern */
s32 func_0201732c();                                /* extern */
M2C_UNK func_02017340(s32);                         /* extern */
extern M2C_UNK data_020349c4;

void func_0201527c(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_0201732c();
    temp_r5 = *M2C_FIELD(&data_020349c4, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_02014b58(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_02014d2c();
    func_02017340(temp_r4);
}
