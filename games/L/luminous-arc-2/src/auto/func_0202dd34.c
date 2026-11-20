#include "m2c.h"

M2C_UNK func_0202c52c();                            /* extern */
M2C_UNK func_020cc3fc(M2C_UNK, M2C_UNK, u8);        /* extern */
M2C_UNK func_020cf2a0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02181a4c;

void func_0202dd34(void) {
    if (M2C_FIELD(&data_02181a4c, u8 *, 0x27D) & 1) {
        func_0202c52c();
    } else {
        func_020cc3fc(1, 5, M2C_FIELD(&data_02181a4c, u8 *, 0x274));
    }
    if (M2C_FIELD(&data_02181a4c, u8 *, 0x27D) & 2) {
        func_020cf2a0(0x19, 0, 0, 8, 0, 0, 9, 0x150000, 0xA0, (s32) M2C_FIELD(&data_02181a4c, u8 *, 0x274));
        func_020cf2a0(0x1A, 0, 0xC0, 8, 0, 0, 9, 0x150001, 0xA0, (s32) M2C_FIELD(&data_02181a4c, u8 *, 0x274));
    } else {
        func_020cc3fc(0x19, 2, M2C_FIELD(&data_02181a4c, u8 *, 0x274));
    }
    if (M2C_FIELD(&data_02181a4c, u8 *, 0x27D) & 4) {
        func_020cf2a0(0x1B, 0, 0xD0, 8, 0, 0, 7, 0x130000, 0xEC, (s32) M2C_FIELD(&data_02181a4c, u8 *, 0x274));
        return;
    }
    func_020cc3fc(0x1B, 1, M2C_FIELD(&data_02181a4c, u8 *, 0x274));
}
