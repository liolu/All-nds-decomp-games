#include "m2c.h"

M2C_UNK func_02006e64(M2C_UNK, void *, M2C_UNK);    /* extern */
s32 func_0206bbe0(M2C_UNK);                         /* extern */
s32 func_0206be00(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02073360(s32, M2C_UNK);                    /* extern */

void func_02056bf8(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 8)    = func_0206bbe0(arg2);
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg3;
    M2C_FIELD(arg0, s32 *, 0x14) = func_0206be00(arg2, 0x3E);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C) = 0;
    M2C_FIELD(arg0, s16 *, 0x2E) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = func_02073360(M2C_FIELD(arg0, s32 *, 4), 1);
    func_02006e64(0, arg0 + 0x30, 0x18);
}
