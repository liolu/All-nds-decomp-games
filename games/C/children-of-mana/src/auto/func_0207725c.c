/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ca9b8(u16);                             /* extern */

void func_0207725c(void *arg0, void *arg1) {
    void *temp_r4;

    temp_r4                      = M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(arg0, s32 *, 0)    = (s32) M2C_FIELD(temp_r4, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4)    = func_020ca9b8(M2C_FIELD(temp_r4, u16 *, 2));
    M2C_FIELD(arg0, s32 *, 8)    = func_020ca9b8(M2C_FIELD(temp_r4, u16 *, 0));
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(temp_r4, u16 *, 2) << 0xC);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_r4, u16 *, 0) << 0xC);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(temp_r4, u16 *, 2) << 0xC);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(temp_r4, u16 *, 0) << 0xC);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s16 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s16 *, 0x50) = 0x7FFF;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x1F;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
}
