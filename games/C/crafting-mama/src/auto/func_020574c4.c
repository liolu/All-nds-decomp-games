#include "m2c.h"

M2C_UNK func_0201ec0c(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020b0060;

void func_020574c4(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0201ec0c(arg0, 0);
    M2C_FIELD(&data_020b0060, s32 *, 8) = (s32) (M2C_FIELD(&data_020b0060, s32 *, 8) & ~arg0);
}
