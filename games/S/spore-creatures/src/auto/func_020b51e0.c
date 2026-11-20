#include "m2c.h"

M2C_UNK func_020b4b04(s32, void *);                 /* extern */
M2C_UNK func_020b4cdc();                            /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */
extern M2C_UNK data_020f1950;

void func_020b51e0(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_020b6bd0();
    temp_r5 = *M2C_FIELD(&data_020f1950, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_020b4b04(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_020b4cdc();
    func_020b6be4(temp_r4);
}
