#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                    /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);             /* extern */
s32 func_0207ddc4(void *);                          /* extern */
M2C_UNK func_020843cc(void *);                      /* extern */

s32 func_0207e79c(void *arg0) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r5;

    var_r5  = 0;
    temp_r4 = _Z20DisableIRQInterruptsv();
    if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        if (!(M2C_FIELD(arg0, volatile s32 *, 0xC) & 0x44)) {
            var_r5 = 1;
        } else {
            var_r5 = 0;
        }
        if (var_r5 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0xC) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xC) | 4);
            do {
                func_020843cc(arg0 + 0x18);
            } while (!(M2C_FIELD(arg0, volatile s32 *, 0xC) & 0x40));
        } else {
            do {
                func_020843cc(arg0 + 0x18);
                if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
                    var_r0_2 = 1;
                } else {
                    var_r0_2 = 0;
                }
            } while (var_r0_2 != 0);
        }
    }
    _Z20SetIRQInterruptStatei(temp_r4);
    if (var_r5 != 0) {
        return func_0207ddc4(arg0);
    }
    if (M2C_FIELD(arg0, volatile s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
