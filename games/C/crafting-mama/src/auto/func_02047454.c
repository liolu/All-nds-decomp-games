#include "m2c.h"

M2C_UNK func_020475a0();           /* extern */
M2C_UNK func_0205ec60();                    /* extern */

void func_02047454(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 & 1) {
        func_020475a0(1);
    }
    if (arg0 & 2) {
        func_020475a0(2, arg1, arg2);
    }
    if (arg0 & 4) {
        func_020475a0(4, arg1, arg2);
    }
    if (arg0 & 8) {
        func_020475a0(8, arg1, arg2);
    }
    func_0205ec60(0 - arg1, 0 - arg2);
}
