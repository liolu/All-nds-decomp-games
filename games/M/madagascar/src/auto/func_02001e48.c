/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02001e38(void *);                          /* extern */
M2C_UNK func_020057bc(M2C_UNK);                     /* extern */
s32 func_02043804(void *);                          /* extern */
M2C_UNK func_02043844(void *);                      /* extern */
s32 func_02043bd0(s32);                             /* extern */
M2C_UNK func_02043bec(s32);                         /* extern */

void *func_02001e48(void *arg0, s32 arg1) {
    s32 var_r4;
    s32 var_r5;
    s32 var_r7;

    M2C_FIELD(arg0, s32 *, 4)   = (s32) (arg0 + 0xC);
    M2C_FIELD(arg0, void **, 8) = (void *) (arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 0)   = arg1;
    func_020057bc(0x1000);
    if (func_02001e38(arg0) == 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if ((var_r5 != 0) || (func_02043bd0(M2C_FIELD(arg0, s32 *, 4)) != 0)) {
        func_02043bec(M2C_FIELD(arg0, s32 *, 4));
    }
    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0) {
        var_r7 = 0;
        do {
            if ((var_r5 != 0) || (func_02043804(M2C_FIELD(arg0, void **, 8) + var_r7) != 0)) {
                func_02043844(M2C_FIELD(arg0, void **, 8) + var_r7);
            }
            var_r4 += 1;
            var_r7 += 0x60;
        } while (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 0));
    }
    return arg0;
}
