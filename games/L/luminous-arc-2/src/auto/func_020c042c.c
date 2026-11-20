#include "m2c.h"

s32 func_020aadbc();                                /* extern */
M2C_UNK func_020c19f0(void *, M2C_UNK);             /* extern */
extern void *data_0212edac;

void func_020c042c(void *arg0) {
    void *var_r4;

    var_r4 = arg0;
    if (var_r4 == NULL) {
        var_r4 = data_0212edac;
    }
    if (M2C_FIELD(var_r4, s32 *, 0xBC) == 0) {
        return;
    }
    if ((u32) (func_020aadbc() - M2C_FIELD(var_r4, s32 *, 0xAC)) < 0x2710U) {
        M2C_FIELD(var_r4, s32 *, 0xB4) = 1;
        return;
    }
    func_020c19f0(var_r4, 1);
    M2C_FIELD(var_r4, s32 *, 0xB4) = 0;
}
