#include "m2c.h"

M2C_UNK func_02026764(M2C_UNK);                     /* extern */
M2C_UNK func_02026778();                            /* extern */
M2C_UNK func_02026790(M2C_UNK);                     /* extern */
M2C_UNK func_02026b58();                            /* extern */
M2C_UNK func_02026bfc(M2C_UNK, u16, s32, u16);      /* extern */
s32 func_02074300(s32);                             /* extern */
M2C_UNK func_0207432c();                            /* extern */

void func_0203df5c(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (arg1 == temp_r0) {
        return;
    }
    if (arg1 == 2) {
        M2C_FIELD(arg0, s32 *, 0x10) = arg2;
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            func_0207432c();
        }
        if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
            func_0207432c();
        }
        M2C_FIELD(arg0, s32 *, 0xC)  = func_02074300((M2C_FIELD(arg0, s32 *, 0x10) + 1) * 8);
        M2C_FIELD(arg0, s32 *, 0x14) = func_02074300(M2C_FIELD(arg0, s32 *, 0x10) * 8);
        func_02026778();
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x10);
        func_02026bfc(0, (u16) temp_r2, M2C_FIELD(arg0, s32 *, 0xC), (u16) (temp_r2 + 1));
        func_02026790(2);
        func_02026764(2);
    } else if (temp_r0 == 2) {
        func_02026b58();
        func_02026790(4);
        func_02026764(4);
    }
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
