/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203e540(void *);                      /* extern */
extern M2C_UNK data_0210e930;

void *func_020e80c0(void *arg0, s32 arg1) {
    s32 var_r7;
    void *temp_r0;
    void *var_r6;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210e930;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s16 *, 0x10)   = -1;
    var_r7                         = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x7C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x80)   = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 4;
    M2C_FIELD(arg0, s32 *, 0xC)    = 5;
    var_r6                         = arg0 + 0x18;
    do {
        func_0203e540(var_r6);
        temp_r0 = arg0 + var_r7;
        var_r7 += 1;
        M2C_FIELD(temp_r0, s8 *, 0x78) = 0;
        var_r6 += 0x20;
    } while (var_r7 < 3);
    return arg0;
}
