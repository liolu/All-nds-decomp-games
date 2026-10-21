#include "m2c.h"

M2C_UNK func_02004dfc(s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK func_02005198(s32);                         /* extern */
M2C_UNK func_02005610(s32, s32, u8);                /* extern */
M2C_UNK func_02005888(s32);                         /* extern */
s32 func_0209ad78(void *);                          /* extern */
extern M2C_UNK func_0209ab30;

s32 func_0209aec4(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r4;

    temp_r4 = func_0209ad78(arg2);
    func_02005610(arg1, arg0, M2C_FIELD(arg2, u8 *, 3));
    func_02005888(arg1 + 0xE0);
    func_02004dfc(arg1 + 0x20, &func_0209ab30, arg1, arg0 + temp_r4, (s32) M2C_FIELD(arg2, u16 *, 0),
                  (s32) M2C_FIELD(arg2, u8 *, 2));
    func_02005198(arg1 + 0x20);
    return arg0 + temp_r4;
}
