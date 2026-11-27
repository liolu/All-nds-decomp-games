/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

M2C_UNK func_02051430(s32, void *);                 /* extern */
M2C_UNK func_02051408(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_0205155c(void *);                          /* extern */
extern s32 data_020d0a00;
extern M2C_UNK data_020d0a04;

void func_02051578(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | (u8) arg4);
    func_02051408(arg0 + 0xC, 4);
    if (data_020d0a00 == 0) {
        func_02051408(&data_020d0a04, 4);
        data_020d0a00 = 1;
    }
    func_02051430(func_0205155c(arg0), arg0);
}
