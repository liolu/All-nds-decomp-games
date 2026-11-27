/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0207aa58;

void func_02005120(void *arg0, s32 arg1) {
    s16 temp_ip;
    s16 temp_r2;
    s32 temp_lr;

    temp_lr                      = (arg1 >> 4) * 2;
    temp_ip                      = *((u16 *) ((s8 *) &data_0207aa58 + (temp_lr * 2)));
    M2C_FIELD(arg0, s32 *, 0)    = 0x1000;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    temp_r2                      = *((u16 *) ((s8 *) &data_0207aa58 + ((temp_lr + 1) * 2)));
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) temp_r2;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) temp_ip;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (0 - temp_ip);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) temp_r2;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}
