#include "m2c.h"

M2C_UNK func_0200dbbc(s32, void *);
M2C_UNK func_0200dc48(M2C_UNK *, M2C_UNK);
s32 func_0200dd04(void *);
extern s32 data_020eb118;
extern M2C_UNK data_020eb11c;

void func_0200dc78(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, volatile s32 *, 0)    = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) | (u8) arg4);
    func_0200dc48(arg0 + 0xC, 4);
    if (data_020eb118 == 0) {
        func_0200dc48(&data_020eb11c, 4);
        data_020eb118 = 1;
    }
    func_0200dbbc(func_0200dd04(arg0), arg0);
}
