#include "m2c.h"

M2C_UNK func_020b36e0();                            /* extern */
s32 func_ov000_021f9630(u8, void *, M2C_UNK);       /* extern */
extern M2C_UNK data_021d6fb0;
extern u8 data_021d84b8;

s32 func_020b3708(void *arg0, void *arg1) {
    void *sp0;
    s32 var_r1;
    s32 var_r8;
    u8 temp_r0;
    u8 var_r9;

    sp0    = arg0;
    var_r8 = 0;
    func_020b36e0();
    var_r9 = 0;
    do {
        if (var_r9 != 0) {
            var_r1 = 1 << var_r9;
        } else {
            var_r1 = 1;
        }
        if ((M2C_FIELD(&data_021d6fb0, s32 *, 4) & var_r1) && (var_r9 != data_021d84b8)) {
            M2C_FIELD(arg1, u8 *, 9) = var_r9;
            if (func_ov000_021f9630(var_r9, arg1, 0x10) != 0) {
                var_r8 += 1;
            }
        }
        var_r9 += 1;
    } while ((u32) var_r9 < 0x20U);
    temp_r0 = M2C_FIELD(arg1, u8 *, 0xA);
    if (temp_r0 == 1) {
        M2C_FIELD(sp0, s32 *, 8) = (s32) M2C_FIELD(&data_021d6fb0, s32 *, 4);
    } else if (temp_r0 == 0) {
        M2C_FIELD(sp0, s32 *, 8) = 0;
    }
    if (var_r8 == 0) {
        return -4;
    }
    return 0;
}
