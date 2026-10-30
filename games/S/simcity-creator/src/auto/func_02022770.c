#include "m2c.h"

M2C_UNK func_020055c4(void *, M2C_UNK);             /* extern */
M2C_UNK func_02006e64(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK func_02022694(void *, M2C_UNK);             /* extern */

void func_02022770(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_020055c4(arg0, 0x400);
    func_02006e64(0, arg0, 0x400);
    M2C_FIELD(arg0, s32 *, 0x400) = arg1;
    M2C_FIELD(arg0, s32 *, 0x404) = arg2;
    M2C_FIELD(arg0, s32 *, 0x408) = arg3;
    func_02022694(arg0, 0);
    func_02006e64(0xC0, (void *) 0x07000000, 0x400);
    M2C_FIELD(arg0, s16 *, 0x40C) = 0;
}
