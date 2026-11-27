#include "m2c.h"

M2C_UNK func_020d1ad4(s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK func_020d1f34(s32);                         /* extern */
M2C_UNK func_020d2388(s32, s32, u8);                /* extern */
M2C_UNK func_020d2600(s32);                         /* extern */
s32 func_020a0f44(void *);                          /* extern */
extern M2C_UNK func_020a0cfc;

s32 func_020a1090(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r4;

    temp_r4 = func_020a0f44(arg2);
    func_020d2388(arg1, arg0, M2C_FIELD(arg2, u8 *, 3));
    func_020d2600(arg1 + 0xE0);
    func_020d1ad4(arg1 + 0x20, &func_020a0cfc, arg1, arg0 + temp_r4, (s32) M2C_FIELD(arg2, u16 *, 0),
                  (s32) M2C_FIELD(arg2, u8 *, 2));
    func_020d1f34(arg1 + 0x20);
    return arg0 + temp_r4;
}
