#include "m2c.h"

M2C_UNK func_020046dc(s32, void *);                 /* extern */
M2C_UNK func_020048b4();                            /* extern */
s32 func_020066e0();                                /* extern */
M2C_UNK func_020066f4(s32);                         /* extern */
extern M2C_UNK data_020d0c40;

void func_02004dd0(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_020066e0();
    temp_r5 = *M2C_FIELD(&data_020d0c40, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_020046dc(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_020048b4();
    func_020066f4(temp_r4);
}
