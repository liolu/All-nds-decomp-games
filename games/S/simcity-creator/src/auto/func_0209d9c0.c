#include "m2c.h"

s32 func_020705d4();                                /* extern */
M2C_UNK func_0209da68(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0209dad4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0209db4c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0209d9c0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_020705d4();
    switch (temp_r0) {                              /* irregular */
        case 1:
            func_0209da68(arg0, arg1, arg2);
            return;
        case 2:
            func_0209dad4(arg1, arg2);
            return;
        case 5:
            func_0209db4c(arg0, arg1, arg2);
            return;
    }
}
