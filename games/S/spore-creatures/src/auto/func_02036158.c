#include "m2c.h"

u32 func_0203cdf8(s32);                             /* extern */
s32 func_0203ce2c(void *);                          /* extern */
M2C_UNK func_020966e0(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_ov003_0214c1b0;

void func_02036158(M2C_UNK arg0, void *arg1, s32 arg2) {
    s32 **temp_r1;
    s32 var_r4;
    u32 temp_r0;

    temp_r1 = M2C_FIELD(arg1, s32 ***, 0x1AC);
    var_r4  = 2;
    if ((temp_r1 != NULL) && (**temp_r1 == 0x5754AEE6)) {
        var_r4 = 8;
    } else if (arg2 != 0) {
        var_r4 = 7;
    } else if (M2C_FIELD(M2C_FIELD(arg1, void **, 0xA0), s32 *, 0x40) != 0) {
        var_r4 = 6;
    } else if (func_0203ce2c(arg1) != 0) {
        var_r4 = 5;
    } else {
        temp_r0 = func_0203cdf8((s32) M2C_FIELD(arg1, s32 *, 0x1A4) >> 0xC);
        switch (temp_r0) {
            default:
                break;
            case 0:
                var_r4 = 0;
                break;
            case 1:
                var_r4 = 1;
                break;
            case 3:
                var_r4 = 3;
                break;
            case 4:
            case 5:
                var_r4 = 4;
                break;
        }
    }
    func_020966e0(arg0, (var_r4 * 0xC) + (s32) &data_ov003_0214c1b0);
}
