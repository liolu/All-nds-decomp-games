#include "m2c.h"

M2C_UNK func_0207b9f4(M2C_UNK);                     /* extern */
s32 func_0207baac();                                /* extern */
s32 func_0207c2dc();                                /* extern */
s32 func_0207c3d4();                                /* extern */

s32 func_0207c298(void) {
    s32 var_r4;

    var_r4 = func_0207baac();
    func_0207b9f4(0x10);
    switch (var_r4) {                               /* irregular */
        case 7:
            var_r4 = func_0207c2dc();
            break;
        case 8:
            var_r4 = func_0207c3d4();
            break;
    }
    return var_r4;
}
