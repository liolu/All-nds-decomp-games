#include "m2c.h"

M2C_UNK func_02003ac8();                            /* extern */
M2C_UNK func_02003b68(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02003bd8();                            /* extern */
M2C_UNK func_02004078();                            /* extern */
M2C_UNK func_02004118();                            /* extern */
M2C_UNK func_02007558(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_0217aa4c;

void func_02041598(void) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_0217aa4c, s32 *, 0xB74);
    func_02004078();
    func_02007558(temp_r4, 0x06890000, 0x1800);
    func_02004118();
    func_02003ac8();
    func_02003b68(temp_r4, 0x6000, 0x200);
    func_02003bd8();
}
