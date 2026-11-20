#include "m2c.h"

M2C_UNK func_02057ee8(s32, void *);
M2C_UNK func_02057f74(M2C_UNK *, M2C_UNK);
s32 func_02058030(void *);
extern s32 data_02262ee0;
extern M2C_UNK data_02262ee4;

void func_02057fa4(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, volatile s32 *, 0)    = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) | (u8) arg4);
    func_02057f74(arg0 + 0xC, 4);
    if (data_02262ee0 == 0) {
        func_02057f74(&data_02262ee4, 4);
        data_02262ee0 = 1;
    }
    func_02057ee8(func_02058030(arg0), arg0);
}
