#include "m2c.h"

M2C_UNK func_020ca99c();                            /* extern */
M2C_UNK func_020cd4d8();                            /* extern */
M2C_UNK func_020cd508(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern s8 data_021701b8;

void func_020779c4(void) {
    data_021701b8 = 0;
    func_020ca99c();
    func_020cd4d8();
    func_020cd508(2, 2, 0);
}
