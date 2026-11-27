/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f35c();                            /* extern */
extern M2C_UNK data_0210e2f0;

void *func_020e3cb0(void *arg0) {
    void *temp_r0;
    void *temp_r1;

    func_0200f35c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210e2f0;
    M2C_FIELD(arg0, s32 *, 0x20)   = 1;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg0, s8 *, 0x28)    = 0;
    M2C_FIELD(arg0, s8 *, 0x29)    = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x2C)    = 0;
    temp_r0                        = arg0 + 0x2C;
    M2C_FIELD(temp_r0, s8 *, 1)    = 0;
    M2C_FIELD(temp_r0, s8 *, 2)    = 0;
    M2C_FIELD(temp_r0, s8 *, 3)    = 0;
    M2C_FIELD(temp_r0, s8 *, 4)    = 0;
    M2C_FIELD(temp_r0, s8 *, 5)    = 0;
    M2C_FIELD(temp_r0, s8 *, 6)    = 0;
    M2C_FIELD(temp_r0, s8 *, 7)    = 0;
    M2C_FIELD(arg0, s8 *, 0x34)    = 0;
    temp_r1                        = arg0 + 0x34;
    M2C_FIELD(temp_r1, s8 *, 1)    = 0;
    M2C_FIELD(temp_r1, s8 *, 2)    = 0;
    M2C_FIELD(temp_r1, s8 *, 3)    = 0;
    M2C_FIELD(temp_r1, s8 *, 4)    = 0;
    M2C_FIELD(temp_r1, s8 *, 5)    = 0;
    M2C_FIELD(temp_r1, s8 *, 6)    = 0;
    M2C_FIELD(temp_r1, s8 *, 7)    = 0;
    return arg0;
}
