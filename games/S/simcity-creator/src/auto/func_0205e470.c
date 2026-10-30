#include "m2c.h"

M2C_UNK func_02006964();                            /* extern */
s32 func_020538ec();                                /* extern */
s32 func_0206bbe0(M2C_UNK);                         /* extern */
s32 func_0206bdec(M2C_UNK);                         /* extern */
s32 func_0206bdf4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0206fff0(s32);                         /* extern */

void func_0205e470(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    if ((arg1 > 0x100) || (arg1 < 0)) {
        func_02006964();
    }
    if ((arg2 > 0x100) || (arg2 < 0)) {
        func_02006964();
    }
    M2C_FIELD(arg0, s16 *, 0)    = (s16) arg1;
    M2C_FIELD(arg0, s16 *, 2)    = (s16) arg2;
    M2C_FIELD(arg0, s16 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 8)    = func_0206bbe0(arg3);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0206bdec(arg3);
    func_0206fff0(arg4);
    M2C_FIELD(arg0, s32 *, 0x20) = func_020538ec();
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg4;
    M2C_FIELD(arg0, s32 *, 0x14) = func_0206bdf4(arg3, 0xA);
    M2C_FIELD(arg0, s16 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
