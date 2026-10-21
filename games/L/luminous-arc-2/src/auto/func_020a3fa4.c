#include "m2c.h"

M2C_UNK func_02058930(s32);                         /* extern */
M2C_UNK func_02059bb0();                            /* extern */
extern M2C_UNK data_0217296c;

void func_020a3fa4(void *arg0) {
    s32 temp_r0;

    temp_r0                                 = M2C_FIELD(&data_0217296c, s32 *, 0xE94) + 1;
    M2C_FIELD(&data_0217296c, s32 *, 0xE94) = temp_r0;
    if (temp_r0 == 4) {
        func_02058930(0xFFFE);
        return;
    }
    if (temp_r0 <= 8) {
        return;
    }
    M2C_FIELD(&data_0217296c, s32 *, 0xE94) = 0;
    func_02059bb0();
    func_02058930(0x13);
    M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
}
