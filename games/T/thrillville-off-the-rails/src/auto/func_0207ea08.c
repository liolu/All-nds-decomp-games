#include "m2c.h"

M2C_UNK func_0202599c(u8, M2C_UNK, s16);            /* extern */
extern M2C_UNK data_020de1c8;

void func_0207ea08(void **arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r3;
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 != NULL) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    if (var_r3 == 0) {
        return;
    }
    func_0202599c(M2C_FIELD(temp_r0, u8 *, 0x3C), arg1, *((u16 *) ((s8 *) &data_020de1c8 + (arg2 * 2))));
}
