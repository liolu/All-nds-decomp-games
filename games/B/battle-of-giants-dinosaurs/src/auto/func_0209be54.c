#include "m2c.h"

M2C_UNK func_0209b3a8(s32, void *);                 /* extern */
extern M2C_UNK data_020d3cc4;

s32 func_0209be54(void *arg0) {
    void *var_r1;

    var_r1 = arg0;
    if (M2C_FIELD(var_r1, u8 *, 8) == 0) {
        M2C_FIELD(var_r1, u8 *, 8) = 1U;
        if (var_r1 != NULL) {
            var_r1 += 4;
        }
        func_0209b3a8(M2C_FIELD(&data_020d3cc4, s32 *, 0x18), var_r1);
    }
    return 1;
}
