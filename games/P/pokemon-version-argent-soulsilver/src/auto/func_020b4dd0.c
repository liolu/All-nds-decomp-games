/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_020b4bac(s32, void *);                 /* extern */
M2C_UNK func_020b4b68(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_020b4da8(void *);                          /* extern */
extern s32 data_021d84d0;
extern M2C_UNK data_021d84d4;

void func_020b4dd0(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | (u8) arg4);
    func_020b4b68(arg0 + 0xC, 4);
    if (data_021d84d0 == 0) {
        func_020b4b68(&data_021d84d4, 4);
        data_021d84d0 = 1;
    }
    func_020b4bac(func_020b4da8(arg0), arg0);
}
