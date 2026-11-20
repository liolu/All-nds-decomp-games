/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207a3b0(s32, void *);                 /* extern */
M2C_UNK func_0207a444(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_0207a508(void *);                          /* extern */
extern s32 data_020ec14c;
extern M2C_UNK data_020ec150;

void func_0207a478(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | (u8) arg4);
    func_0207a444(arg0 + 0xC, 4);
    if (data_020ec14c == 0) {
        func_0207a444(&data_020ec150, 4);
        data_020ec14c = 1;
    }
    func_0207a3b0(func_0207a508(arg0), arg0);
}
