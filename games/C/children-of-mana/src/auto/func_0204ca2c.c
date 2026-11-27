/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204bfe4(void *);                          /* extern */
M2C_UNK func_0204d09c(void *, s32, M2C_UNK);        /* extern */

void func_0204ca2c(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r9;
    void *var_r8;

    var_r4                        = -1;
    M2C_FIELD(arg0, s32 *, 0x1C0) = -1;
    var_r9                        = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x120) > 0) {
        var_r8 = arg0 + 0x18;
    loop_2:
        temp_r0 = func_0204bfe4(var_r8);
        if (temp_r0 == arg1) {
            M2C_FIELD(arg0, s32 *, 0x1C0) = var_r9;
        } else {
            if ((temp_r0 > arg1) && (var_r4 == -1)) {
                var_r4 = var_r9;
            }
            var_r9 += 1;
            var_r8 += 0x2C;
            if (var_r9 < (s32) M2C_FIELD(arg0, s32 *, 0x120)) {
                goto loop_2;
            }
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C0) == -1) {
        if (var_r4 == -1) {
            var_r4 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x1C0) = var_r4;
    }
    func_0204d09c(arg0, M2C_FIELD(arg0, s32 *, 0x1C0), 1);
}
