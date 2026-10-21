#include "m2c.h"

M2C_UNK func_02033c7c();                            /* extern */
M2C_UNK func_02033e00();                            /* extern */
M2C_UNK func_02034838(M2C_UNK);                     /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02181a4c;

void func_02033c18(void) {
    func_0206c4b4(1, 0x402, 0x7F, 0x7F, 0, 0x100);
    M2C_FIELD(&data_02181a4c, s8 *, 0x267) = 0;
    func_02033c7c();
    func_02033e00();
    func_02034838(1);
    M2C_FIELD(&data_02181a4c, s8 *, 0x260) = 9;
}
