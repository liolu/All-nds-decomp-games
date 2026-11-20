#include "m2c.h"

M2C_UNK func_020609a8();                            /* extern */
s16 func_02060a40(s32);                             /* extern */
void *func_02060e38();                              /* extern */
M2C_UNK func_02060e44(M2C_UNK);                     /* extern */
void *func_02060e9c();                              /* extern */
s32 func_02060ea8(s32);                             /* extern */

void func_02060964(s32 arg0) {
    void *temp_r4;

    temp_r4                                 = func_02060e38();
    M2C_FIELD(func_02060e9c(), s32 *, 0x10) = arg0;
    func_02060e44(1);
    M2C_FIELD(temp_r4, s32 *, 0)   = arg0;
    M2C_FIELD(temp_r4, s32 *, 4)   = func_02060ea8(arg0);
    M2C_FIELD(temp_r4, s16 *, 0xA) = func_02060a40(M2C_FIELD(temp_r4, s32 *, 0));
    func_020609a8();
}
