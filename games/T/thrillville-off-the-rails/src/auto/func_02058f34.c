#include "m2c.h"

M2C_UNK func_0203560c(M2C_UNK);                     /* extern */
M2C_UNK func_020358c0(M2C_UNK);                     /* extern */
s32 func_0203599c();                                /* extern */
s32 func_0203bf8c();                                /* extern */
s32 func_02053284();                                /* extern */
M2C_UNK func_02056b70(s32, s32);                    /* extern */

void func_02058f34(M2C_UNK arg0) {
    s32 temp_r4;

    if (func_0203599c() != 0) {
        temp_r4 = func_0203bf8c();
        func_020358c0(arg0);
        func_02056b70(temp_r4, func_02053284());
    }
    func_0203560c(arg0);
}
