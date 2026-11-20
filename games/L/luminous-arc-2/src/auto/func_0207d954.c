#include "m2c.h"

s32 func_0209cf1c(s32);                             /* extern */
s32 func_0207b9f4(M2C_UNK);                         /* extern */
M2C_UNK func_0207bac8(M2C_UNK);                     /* extern */
M2C_UNK func_0207db24(s32, M2C_UNK, s32);           /* extern */
extern s32 data_02172540;

s32 func_0207d954(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0207b9f4(1);
    temp_r0 = func_0207b9f4(4);
    func_0207db24(temp_r5, arg0, temp_r0);
    data_02172540 = 4;
    if (func_0209cf1c(temp_r0) == 0) {
        return 0xC;
    }
    func_0207bac8(2);
    return 0x11;
}
