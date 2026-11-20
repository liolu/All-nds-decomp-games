#include "m2c.h"

M2C_UNK func_0201c5dc();                            /* extern */
M2C_UNK func_0205369c(M2C_UNK);                     /* extern */
M2C_UNK func_020536c8(M2C_UNK);                     /* extern */
M2C_UNK func_020536d8(M2C_UNK);                     /* extern */
s32 func_02053808(M2C_UNK);                         /* extern */
s32 func_02053814(M2C_UNK);                         /* extern */
M2C_UNK func_0206f1d0(void *, M2C_UNK);             /* extern */
s32 func_020ae60c();                                /* extern */
M2C_UNK func_020af540(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020b1090();                            /* extern */
s32 func_ov009_021643f4(s32);                       /* extern */
M2C_UNK func_ov012_02163b90(s32, M2C_UNK);          /* extern */

void func_0206e81c(void *arg0, M2C_UNK arg1) {
    func_020536c8(arg1);
    func_0201c5dc();
    func_020536d8(arg1);
    func_020b1090();
    func_ov012_02163b90(M2C_FIELD(arg0, s32 *, 8), arg1);
    if (func_ov009_021643f4(M2C_FIELD(arg0, s32 *, 8)) == 0) {
        return;
    }
    func_0205369c(arg1);
    if (func_020ae60c() != 0) {
        return;
    }
    func_0206f1d0(arg0, 2);
    func_020af540(func_02053808(arg1), 0, -0x10, 0);
    func_020af540(func_02053814(arg1), 0, -0x10, 0);
}
