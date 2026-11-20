#include "m2c.h"

M2C_UNK func_02004f18(s32, M2C_UNK);                /* extern */
M2C_UNK func_02006be0();                            /* extern */
extern M2C_UNK data_021478e0;

void func_02004ef8(void) {
    func_02006be0();
    func_02004f18(M2C_FIELD(&data_021478e0, s32 *, 0x28), 0);
}
