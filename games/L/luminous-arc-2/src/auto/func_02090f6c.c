#include "m2c.h"

M2C_UNK func_0201b560(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_0211d7c4;

void func_02090f6c(void *arg0, s16 arg1, s32 arg2) {
    func_0201b560(arg0 + 6, &data_0211d7c4, 2);
    M2C_FIELD(arg0, s16 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = arg2;
}
