#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
M2C_UNK func_0205d634(s32, u16);                    /* extern */
s32 func_0205e85c(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0205e9d4(s32, M2C_UNK, M2C_UNK, s16);  /* extern */
M2C_UNK func_0205ec54(s32, u16);                    /* extern */
extern M2C_UNK func_0207a588;

void func_0207a4f4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s16 arg4, s32 arg5) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4                         = func_020291d0(&func_0207a588, 0x1016);
    temp_r0                         = func_0205e85c(1, arg1, -1, arg5, 0x11008);
    M2C_FIELD(temp_r4, s32 *, 0x1C) = temp_r0;
    func_0205e9d4(temp_r0, arg2, arg3, arg4);
    func_0205ec54(M2C_FIELD(temp_r4, s32 *, 0x1C), M2C_FIELD(arg0, u16 *, 0x14));
    func_0205d634(M2C_FIELD(temp_r4, s32 *, 0x1C), M2C_FIELD(arg0, u16 *, 0x16));
    M2C_FIELD(temp_r4, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x24) = arg5;
}
