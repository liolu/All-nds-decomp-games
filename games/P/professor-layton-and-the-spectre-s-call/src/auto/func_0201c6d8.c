#include "m2c.h"

s32 func_0201732c();                                /* extern */
M2C_UNK func_02017340(s32);                         /* extern */
void *func_0201c0f4();                              /* extern */
s32 func_0201c104();                                /* extern */

s32 func_0201c6d8(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0201732c();
    temp_r0 = func_0201c104();
    if (temp_r0 != 0) {
        func_02017340(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_0201c0f4(), s32 *, 0xC8) = arg0;
    func_02017340(temp_r5);
    return 0;
}
