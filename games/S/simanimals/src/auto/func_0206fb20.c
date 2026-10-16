#include "m2c.h"

M2C_UNK func_0206fa64(s32, void *);
M2C_UNK func_0206faf0(M2C_UNK *, M2C_UNK);
s32 func_0206fbac(void *);
extern s32 data_02092af8;
extern M2C_UNK data_02092afc;

void func_0206fb20(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, volatile s32 *, 0)    = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) | (u8) arg4);
    func_0206faf0(arg0 + 0xC, 4);
    if (data_02092af8 == 0) {
        func_0206faf0(&data_02092afc, 4);
        data_02092af8 = 1;
    }
    func_0206fa64(func_0206fbac(arg0), arg0);
}
