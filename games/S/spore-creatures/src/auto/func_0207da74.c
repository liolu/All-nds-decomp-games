#include "m2c.h"

M2C_UNK func_02074e5c();                            /* extern */
extern M2C_UNK data_020dfba4;

void *func_0207da74(void *arg0, void *arg1) {
    func_02074e5c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfba4;
    M2C_FIELD(arg0, s32 *, 0x134)  = (s32) M2C_FIELD(arg1, s32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x138)  = (s32) M2C_FIELD(arg1, s32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x13C)  = (s32) M2C_FIELD(arg1, s32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x140)  = (s32) M2C_FIELD(arg0, s32 *, 0x134);
    return arg0;
}
