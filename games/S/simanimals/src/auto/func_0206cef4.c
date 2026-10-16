#include "m2c.h"

M2C_UNK func_02065888(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02065d74(M2C_UNK);                     /* extern */
M2C_UNK func_02065f30(s32);                         /* extern */
s32 func_02065f9c();                                /* extern */
M2C_UNK func_0206dc84();                            /* extern */

void func_0206cef4(void) {
    s32 temp_r4;

    func_0206dc84();
    func_02065888(0, 0, 0, 0);
    temp_r4 = func_02065f9c();
    func_02065d74(1);
    func_02065f30(temp_r4);
}
