#include "m2c.h"

M2C_UNK func_02004078();                            /* extern */
M2C_UNK func_02004118();                            /* extern */
M2C_UNK func_02007558(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_0217aa4c;

void func_02041558(void) {
    func_02004078();
    func_02007558(0x06890000, M2C_FIELD(&data_0217aa4c, s32 *, 0xB74), 0x1800);
    func_02007558(0x06890000, M2C_FIELD(&data_0217aa4c, s32 *, 0xB78), 0x1800);
    func_02004118();
}
