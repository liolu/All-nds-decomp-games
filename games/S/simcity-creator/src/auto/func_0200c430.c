#include "m2c.h"

M2C_UNK func_02006750(s32);                         /* extern */
M2C_UNK func_0200c194(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0200c408(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0200c548(s32 *, s32 *);                /* extern */
s32 func_0200c940(M2C_UNK);                         /* extern */
s32 func_0200c960();                                /* extern */

void func_0200c430(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_02006750(0x996A00);
    if (func_0200c960() != 1) {
        func_0200c548(&sp4, &sp0);
        if (sp4 != 0) {
            func_0200c408(0, 0);
        }
        if (sp0 != 0) {
            func_0200c408(1, 0);
        }
        if (func_0200c940(1) == 0) {
            do {
                func_02006750(0x996A00);
            } while (func_0200c940(1) == 0);
        }
    }
    func_0200c194(0xE, arg0, arg1);
}
