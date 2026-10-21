#include "m2c.h"

M2C_UNK func_02063b04(u8);                          /* extern */
s32 func_020668a8(M2C_UNK);                         /* extern */
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

void func_02063418(void) {
    func_02063b04(M2C_FIELD(&data_0216be68, u8 *, 0xA8));
    if (func_020668a8(0xF) == 0) {
        return;
    }
    M2C_FIELD(&data_0216ce68, u8 *, 0xBAF) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBAF) + 1);
}
