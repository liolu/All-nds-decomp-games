#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
extern M2C_UNK func_0203c060;

s32 func_0203bfc4(void *arg0) {
    void *temp_r0;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r0                           = func_020291d0(&func_0203c060, (u16) (M2C_FIELD(arg0, u16 *, 0x28) + 2));
    M2C_FIELD(arg0, void **, 0x64)    = temp_r0;
    M2C_FIELD(temp_r0, void **, 0x38) = arg0;
    return 1;
}
