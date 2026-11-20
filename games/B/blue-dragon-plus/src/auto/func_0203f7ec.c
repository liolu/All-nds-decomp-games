#include "m2c.h"

M2C_UNK func_02038e80(s32);                         /* extern */
M2C_UNK func_0203f550(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0203f7c4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203f8ec(s32 *, s32 *);                /* extern */
s32 func_0203fcac(M2C_UNK);                         /* extern */
s32 func_0203fccc();                                /* extern */

void func_0203f7ec(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_02038e80(0x996A00);
    if (func_0203fccc() != 1) {
        func_0203f8ec(&sp4, &sp0);
        if (sp4 != 0) {
            func_0203f7c4(0, 0);
        }
        if (sp0 != 0) {
            func_0203f7c4(1, 0);
        }
        if (func_0203fcac(1) == 0) {
            do {
                func_02038e80(0x996A00);
            } while (func_0203fcac(1) == 0);
        }
    }
    func_0203f550(0xE, arg0, arg1);
}
