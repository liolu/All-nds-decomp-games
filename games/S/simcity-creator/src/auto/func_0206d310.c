#include "m2c.h"

M2C_UNK func_0201c650();                            /* extern */
s32 func_0205369c(M2C_UNK);                         /* extern */
M2C_UNK func_020536c8(M2C_UNK);                     /* extern */
s32 func_02053808(M2C_UNK);                         /* extern */
s32 func_0206cdb0();                                /* extern */
M2C_UNK func_0206d0d0(void *);                      /* extern */
M2C_UNK func_0207013c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02070154(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02072894(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020ae5fc(s32, M2C_UNK);                /* extern */
M2C_UNK func_020af540(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_020b132c();                                /* extern */

void func_0206d310(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;

    temp_r4 = func_0206cdb0();
    func_020536c8(arg2);
    func_0201c650();
    if (temp_r4 == 3) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x80) != 0) {
        func_0207013c(arg1, 9);
        func_02070154(arg1, 6);
        func_020af540(func_02053808(arg2), 2, -0x10, 0);
        func_020ae5fc(func_0205369c(arg2), 0xF);
        if (func_020b132c() == 8) {
            func_0206d0d0(arg0);
        }
    }
    if ((temp_r4 == 1) && (M2C_FIELD(arg0, u8 *, 0x80) == 0)) {
        func_02072894(arg1, 0);
        M2C_FIELD(arg0, u8 *, 0x80) = 1U;
    }
}
