#include "m2c.h"

M2C_UNK func_02017bb8(s32, void *);                 /* extern */
M2C_UNK func_02017d8c();                            /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */
extern M2C_UNK data_020940c4;

void func_02018198(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_02019d04();
    temp_r5 = *M2C_FIELD(&data_020940c4, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_02017bb8(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_02017d8c();
    func_02019d18(temp_r4);
}
