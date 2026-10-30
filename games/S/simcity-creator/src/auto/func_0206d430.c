#include "m2c.h"

s32 func_02053808(M2C_UNK);                         /* extern */
s32 func_02053814(M2C_UNK);                         /* extern */
s32 func_0206c7f4(void *);                          /* extern */
M2C_UNK func_0206d4cc(M2C_UNK);                     /* extern */
M2C_UNK func_0206ffc8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02070154(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020726a0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02072894(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020af540(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0206d430(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02072894(arg1, 0);
    func_020726a0(arg1, 0);
    if (func_0206c7f4(arg0) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x70) != 0) {
        func_0206d4cc(1);
        func_020af540(func_02053808(arg2), 1, -0x10, 0);
        func_020af540(func_02053814(arg2), 1, -0x10, 0);
        func_0206ffc8(arg1, 1);
        return;
    }
    func_02070154(arg1, 1);
}
