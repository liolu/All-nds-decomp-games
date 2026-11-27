/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_0202a9ec(M2C_UNK, M2C_UNK, s32, s32);      /* extern */
extern M2C_UNK data_0210e254;

void func_020e1a80(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = func_0202a9ec(arg1, 1, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) * ((u16 *) ((s8 *) &data_0210e254 + (M2C_FIELD(arg0, s32 *, 4) * 8)));
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
}
