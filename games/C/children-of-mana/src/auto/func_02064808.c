/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064740(s32, void *);                 /* extern */
M2C_UNK func_020647d4(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_02064898(void *);                          /* extern */
extern s32 data_0211e344;
extern M2C_UNK data_0211e348;

void func_02064808(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | (u8) arg4);
    func_020647d4(arg0 + 0xC, 4);
    if (data_0211e344 == 0) {
        func_020647d4(&data_0211e348, 4);
        data_0211e344 = 1;
    }
    func_02064740(func_02064898(arg0), arg0);
}
