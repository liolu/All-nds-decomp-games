#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020621c0(s32, void *, s32);            /* extern */
s32 func_0206bbf0(s32);                             /* extern */
M2C_UNK func_0206bdec(s32);                         /* extern */
M2C_UNK func_020b442c();                            /* extern */

void func_020abe74(void *arg0) {
    *(s32 *) 0x04000014 = 0;
    func_0206bdec(M2C_FIELD(arg0, s32 *, 0x10));
    func_020b442c();
    if (M2C_FIELD(arg0, s32 *, 0x164) == 0) {
        return;
    }
    func_020621c0(func_0206bbf0(M2C_FIELD(arg0, s32 *, 0x10)), arg0 + 0x164, 0x122);
    func_02006ee8(arg0 + 0x164, 0, 0x100);
}
