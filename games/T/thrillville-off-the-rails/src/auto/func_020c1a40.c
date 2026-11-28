/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

M2C_UNK func_020c1c7c(void *, M2C_UNK);             /* extern */

void *func_020c1a40(void *arg0) {
    s32 var_r0;
    s32 var_r1;
    void *var_r2;
    void *var_r3;

    var_r2 = arg0;
    var_r1 = 6;
    do {
        M2C_FIELD(var_r2, s8 *, 0) = 0;
        M2C_FIELD(var_r2, s8 *, 1) = 0;
        M2C_FIELD(var_r2, s8 *, 2) = 0;
        M2C_FIELD(var_r2, s8 *, 3) = 0;
        var_r2 += 4;
        var_r1 -= 1;
    } while (var_r1 != 0);
    M2C_FIELD(var_r2, s8 *, 0) = 0;
    M2C_FIELD(var_r2, s8 *, 1) = 0;
    M2C_FIELD(var_r2, s8 *, 2) = 0;
    var_r3                     = arg0 + 0x1B;
    var_r0                     = 6;
    do {
        M2C_FIELD(var_r3, s8 *, 0) = 0;
        M2C_FIELD(var_r3, s8 *, 1) = 0;
        M2C_FIELD(var_r3, s8 *, 2) = 0;
        M2C_FIELD(var_r3, s8 *, 3) = 0;
        var_r3 += 4;
        var_r0 -= 1;
    } while (var_r0 != 0);
    M2C_FIELD(var_r3, s8 *, 0) = 0;
    M2C_FIELD(var_r3, s8 *, 1) = 0;
    M2C_FIELD(var_r3, s8 *, 2) = 0;
    func_020c1c7c(arg0, 0xA7);
    func_020c1c7c(arg0, 0xAA);
    func_020c1c7c(arg0, 0xAE);
    func_020c1c7c(arg0, 0xB3);
    func_020c1c7c(arg0, 0x82);
    func_020c1c7c(arg0, 0x83);
    func_020c1c7c(arg0, 0x85);
    func_020c1c7c(arg0, 0x86);
    func_020c1c7c(arg0, 0x88);
    func_020c1c7c(arg0, 0x89);
    func_020c1c7c(arg0, 0x8B);
    func_020c1c7c(arg0, 0x8C);
    func_020c1c7c(arg0, 0x8E);
    func_020c1c7c(arg0, 0x8F);
    func_020c1c7c(arg0, 0x91);
    func_020c1c7c(arg0, 0x92);
    func_020c1c7c(arg0, 0x94);
    func_020c1c7c(arg0, 0x95);
    func_020c1c7c(arg0, 0x97);
    func_020c1c7c(arg0, 0x98);
    func_020c1c7c(arg0, 0x9A);
    func_020c1c7c(arg0, 0x9B);
    func_020c1c7c(arg0, 0x9D);
    func_020c1c7c(arg0, 0x9E);
    func_020c1c7c(arg0, 0xA0);
    func_020c1c7c(arg0, 0xA1);
    func_020c1c7c(arg0, 0xA3);
    func_020c1c7c(arg0, 0xA4);
    func_020c1c7c(arg0, 0x64);
    func_020c1c7c(arg0, 0x65);
    func_020c1c7c(arg0, 0);
    return arg0;
}
