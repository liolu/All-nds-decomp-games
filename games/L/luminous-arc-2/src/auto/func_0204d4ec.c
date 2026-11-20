#include "m2c.h"

M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern u16 data_0215143a;
extern M2C_UNK data_02158050;

s32 func_0204d4ec(void) {
    s32 temp_r2;

    if (((u32) (data_0215143a << 0x1E) >> 0x1F) != 0) {
        temp_r2 = (M2C_FIELD(&data_02158050, u8 *, 0x2C4) * 6) + (s32) &data_02158050;
        if (M2C_FIELD(temp_r2, u8 *, 0x254) == 1) {
            func_0206c4b4(1, 0x400, 0x7F, 0x7F, 0, 0x100);
            return 2;
        }
        if (M2C_FIELD(temp_r2, u8 *, 0x257) != 0) {
            func_0206c4b4(1, 0x401, 0x7F, 0x7F, 0, 0x100);
            return 1;
        }
        func_0206c4b4(1, 0x400, 0x7F, 0x7F, 0, 0x100);
        return 2;
    }
    return 0;
}
