#include "m2c.h"

s32 func_0201b6f4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_0201b764(M2C_UNK, M2C_UNK *);              /* extern */
s32 func_0201d054(M2C_UNK *);                       /* extern */
M2C_UNK func_020b05f4(M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
s32 func_020b9260(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_0212eb94;
extern M2C_UNK data_0212eb9c;
extern M2C_UNK data_0212eba4;
extern M2C_UNK data_0212ebb0;

s32 func_020b9188(M2C_UNK **arg0, M2C_UNK arg1, s32 arg2) {
    u8 sp0[16];
    M2C_UNK *temp_r4;
    M2C_UNK var_r2;
    s32 var_r0;

    temp_r4 = *arg0;
    if (func_0201b6f4(arg1, &data_0212eb94, 7) == 0) {
        if (func_020b9260(arg1, &data_0212eb9c, sp0, 0x10) != 0) {
            M2C_FIELD(temp_r4, s32 *, 0x5B8) = func_0201d054(sp0);
        }
        if (func_020b9260(arg1, &data_0212eba4, temp_r4, 0x100) == 0) {
            M2C_FIELD(temp_r4, s8 *, 0) = 0;
        }
        if (arg2 != 0) {
            if (func_0201b764(arg1, &data_0212ebb0) != 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 != 0) {
                var_r2 = 1;
            } else {
                var_r2 = 0;
            }
            func_020b05f4(arg0, 4, var_r2);
        }
        return 1;
    }
    return 0;
}
