#include "m2c.h"

M2C_UNK func_02095354(s32);                         /* extern */
M2C_UNK func_02095d54(void *);                      /* extern */

void *func_02095414(void *arg0) {
    s32 var_r4;

    var_r4 = M2C_FIELD(arg0, volatile s32 *, 8);
    if (var_r4 != (var_r4 + (M2C_FIELD(arg0, volatile s32 *, 0xC) * 8))) {
        do {
            func_02095354(var_r4);
            var_r4 += 8;
        } while (var_r4 != (M2C_FIELD(arg0, volatile s32 *, 8) + (M2C_FIELD(arg0, volatile s32 *, 0xC) * 8)));
    }
    func_02095d54(arg0 + 8);
    return arg0;
}
