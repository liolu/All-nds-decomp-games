#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
M2C_UNK func_020483d8(s32, s32, void *, void *);    /* extern */
extern M2C_UNK func_02069748;
extern M2C_UNK func_0206974c;

void *func_020696e8(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0                              = func_020291d0(&func_0206974c, (u16) (arg2 + 3));
    M2C_FIELD(temp_r0, M2C_UNK **, 0x14) = &func_02069748;
    M2C_FIELD(temp_r0, s32 *, 0x20)      = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x24)      = arg0;
    func_020483d8(arg0, arg1, temp_r0 + 0x28, temp_r0 + 0x2C);
    return temp_r0;
}
