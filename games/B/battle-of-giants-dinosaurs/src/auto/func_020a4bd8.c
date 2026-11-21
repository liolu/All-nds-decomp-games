#include "m2c.h"

M2C_UNK func_0209a574();                            /* extern */
extern M2C_UNK data_020b9110;

void *func_020a4bd8(void *arg0, s32 arg1) {
    func_0209a574();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020b9110;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    return arg0;
}
