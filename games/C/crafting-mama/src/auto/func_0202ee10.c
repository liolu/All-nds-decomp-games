#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
s32 func_0202ede0(s32);                             /* extern */
M2C_UNK func_0205ec44(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK func_0202ee68;

void func_0202ee10(void **arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r1;

    func_0205ec44(func_0202ede0(arg1), 8, 0x1F, 8);
    temp_r1 = *arg0;
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0x10) = 1;
    }
    temp_r0                            = func_020291d0(&func_0202ee68, 0x1016);
    *arg0                              = temp_r0;
    M2C_FIELD(temp_r0, s32 *, 0x30)    = arg1;
    M2C_FIELD(temp_r0, void ***, 0x40) = arg0;
}
