#include "m2c.h"

M2C_UNK func_020358c0(M2C_UNK);                     /* extern */
s32 func_0203599c(M2C_UNK);                         /* extern */
s32 func_0205323c();                                /* extern */
s32 func_02053284();                                /* extern */
M2C_UNK func_020565d0(M2C_UNK, void *);             /* extern */
s32 func_020937b0();                                /* extern */
M2C_UNK func_020a20b0(void *);                      /* extern */
M2C_UNK func_020a21c8(s32, s32, M2C_UNK, s32);      /* extern */

void func_020aa37c(M2C_UNK arg0, void *arg1) {
    s32 temp_r4;
    s32 temp_r5;

    if (M2C_FIELD(arg1, u8 *, 0x2D4) == 0) {
        func_020a20b0(arg1);
    }
    func_020565d0(arg0, arg1 + 0x2CC);
    if (func_0203599c(arg0) == 0) {
        return;
    }
    temp_r5 = func_020937b0();
    func_020358c0(arg0);
    temp_r4 = func_02053284();
    func_020358c0(arg0);
    func_020a21c8(temp_r5, temp_r4, 1, func_0205323c());
}
