#include "m2c.h"

M2C_UNK func_02062ca8(s32, void *);                 /* extern */
M2C_UNK func_02062e80();                            /* extern */
s32 func_02064a3c();                                /* extern */
M2C_UNK func_02064a50(s32);                         /* extern */
extern M2C_UNK data_0208e5c8;

void func_0206329c(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_02064a3c();
    temp_r5 = *M2C_FIELD(&data_0208e5c8, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_02062ca8(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_02062e80();
    func_02064a50(temp_r4);
}
