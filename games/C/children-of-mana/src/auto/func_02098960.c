/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02099714();                            /* extern */
extern M2C_UNK data_021039cc;

void *func_02098960(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r3;
    void *temp_r1;

    func_02099714();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021039cc;
    M2C_FIELD(arg0, s32 *, 0xE0)   = 0;
    M2C_FIELD(arg0, s32 *, 0xE4)   = arg2;
    M2C_FIELD(arg0, s32 *, 0xE8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xEC)   = 6;
    M2C_FIELD(arg0, s32 *, 0xF0)   = 0;
    M2C_FIELD(arg0, s32 *, 0xF4)   = 1;
    M2C_FIELD(arg0, s32 *, 0xF8)   = 0xC;
    func_02001cc8(arg0 + 0x48, 0, 0x20);
    var_r3                       = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = -1;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    do {
        temp_r1                         = arg0 + (var_r3 * 4);
        M2C_FIELD(temp_r1, s16 *, 0xA0) = -1;
        var_r3 += 1;
        M2C_FIELD(temp_r1, s8 *, 0x9E) = 0;
    } while (var_r3 < 0x10);
    return arg0;
}
