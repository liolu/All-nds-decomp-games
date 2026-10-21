#include "m2c.h"

M2C_UNK func_02047688();           /* extern */
M2C_UNK func_0205ec7c();                    /* extern */

void func_020473dc(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 & 1) {
        func_02047688(1);
    }
    if (arg0 & 2) {
        func_02047688(2, arg1, arg2);
    }
    if (arg0 & 4) {
        func_02047688(4, arg1, arg2);
    }
    if (arg0 & 8) {
        func_02047688(8, arg1, arg2);
    }
    func_0205ec7c(0 - arg1, 0 - arg2);
}
