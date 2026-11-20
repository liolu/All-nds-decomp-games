#include "m2c.h"

M2C_UNK func_020b6c40(s32);                         /* extern */
M2C_UNK func_020bc338(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020bc524(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020bc620(s32 *, s32 *);                /* extern */
s32 func_020bc9ac(M2C_UNK);                         /* extern */
s32 func_020bc9cc();                                /* extern */

void func_020bc54c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_020b6c40(0x996A00);
    if (func_020bc9cc() != 1) {
        func_020bc620(&sp4, &sp0);
        if (sp4 != 0) {
            func_020bc524(0, 0);
        }
        if (sp0 != 0) {
            func_020bc524(1, 0);
        }
        if (func_020bc9ac(1) == 0) {
            do {
                func_020b6c40(0x996A00);
            } while (func_020bc9ac(1) == 0);
        }
    }
    func_020bc338(0xE, arg0, arg1);
}
