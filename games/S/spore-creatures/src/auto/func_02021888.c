#include "m2c.h"

M2C_UNK func_020a591c(void *);                      /* extern */
extern M2C_UNK data_020de628;

void *func_02021888(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020de628;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    func_020a591c(arg0 + 8);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}
