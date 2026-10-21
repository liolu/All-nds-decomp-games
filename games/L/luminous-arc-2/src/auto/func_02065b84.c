#include "m2c.h"

M2C_UNK func_020cc4f8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02156024;
extern M2C_UNK data_021561a4;
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

void func_02065b84(void) {
    func_020cc4f8(&data_021561a4, 2, 0x2E, 1, 0x38, (s32) (s16) ((M2C_FIELD(&data_0216be68, u8 *, 0x1B) << 5) + 0x10), 7,
                  0x268);
    M2C_FIELD(&data_02156024, s8 *, 0x18F) = 0x30;
    M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) + 1);
}
