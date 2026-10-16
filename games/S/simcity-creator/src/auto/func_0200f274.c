#include "m2c.h"

s32 func_020066e0();                                /* extern */
M2C_UNK func_020066f4(s32);                         /* extern */
void *func_0200ed44();                              /* extern */
s32 func_0200ed54();                                /* extern */

s32 func_0200f274(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020066e0();
    temp_r0 = func_0200ed54();
    if (temp_r0 != 0) {
        func_020066f4(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_0200ed44(), s32 *, 0xC8) = arg0;
    func_020066f4(temp_r5);
    return 0;
}
