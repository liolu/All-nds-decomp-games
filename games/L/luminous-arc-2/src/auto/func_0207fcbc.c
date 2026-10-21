#include "m2c.h"

M2C_UNK func_020058a0(s32);                         /* extern */
M2C_UNK func_02005924(s32);                         /* extern */
extern M2C_UNK data_02170270;

s32 func_0207fcbc(void) {
    s32 temp_r4;

    if (M2C_FIELD(&data_02170270, void **, 8) == NULL) {
        return 0x16;
    }
    func_020058a0(M2C_FIELD(&data_02170270, void **, 8) + 0x13D8);
    temp_r4 = M2C_FIELD(M2C_FIELD(&data_02170270, void **, 8), s32 *, 0x1004);
    func_02005924(M2C_FIELD(&data_02170270, void **, 8) + 0x13D8);
    return temp_r4;
}
