/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bee74();                            /* extern */
extern M2C_UNK data_0210bae4;

void *func_020d3194(void *arg0) {
    void *var_r3;

    func_020bee74();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210bae4;
    M2C_FIELD(arg0, s32 *, 0xF8)   = -1;
    M2C_FIELD(arg0, s32 *, 0xFC)   = 0x14;
    M2C_FIELD(arg0, s32 *, 0x100)  = 0;
    M2C_FIELD(arg0, s32 *, 0x104)  = 0;
    var_r3                         = arg0 + 0x108;
    do {
        M2C_FIELD(var_r3, s32 *, 0)    = 0;
        M2C_FIELD(var_r3, s32 *, 4)    = 0;
        M2C_FIELD(var_r3, s16 *, 8)    = 0;
        M2C_FIELD(var_r3, s16 *, 0xA)  = 0;
        M2C_FIELD(var_r3, s16 *, 0xC)  = 0;
        M2C_FIELD(var_r3, s16 *, 0xE)  = 0;
        M2C_FIELD(var_r3, s16 *, 0x10) = -1;
        M2C_FIELD(var_r3, s16 *, 0x12) = 0;
        var_r3 += 0x14;
    } while (var_r3 != (arg0 + 0x130));
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    return arg0;
}
