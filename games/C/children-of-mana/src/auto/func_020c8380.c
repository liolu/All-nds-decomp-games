/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0209d538(void *);                      /* extern */
extern M2C_UNK data_0210a614;

void *func_020c8380(void *arg0) {
    s32 var_r2;
    void *temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210a614;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = -1;
    func_0209d538(arg0 + 0xC);
    var_r2                        = 0;
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C4) = -1;
    M2C_FIELD(arg0, s8 *, 0x3C8)  = 0;
    M2C_FIELD(arg0, s8 *, 0x3C9)  = 1;
    M2C_FIELD(arg0, s8 *, 0x3CA)  = 0;
    do {
        temp_r0 = arg0 + (var_r2 * 4);
        var_r2 += 1;
        M2C_FIELD(temp_r0, s32 *, 0x19C) = -1;
    } while (var_r2 < 8);
    func_02001cc8(arg0 + 0x1BC, 0, 0x200);
    return arg0;
}
