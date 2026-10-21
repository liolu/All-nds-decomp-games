#include "m2c.h"

M2C_UNK func_02018b48();                            /* extern */
M2C_UNK func_02018b54();                            /* extern */

void func_020252b4(s32 arg0, u32 arg1, u32 arg2) {
    if (arg1 >= arg2) {
        func_02018b48();
        return;
    }
    func_02018b54();
}
