#include "m2c.h"

M2C_UNK func_02003c20();                            /* extern */
M2C_UNK func_02003c68(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02003cd4();                            /* extern */
M2C_UNK func_02003dd4();                            /* extern */
M2C_UNK func_02003dec(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02003e50();                            /* extern */
s32 func_020cd52c();                                /* extern */
M2C_UNK func_020cd7a4();                            /* extern */
M2C_UNK func_020cd7d0(s32);                         /* extern */

void func_020cda10(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = func_020cd52c();
    func_020cd7a4();
    if (arg2 == 1) {
        func_02003c20();
        func_02003c68(temp_r4, arg1 << 9, 0x200);
        func_02003cd4();
    } else {
        func_02003dd4();
        func_02003dec(temp_r4, arg1 << 9, 0x200);
        func_02003e50();
    }
    func_020cd7d0(temp_r4);
}
