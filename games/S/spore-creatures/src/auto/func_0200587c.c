#include "m2c.h"

M2C_UNK func_02005800(s32);                         /* extern */
M2C_UNK func_02006528(M2C_UNK *, M2C_UNK, s32, M2C_UNK, s32); /* extern */
s32 func_02006568(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_0200659c(M2C_UNK *, M2C_UNK, s32);         /* extern */
s32 func_020065dc(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK data_020e0bcc;

void func_0200587c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    if (func_020065dc(&data_020e0bcc, arg0, arg1) == 0) {
        return;
    }
    temp_r0 = func_02006568(&data_020e0bcc, arg0, arg1);
    temp_r4 = func_0200659c(&data_020e0bcc, arg0, temp_r0);
    func_02006528(&data_020e0bcc, arg0, temp_r0, arg1, 0);
    func_02005800(temp_r4);
}
