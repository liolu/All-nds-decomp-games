#include "m2c.h"

M2C_UNK func_020370b8(void *);                      /* extern */
s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */
s32 func_0203c498(void *);                          /* extern */

s32 func_0203d0dc(void *arg0) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r5;

    var_r5  = 0;
    temp_r4 = func_02038e10();
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
                func_020370b8(arg0 + 0x18);
            } while (!(M2C_FIELD(arg0, volatile s32 *, 0xC) & 0x40));
        } else {
            do {
                func_020370b8(arg0 + 0x18);
                if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
                    var_r0_2 = 1;
                } else {
                    var_r0_2 = 0;
                }
            } while (var_r0_2 != 0);
        }
    }
    func_02038e24(temp_r4);
    if (var_r5 != 0) {
        return func_0203c498(arg0);
    }
    if (M2C_FIELD(arg0, volatile s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
