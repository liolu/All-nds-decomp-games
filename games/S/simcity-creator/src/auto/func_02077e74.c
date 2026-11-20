#include "m2c.h"

M2C_UNK func_02073878(s32, s32);                    /* extern */
s32 func_02073884(s32);                             /* extern */

void func_02077e74(s32 *arg0) {
    if (func_02073884(*arg0) == 0) {
        return;
    }
    func_02073878(*arg0, func_02073884(*arg0) - 1);
}
