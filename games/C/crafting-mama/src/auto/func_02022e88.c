#include "m2c.h"

s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */
void *func_020228c8();                              /* extern */
s32 func_020228d8();                                /* extern */

s32 func_02022e88(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_02019d04();
    temp_r0 = func_020228d8();
    if (temp_r0 != 0) {
        func_02019d18(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_020228c8(), s32 *, 0xC8) = arg0;
    func_02019d18(temp_r5);
    return 0;
}
