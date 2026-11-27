/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */

void *func_020e66a4(void *arg0) {
    void *temp_r0;

    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s8 *, 0xC)   = 0;
    M2C_FIELD(arg0, s8 *, 0xD)   = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x18)  = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = -1;
    M2C_FIELD(arg0, s16 *, 0xE0) = 1;
    func_02001cc8(arg0 + 0x1C, 0, 0x40);
    func_02001cc8(arg0 + 0x5C, 0, 0x40);
    func_02001cc8(arg0 + 0x9C, 0, 0x40);
    func_02001cc8(arg0 + 0xE4, 0, 0x300);
    temp_r0                      = arg0 + 0x3E4;
    M2C_FIELD(arg0, s8 *, 0x3E4) = 0;
    M2C_FIELD(temp_r0, s8 *, 1)  = 0;
    M2C_FIELD(temp_r0, s8 *, 2)  = 0;
    M2C_FIELD(temp_r0, s8 *, 3)  = 0;
    M2C_FIELD(temp_r0, s8 *, 4)  = 0;
    M2C_FIELD(temp_r0, s8 *, 5)  = 0;
    M2C_FIELD(temp_r0, s8 *, 6)  = 0;
    M2C_FIELD(temp_r0, s8 *, 7)  = 0;
    M2C_FIELD(temp_r0, s8 *, 8)  = 0;
    func_02001cc8(arg0 + 0x3F0, 0, 0x340);
    func_02001cc8(arg0 + 0x730, 0, 0x40);
    return arg0;
}
