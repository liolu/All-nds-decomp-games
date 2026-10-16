#include "m2c.h"

M2C_UNK func_02064aac(s32);                         /* extern */
M2C_UNK func_02069598(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0206980c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0206994c(s32 *, s32 *);                /* extern */
s32 func_02069d0c(M2C_UNK);                         /* extern */
s32 func_02069d2c();                                /* extern */

void func_02069834(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_02064aac(0x996A00);
    if (func_02069d2c() != 1) {
        func_0206994c(&sp4, &sp0);
        if (sp4 != 0) {
            func_0206980c(0, 0);
        }
        if (sp0 != 0) {
            func_0206980c(1, 0);
        }
        if (func_02069d0c(1) == 0) {
            do {
                func_02064aac(0x996A00);
            } while (func_02069d0c(1) == 0);
        }
    }
    func_02069598(0xE, arg0, arg1);
}
