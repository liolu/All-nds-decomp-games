#include "m2c.h"

s32 func_0208c968(s32);                             /* extern */
s32 func_0208cd84(M2C_UNK);                         /* extern */
M2C_UNK func_0208cdac(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02085130();                                /* extern */
M2C_UNK func_02085144(s32);                         /* extern */

void func_0208d7e4(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_02085130();
    temp_r4 = func_0208c968(arg1);
    if (arg0 == func_0208cd84(arg2)) {
        func_0208cdac(arg2, 0);
    }
    func_0208c968(temp_r4);
    func_02085144(temp_r5);
}
