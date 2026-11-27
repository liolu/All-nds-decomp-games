/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205b00c(void *);                      /* extern */
s32 func_0205c948();                                /* extern */
M2C_UNK func_0205c95c(s32);                         /* extern */

s32 func_02053a48(void *arg0) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r5;

    temp_r4 = func_0205c948();
    if (M2C_FIELD(arg0, volatile s32 *, 0x10) & 8) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (var_r5 != 0) {
        if (M2C_FIELD(arg0, volatile s32 *, 0x10) & 0x10) {
            M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) | 0x40);
            do {
                func_0205b00c(arg0 + 0xE);
            } while (M2C_FIELD(arg0, volatile s32 *, 0x10) & 0x40);
        } else {
            M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) | 8);
        }
    }
    func_0205c95c(temp_r4);
    return var_r5;
}
