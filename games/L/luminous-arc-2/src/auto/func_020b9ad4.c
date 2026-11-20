#include "m2c.h"

M2C_UNK func_020aa89c(s32);                         /* extern */
M2C_UNK func_020aa8b0(s32, M2C_UNK);                /* extern */
M2C_UNK func_020ab30c();                            /* extern */
M2C_UNK func_020ba40c();                            /* extern */
extern M2C_UNK data_0212ec00;
extern M2C_UNK data_02173dcc;

void func_020b9ad4(void) {
    if (M2C_FIELD(&data_0212ec00, s32 *, 4) != -1) {
        func_020aa8b0(M2C_FIELD(&data_0212ec00, s32 *, 4), 2);
        func_020aa89c(M2C_FIELD(&data_0212ec00, s32 *, 4));
    }
    M2C_FIELD(&data_0212ec00, s32 *, 4) = -1;
    func_020ba40c();
    if (M2C_FIELD(&data_02173dcc, s32 *, 0x28) == 0) {
        return;
    }
    func_020ab30c();
    M2C_FIELD(&data_02173dcc, s32 *, 0x28) = 0;
    M2C_FIELD(&data_02173dcc, s32 *, 0x18) = 0;
    M2C_FIELD(&data_02173dcc, s32 *, 8)    = 0;
}
