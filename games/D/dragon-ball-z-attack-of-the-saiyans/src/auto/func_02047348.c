#include "m2c.h"

s32 func_02012a90(void *, M2C_UNK);                 /* extern */
s32 func_02012b20(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0202c0f8(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_02085398();                            /* extern */
extern M2C_UNK data_0209f7a8;
extern void *data_020d1d24;

s32 func_02047348(void *arg0) {
    s32 var_r4;
    void *var_r2;

    if (func_02012b20(arg0, 1) != 0) {
        var_r4 = -1;
        var_r2 = M2C_FIELD(data_020d1d24, void **, 0x23B8);
        if (var_r2 != NULL) {
        loop_2:
            if ((M2C_FIELD(var_r2, u8 *, 0x14) == 3) && (M2C_FIELD(var_r2, s32 *, 0x20) == M2C_FIELD(arg0, s32 *, 0x14))) {
                var_r4 = M2C_FIELD(var_r2, s32 *, 0x24);
            } else {
                var_r2 = M2C_FIELD(var_r2, void **, 4);
                if (var_r2 != NULL) {
                    goto loop_2;
                }
            }
        }
        if (var_r4 < 0) {
            func_02085398();
        }
    } else {
        var_r4 = func_02012a90(arg0, 1);
    }
    func_0202c0f8(&data_0209f7a8, var_r4, 0);
    return 1;
}
