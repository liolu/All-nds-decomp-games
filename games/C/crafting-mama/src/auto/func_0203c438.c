#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
s32 func_02031700(s32);                             /* extern */
extern M2C_UNK func_0203c4f0;

s32 func_0203c438(void *arg0) {
    void *temp_r0;

    if (arg0 == NULL) {
        return 0;
    }
    if (func_02031700(M2C_FIELD(arg0, s32 *, 0x58) + 0x45C) == 0) {
        return 0;
    }
    temp_r0                           = func_020291d0(&func_0203c4f0, (u16) (M2C_FIELD(arg0, u16 *, 0x28) + 2));
    M2C_FIELD(temp_r0, void **, 0x34) = arg0;
    M2C_FIELD(arg0, void **, 0x68)    = temp_r0;
    return 1;
}
