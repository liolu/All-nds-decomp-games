#include "m2c.h"

void *func_0208c4e8();                       /* extern */
s16 func_0208d72c();                                /* extern */
s32 func_02093494();                             /* extern */
M2C_UNK func_020934bc();                         /* extern */
M2C_UNK func_020b75a0();           /* extern */

void func_0208cb64(M2C_UNK arg0, s32 arg1) {
    s16 temp_r5;
    void *temp_r4;

    if (arg1 != 0) {
        temp_r5 = func_0208d72c();
        if (M2C_FIELD(func_0208c4e8(arg0), s32 *, 0x30) != 0) {
            func_020934bc(M2C_FIELD(func_0208c4e8(arg0), s32 *, 0x30));
        }
        M2C_FIELD(func_0208c4e8(arg0), s32 *, 0x30) = 0;
        M2C_FIELD(func_0208c4e8(arg0), s16 *, 0x2C) = temp_r5;
        temp_r4                                     = func_0208c4e8(arg0);
        M2C_FIELD(temp_r4, s32 *, 0x30)             = func_02093494(temp_r5 & ~1);
        func_020b75a0(0, M2C_FIELD(func_0208c4e8(arg0), s32 *, 0x30), temp_r5);
        return;
    }
    if (M2C_FIELD(func_0208c4e8(), s32 *, 0x30) != 0) {
        func_020934bc(M2C_FIELD(func_0208c4e8(arg0), s32 *, 0x30));
    }
    M2C_FIELD(func_0208c4e8(arg0), s32 *, 0x30) = 0;
}
