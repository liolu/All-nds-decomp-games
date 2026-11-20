#include "m2c.h"

s32 func_02056ae4(M2C_UNK);                         /* extern */
M2C_UNK func_0205884c();                            /* extern */
void *func_02078f24();                              /* extern */
M2C_UNK func_02078f34();                            /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bccc;

void func_02053010(void) {
    void *temp_r0;

    temp_r0 = func_02078f24();
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) == 1) {
        M2C_FIELD(temp_r0, s32 *, 4) = (s32) (M2C_FIELD(temp_r0, s32 *, 4) | 1);
        return;
    }
    if (func_02056ae4(8) == 0) {
        return;
    }
    func_0205884c();
    if (M2C_FIELD(&data_0216bccc, s8 *, 0x4A) == 0) {
        func_02078f34();
        M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
        return;
    }
    if (M2C_FIELD(&data_0216bccc, s8 *, 0x4A) == 1) {
        func_02078f34();
        M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
        return;
    }
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 2);
}
