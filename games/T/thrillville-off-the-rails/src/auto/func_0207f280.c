#include "m2c.h"

M2C_UNK func_0202579c(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020fa998;

void func_0207f280(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0202579c(arg0, 0);
    M2C_FIELD(&data_020fa998, s32 *, 4) = (s32) (M2C_FIELD(&data_020fa998, s32 *, 4) & ~arg0);
}
