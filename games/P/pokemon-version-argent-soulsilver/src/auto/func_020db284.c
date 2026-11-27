#include "m2c.h"

M2C_UNK func_020d3aa8(s32);                         /* extern */
M2C_UNK func_020dafe8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020db25c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020db3b4(s32 *, s32 *);                /* extern */
s32 func_020db774(M2C_UNK);                         /* extern */
s32 func_020db794();                                /* extern */

void func_020db284(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_020d3aa8(0x996A00);
    if (func_020db794() != 1) {
        func_020db3b4(&sp4, &sp0);
        if (sp4 != 0) {
            func_020db25c(0, 0);
        }
        if (sp0 != 0) {
            func_020db25c(1, 0);
        }
        if (func_020db774(1) == 0) {
            do {
                func_020d3aa8(0x996A00);
            } while (func_020db774(1) == 0);
        }
    }
    func_020dafe8(0xE, arg0, arg1);
}
