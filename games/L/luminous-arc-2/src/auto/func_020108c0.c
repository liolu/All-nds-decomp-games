#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
void *func_0201036c();                              /* extern */
s32 func_0201037c();                                /* extern */

s32 func_020108c0(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_02006be0();
    temp_r0 = func_0201037c();
    if (temp_r0 != 0) {
        func_02006bf4(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_0201036c(), s32 *, 0xC8) = arg0;
    func_02006bf4(temp_r5);
    return 0;
}
