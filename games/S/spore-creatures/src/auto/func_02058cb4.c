#include "m2c.h"

M2C_UNK func_02058e9c();                            /* extern */
extern M2C_UNK data_020df538;

void *func_02058cb4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020df538;
    if (((u32) (M2C_FIELD(arg0, u16 *, 0x32) << 0x1F) >> 0x1F) != 0) {
        func_02058e9c(arg0);
    }
    return arg0;
}
