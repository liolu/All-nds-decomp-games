#include "m2c.h"

M2C_UNK func_0201cb10(void *);                      /* extern */
extern M2C_UNK data_020c80f8;

void *func_0201ce1c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c80f8;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    func_0201cb10(arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 0x34E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x34EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x34F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x34F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x34F8) = 0;
    return arg0;
}
