#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
M2C_UNK func_0202e5a0(s16, s16, M2C_UNK, s16);      /* extern */
void *func_0202ede0(s16);                           /* extern */
M2C_UNK func_020309b4(void *, s16, s16, M2C_UNK, s32, s32); /* extern */
s32 func_0206f0b0(void *);                          /* extern */
extern M2C_UNK func_0206f0e4;

void *func_0206f13c(s16 arg0, s16 arg1, s32 arg2, s16 arg3, s32 arg4) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0                         = func_020291d0(&func_0206f0e4, 0x11A);
    M2C_FIELD(temp_r0, s32 *, 0x1C) = arg2;
    M2C_FIELD(temp_r0, s16 *, 0x24) = arg3;
    M2C_FIELD(temp_r0, s16 *, 0x20) = arg0;
    M2C_FIELD(temp_r0, s16 *, 0x22) = arg1;
    if (arg4 != 0) {
        func_0202e5a0(arg0, (s16) (arg1 - 0x18), 0, arg3);
    }
    temp_r0_2                      = func_0202ede0(M2C_FIELD(temp_r0, s16 *, 0x24));
    M2C_FIELD(temp_r0_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r0_2, s32 *, 4) | 2);
    func_020309b4(temp_r0_2, M2C_FIELD(temp_r0, s16 *, 0x20), M2C_FIELD(temp_r0, s16 *, 0x22), 0, -0x18,
                  func_0206f0b0(temp_r0));
    M2C_FIELD(temp_r0, s32 *, 0x28) = 1;
    return temp_r0;
}
