#include "m2c.h"

s32 func_020066e0();                                /* extern */
M2C_UNK func_020066f4(s32);                         /* extern */
s32 func_02031b38(s32);                             /* extern */
s32 func_02031fb8(M2C_UNK);                         /* extern */
M2C_UNK func_02031fe0(M2C_UNK, M2C_UNK);            /* extern */

void func_02032ab0(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_020066e0();
    temp_r4 = func_02031b38(arg1);
    if (arg0 == func_02031fb8(arg2)) {
        func_02031fe0(arg2, 0);
    }
    func_02031b38(temp_r4);
    func_020066f4(temp_r5);
}
