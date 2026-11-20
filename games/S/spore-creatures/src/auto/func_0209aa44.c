#include "m2c.h"

M2C_UNK func_0209a588();                            /* extern */
extern M2C_UNK data_020dfefc;

void *func_0209aa44(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfefc;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg1;
    func_0209a588();
    return arg0;
}
