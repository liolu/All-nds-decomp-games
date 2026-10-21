#include "m2c.h"

M2C_UNK func_0206cdc0(void *, u16, u16);            /* extern */
M2C_UNK func_0206e29c();                            /* extern */
M2C_UNK func_0206fa4c(s32);                         /* extern */
extern s32 data_020f4720;

void func_0206cd50(void *arg0) {
    u16 temp_r1;
    u16 temp_r1_2;

    func_0206e29c();
    if (M2C_FIELD(arg0, u16 *, 0x330) != 0xFFFF) {
        func_0206fa4c(data_020f4720);
    }
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x2FE);
    if (temp_r1 != 0) {
        func_0206cdc0(arg0, temp_r1, 0U);
    }
    temp_r1_2 = M2C_FIELD(arg0, u16 *, 0x300);
    if (temp_r1_2 == 0) {
        return;
    }
    func_0206cdc0(arg0, temp_r1_2, M2C_FIELD(arg0, u16 *, 0x302));
}
