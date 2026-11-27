#include "m2c.h"

M2C_UNK func_0203bdfc();                            /* extern */
extern M2C_UNK data_020ded50;
extern s32 data_020dfe68;

void *func_0203c278(void *arg0) {
    func_0203bdfc();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ded50;
    M2C_FIELD(arg0, void **, 0x24) = NULL;
    M2C_FIELD(arg0, s32 *, 0x28)   = (s32) data_020dfe68;
    M2C_FIELD(arg0, s32 *, 0x2C)   = (s32) data_020dfe68;
    M2C_FIELD(arg0, s32 *, 0x30)   = (s32) data_020dfe68;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x40)   = 0;
    M2C_FIELD(arg0, void **, 0x24) = (void *) (arg0 + 0x3C);
    return arg0;
}
