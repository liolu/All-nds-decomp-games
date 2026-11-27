/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b9d74();                            /* extern */
extern M2C_UNK data_02108cdc;

void *func_020bca6c(void *arg0) {
    void *var_r2;
    void *var_r3;

    func_020b9d74();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02108cdc;
    M2C_FIELD(arg0, s16 *, 0x248)  = 1;
    var_r2                         = arg0 + 0x24C;
    var_r3                         = arg0 + 0x274;
    do {
        M2C_FIELD(var_r2, s32 *, 0)    = 0;
        M2C_FIELD(var_r2, s32 *, 4)    = 0;
        M2C_FIELD(var_r2, s16 *, 8)    = 0;
        M2C_FIELD(var_r2, s16 *, 0xA)  = 0;
        M2C_FIELD(var_r2, s16 *, 0xC)  = 0;
        M2C_FIELD(var_r2, s16 *, 0xE)  = 0;
        M2C_FIELD(var_r2, s16 *, 0x10) = -1;
        M2C_FIELD(var_r2, s16 *, 0x12) = 0;
        var_r2 += 0x14;
    } while (var_r2 != var_r3);
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
    } while (var_r3 != (arg0 + 0x29C));
    M2C_FIELD(arg0, s32 *, 0x29C) = 0;
    M2C_FIELD(arg0, s16 *, 0x2A0) = 0;
    return arg0;
}
