#include "m2c.h"

M2C_UNK func_0209b334(s32, void *);                 /* extern */
extern M2C_UNK data_020d3cc4;

s32 func_0209be90(void *arg0) {
    void *var_r1;

    var_r1 = arg0;
    if (M2C_FIELD(var_r1, u8 *, 8) == 0) {
        return 0;
    }
    M2C_FIELD(var_r1, u8 *, 8) = 0U;
    if (var_r1 != NULL) {
        var_r1 += 4;
    }
    func_0209b334(M2C_FIELD(&data_020d3cc4, s32 *, 0x18) + 0x40, var_r1);
    return 1;
}
