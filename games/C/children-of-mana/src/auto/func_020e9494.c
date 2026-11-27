/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020114e4();                            /* extern */
s32 func_02013d0c();                                /* extern */
extern M2C_UNK data_0210e940;

void *func_020e9494(void *arg0) {
    void *temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210e940;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = -1;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    M2C_FIELD(arg0, s32 *, 0x2C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x30)   = -1;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s8 *, 0x40)    = 0;
    M2C_FIELD(arg0, s8 *, 0x14)    = 0;
    temp_r0                        = arg0 + 0x14;
    M2C_FIELD(temp_r0, s8 *, 1)    = 0;
    M2C_FIELD(temp_r0, s8 *, 2)    = 0;
    M2C_FIELD(temp_r0, s8 *, 3)    = 0;
    M2C_FIELD(temp_r0, s8 *, 4)    = 0;
    M2C_FIELD(temp_r0, s8 *, 5)    = 0;
    M2C_FIELD(temp_r0, s8 *, 6)    = 0;
    M2C_FIELD(temp_r0, s8 *, 7)    = 0;
    M2C_FIELD(temp_r0, s8 *, 8)    = 0;
    M2C_FIELD(temp_r0, s8 *, 9)    = 0;
    M2C_FIELD(temp_r0, s8 *, 0xA)  = 0;
    M2C_FIELD(temp_r0, s8 *, 0xB)  = 0;
    func_020114e4();
    M2C_FIELD(arg0, s32 *, 0x28) = func_02013d0c();
    return arg0;
}
