#include "m2c.h"

M2C_UNK func_020ae588(s32, s32);                    /* extern */

void func_020536a8(s32 *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0) {
        var_r1 = 0x9001;
    }
    func_020ae588(*arg0 + 0x14, var_r1);
}
