/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_0208a99c(s32, void *);                 /* extern */
M2C_UNK func_0208a958(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_0208ab98(void *);                          /* extern */
extern s32 data_020db4f0;
extern M2C_UNK data_020db4f4;

void func_0208abc0(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | (u8) arg4);
    func_0208a958(arg0 + 0xC, 4);
    if (data_020db4f0 == 0) {
        func_0208a958(&data_020db4f4, 4);
        data_020db4f0 = 1;
    }
    func_0208a99c(func_0208ab98(arg0), arg0);
}
