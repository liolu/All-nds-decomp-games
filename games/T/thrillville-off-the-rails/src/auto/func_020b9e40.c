#include "m2c.h"

s32 func_020bbef0(s32);                             /* extern */
extern void **data_020ef778;
extern s32 data_02101b6c;

u8 func_020b9e40(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r3;
    s32 var_r5;

    if (M2C_FIELD(*data_020ef778, s32(**)(), 0x3C)(data_020ef778) != 0) {
        temp_r0 = M2C_FIELD(*data_020ef778, s32(**)(), 0x88)(data_020ef778);
        var_r3  = 1;
    loop_2:
        if ((temp_r0 & (1 << var_r3)) && (M2C_FIELD((arg0 + var_r3), u8 *, 0xC) == 0)) {
            return 0U;
        }
        var_r3 += 1;
        if (var_r3 >= 4) {
            if (arg1 != 0) {
                var_r5 = 0;
                if (func_020bbef0(data_02101b6c) > 0) {
                    do {
                        var_r5 += 1;
                    } while (var_r5 < func_020bbef0(data_02101b6c));
                }
            }
            return 1U;
        }
        goto loop_2;
    }
    if (M2C_FIELD(*data_020ef778, s32(**)(), 0x40)(data_020ef778) != 0) {
        return M2C_FIELD(arg0, u8 *, 0x10);
    }
    return 1U;
}
