/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020539cc(void *);                      /* extern */
s32 func_02053a48(void *);                          /* extern */

s32 func_02053ad8(void *arg0) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r1;
    s32 var_r4;

    var_r4 = 0;
    if (M2C_FIELD(arg0, volatile s32 *, 0x10) & 2) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        temp_r0 = func_02053a48(arg0);
        if (M2C_FIELD(arg0, volatile s32 *, 0x10) & 4) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        if (var_r1 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) & ~4);
            var_r4                                = M2C_FIELD(arg0, volatile s32 *, 0x38);
            M2C_FIELD(arg0, volatile s32 *, 0x38) = 0;
            M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x30);
            M2C_FIELD(arg0, volatile s32 *, 0x28) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x34);
            M2C_FIELD(arg0, volatile s32 *, 0x44) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x3C);
        }
        if (temp_r0 != 0) {
            func_020539cc(arg0);
        }
    }
    return var_r4;
}
