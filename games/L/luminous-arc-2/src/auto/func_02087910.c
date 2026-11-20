#include "m2c.h"

extern M2C_UNK data_021704e8;

void func_02087910(void) {
    M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), M2C_UNK(**)(M2C_UNK, u8, s32),
              0x2C)(0, M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), u8 *, 0x1D),
                    M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), s32 *, 0x30));
    M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), s32 *, 0) = 2;
}
