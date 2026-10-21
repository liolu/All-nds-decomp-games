#include "m2c.h"

s32 func_02037798(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_0206c210(M2C_UNK);                     /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_0211b780;
extern M2C_UNK data_02158048;
extern u8 data_021701b8;

void func_02077930(void) {
    if ((u32) data_021701b8 < 1U) {
        data_021701b8 += 1;
    } else if (data_021701b8 == 1) {
        func_0206c4b4(0xE, 0, 0x7F, 0, 0, 0);
        data_021701b8 += 1;
    }
    if (func_02037798(&data_0211b780, 0) == 0) {
        return;
    }
    func_0206c210(0x10);
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
