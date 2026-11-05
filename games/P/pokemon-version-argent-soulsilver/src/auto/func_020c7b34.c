#include "m2c.h"

M2C_UNK func_020c921c();                            /* extern */
M2C_UNK func_020d519c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020d57d4(M2C_UNK);                     /* extern */
M2C_UNK func_020d5990(s32);                         /* extern */
s32 func_020d59fc();                                /* extern */

void func_020c7b34(void) {
    s32 temp_r4;

    func_020c921c();
    func_020d519c(0, 0, 0, 0);
    temp_r4 = func_020d59fc();
    func_020d57d4(1);
    func_020d5990(temp_r4);
}
