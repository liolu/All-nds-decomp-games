#include "m2c.h"

s32 func_020cab60();                                /* extern */
M2C_UNK func_020cd4d8();                            /* extern */
M2C_UNK func_020cd508(u8, u8, u8);                  /* extern */
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

void func_0206b050(void) {
    if (func_020cab60() != 3) {
        return;
    }
    M2C_FIELD(&data_0216ce68, s8 *, 0xBAE) = 0;
    if (M2C_FIELD(&data_0216be68, u8 *, 0x90) == 2) {
        if (M2C_FIELD(&data_0216be68, u8 *, 0x91) == 2) {
            func_020cd4d8();
            func_020cd508(2U, 2U, 0U);
            return;
        }
        M2C_FIELD(&data_0216ce68, s8 *, 0xBA6) = 0;
        func_020cd4d8();
        func_020cd508(2U, 3U, 0U);
        return;
    }
    func_020cd4d8();
    func_020cd508(M2C_FIELD(&data_0216be68, u8 *, 0x90), M2C_FIELD(&data_0216be68, u8 *, 0x91),
                  M2C_FIELD(&data_0216be68, u8 *, 0x92));
}
