/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_02077f14(void *);                      /* extern */
M2C_UNK func_020780b0(void *, M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK func_0207caa8(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020fe16c;
extern M2C_UNK data_020fe1e4;
extern M2C_UNK data_020fe25c;
extern M2C_UNK data_020fe264;
extern M2C_UNK data_021654bc;

void *func_02092e5c(void *arg0) {
    s32 var_r1;
    void *temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fe16c;
    func_0207caa8(arg0 + 4, 3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fe1e4;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_020fe25c;
    func_02077f14(arg0 + 0xA4);
    var_r1                       = 0;
    M2C_FIELD(arg0, s8 *, 0xEC)  = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0x1001;
    M2C_FIELD(arg0, s8 *, 0xC6)  = 0;
    M2C_FIELD(arg0, s8 *, 0xC7)  = 0;
    M2C_FIELD(arg0, s8 *, 0xC8)  = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = -1;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s16 *, 0x82) = 0;
    do {
        temp_r0                         = arg0 + (var_r1 * 8);
        M2C_FIELD(temp_r0, s32 *, 0x84) = 0;
        var_r1 += 1;
        M2C_FIELD(temp_r0, s32 *, 0x88) = 0;
    } while (var_r1 < 4);
    M2C_FIELD(&data_021654bc, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0)        = 0;
    func_020780b0(arg0 + 0xA4, &data_020fe264, 0, 0, 4, 0);
    return arg0;
}
