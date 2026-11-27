#include "m2c.h"

M2C_UNK func_020d4994(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020e3960(M2C_UNK *, s32);              /* extern */
s32 func_020e3a58(M2C_UNK *, void *, M2C_UNK);      /* extern */
M2C_UNK func_0209fc78(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209ff34(void *);                      /* extern */

void func_0209feb8(void *arg0, s32 arg1) {
    u8 sp0[1024];

    func_020d4994(arg0, 0, 0x40);
    M2C_FIELD(arg0, s32 *, 0)    = 0x40;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    func_0209ff34(arg0 + 4);
    func_0209fc78(arg0 + 0x10, 0);
    func_020e3960(sp0, 0xEDB88320);
    M2C_FIELD(arg0, s32 *, 0x3C) = func_020e3a58(sp0, arg0, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | 1);
}
