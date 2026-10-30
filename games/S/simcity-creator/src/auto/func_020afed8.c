#include "m2c.h"

M2C_UNK func_0202c0b4(void *);                      /* extern */
M2C_UNK func_0202c170(void *, void *);              /* extern */
M2C_UNK func_0202c180(void *);                      /* extern */
M2C_UNK func_0202ca3c(void *, s32, s32);            /* extern */
M2C_UNK func_020aff38(s32, void *);                 /* extern */

void func_020afed8(s32 arg0, void *arg1, void *arg2) {
    func_0202c0b4(arg1);
    func_0202c180(arg2);
    func_020aff38(arg0, arg2);
    M2C_FIELD(arg2, s32 *, 0x14) = 0;
    func_0202c170(arg1, arg2);
    func_0202ca3c(arg1, arg0 + 0x14C, arg0 + 0x170);
    M2C_FIELD(arg1, s32 *, 0x80) = -0x1000;
}
