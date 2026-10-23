#include "m2c.h"

M2C_UNK func_020b7d50(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020e5b18;

void func_0208578c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020b7d50(arg0, 0);
    M2C_FIELD(&data_020e5b18, s32 *, 4) = (s32) (M2C_FIELD(&data_020e5b18, s32 *, 4) & ~arg0);
}
