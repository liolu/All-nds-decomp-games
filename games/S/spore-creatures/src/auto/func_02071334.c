#include "m2c.h"

void *func_0205b70c(s32, s32);                      /* extern */
s32 func_02071b74(s32);                             /* extern */

s32 func_02071334(s32 arg0, s32 arg1) {
    s32 var_r4;
    void *var_r0;

    if (arg1 == 3) {
        return 0;
    }
    var_r4 = 0;
    var_r0 = func_0205b70c(arg0 + 0x1C0, func_02071b74(arg1));
    if (var_r0 != NULL) {
        var_r4 = 1;
        if (var_r0 != NULL) {
            do {
                var_r0 = M2C_FIELD(var_r0, void **, 4);
            } while (var_r0 != NULL);
        }
    }
    return var_r4;
}
