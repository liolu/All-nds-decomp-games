/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020bd7f0;

void func_0200bfa4(void *arg0) {
    s32 var_ip;
    s32 var_ip_2;
    s32 var_ip_3;
    void *var_r3;
    void *var_r3_2;
    void *var_r3_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd7f0;
    M2C_FIELD(arg0, s32 *, 4)      = 0x30C;
    var_ip                         = 0;
    M2C_FIELD(arg0, s8 *, 0x38)    = 0;
    M2C_FIELD(arg0, s8 *, 0x39)    = 0;
    M2C_FIELD(arg0, s32 *, 0x144)  = 2;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x144) > 0) {
        var_r3 = arg0;
        do {
            M2C_FIELD(var_r3, s32 *, 0x44) = 0;
            var_ip += 1;
            var_r3 += 0xC;
        } while (var_ip < (s32) M2C_FIELD(arg0, s32 *, 0x144));
    }
    var_ip_2                    = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x144) > 0) {
        var_r3_2 = arg0;
        do {
            M2C_FIELD(var_r3_2, s32 *, 0x48) = 0;
            var_ip_2 += 1;
            var_r3_2 += 0xC;
        } while (var_ip_2 < (s32) M2C_FIELD(arg0, s32 *, 0x144));
    }
    var_ip_3                     = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x144) <= 0) {
        return;
    }
    var_r3_3 = arg0;
    do {
        M2C_FIELD(var_r3_3, s32 *, 0x4C) = 0;
        var_ip_3 += 1;
        var_r3_3 += 0xC;
    } while (var_ip_3 < (s32) M2C_FIELD(arg0, s32 *, 0x144));
}
