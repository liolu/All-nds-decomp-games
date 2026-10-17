/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202d9d4();                            /* extern */
extern M2C_UNK data_020bd3f8;

void *func_020090d0(void *arg0, void *arg1) {
    func_0202d9d4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd3f8;
    M2C_FIELD(arg0, s32 *, 0xCC)   = 0;
    M2C_FIELD(arg0, s32 *, 0xD0)   = 0;
    M2C_FIELD(arg0, s32 *, 0xD4)   = 0;
    M2C_FIELD(arg0, s32 *, 0xD8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xDC)   = 0;
    M2C_FIELD(arg0, s32 *, 0xE0)   = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0xE4)   = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x100)  = 0;
    M2C_FIELD(arg0, s32 *, 0x104)  = 0;
    return arg0;
}
