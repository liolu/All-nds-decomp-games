#include "m2c.h"

M2C_UNK func_02075040();                            /* extern */
extern M2C_UNK data_020df968;

void *func_02074e5c(void *arg0, void *arg1) {
    func_02075040();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020df968;
    M2C_FIELD(arg0, s32 *, 0x11C)  = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x120)  = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x124)  = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, u16 *, 0x128)  = (u16) M2C_FIELD(arg1, u16 *, 0x2C);
    M2C_FIELD(arg0, u16 *, 0x12A)  = (u16) M2C_FIELD(arg1, u16 *, 0x2E);
    M2C_FIELD(arg0, u16 *, 0x12C)  = (u16) M2C_FIELD(arg1, u16 *, 0x30);
    M2C_FIELD(arg0, u16 *, 0x12E)  = (u16) M2C_FIELD(arg1, u16 *, 0x32);
    M2C_FIELD(arg0, u16 *, 0x130)  = (u16) M2C_FIELD(arg1, u16 *, 0x34);
    M2C_FIELD(arg0, u8 *, 0x132)   = (u8) M2C_FIELD(arg1, u8 *, 0x36);
    M2C_FIELD(arg0, u8 *, 0x133)   = (u8) M2C_FIELD(arg1, u8 *, 0x37);
    return arg0;
}
