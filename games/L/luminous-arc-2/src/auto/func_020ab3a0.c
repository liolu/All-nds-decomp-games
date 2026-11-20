#include "m2c.h"

M2C_UNK func_020aa9c8(s32, M2C_UNK *, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
s32 func_020aadbc();                                /* extern */
extern M2C_UNK data_02173d28;
extern M2C_UNK data_02173d2c;
extern M2C_UNK data_02173d34;

void func_020ab3a0(void) {
    func_020aa9c8(M2C_FIELD(&data_02173d28, s32 *, 0), &data_02173d34, M2C_FIELD(&data_02173d28, s32 *, 0x4C), 0,
                  &data_02173d2c, 8);
    M2C_FIELD(&data_02173d28, s32 *, 0x50) = func_020aadbc();
}
