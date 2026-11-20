#include "m2c.h"

M2C_UNK func_0207b5fc(s32);                         /* extern */
extern M2C_UNK data_020ce97c;

M2C_UNK **func_02082d6c(M2C_UNK **arg0) {
    s32 base = (s32) arg0;
    *arg0    = &data_020ce97c;
    func_0207b5fc((M2C_UNK *) (base + 56));
    return arg0;
}
