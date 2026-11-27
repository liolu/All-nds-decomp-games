#include "m2c.h"

s32 func_0201b960();                  /* extern */
s8 func_020378a0();                   /* extern */
s16 func_020378d0();                  /* extern */
s32 func_02037900();                  /* extern */
s8 func_02037930();                   /* extern */
M2C_UNK func_0204f2a4();                 /* extern */
M2C_UNK func_02088a58();                    /* extern */
extern M2C_UNK data_0209eeb0;
extern M2C_UNK data_0209eeb8;
extern M2C_UNK data_0209ef1c;
extern M2C_UNK data_0209f034;
extern M2C_UNK data_0209f03c;
extern M2C_UNK data_0209f044;
extern M2C_UNK data_0209f048;
extern M2C_UNK data_0209f050;
extern M2C_UNK data_0209f054;
extern M2C_UNK data_0209f058;
extern M2C_UNK data_0209f05c;
extern M2C_UNK data_0209f060;
extern M2C_UNK data_0209f064;
extern M2C_UNK data_0209f068;
extern M2C_UNK data_0209f06c;
extern M2C_UNK data_0209f074;
extern M2C_UNK data_0209f07c;
extern M2C_UNK data_0209f084;
extern M2C_UNK data_0209f08c;
extern M2C_UNK data_0209f094;
extern M2C_UNK data_0209f09c;
extern M2C_UNK data_0209f0a4;
extern M2C_UNK data_0209f0ac;
extern M2C_UNK data_0209f0b4;
extern M2C_UNK data_0209f0bc;
extern M2C_UNK data_0209f0c8;
extern M2C_UNK data_0209f0d4;
extern M2C_UNK data_0209f0e4;
extern M2C_UNK data_0209f0ec;

void func_020537f8(void *arg0, s16 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_02088a58(arg0 + 0x114, func_0201b960(&data_0209eeb8, func_020378d0(&data_0209eeb0)));
    func_0204f2a4(arg0, arg1);
    M2C_FIELD(arg0, s8 *, 1)     = func_020378a0(&data_0209ef1c, arg1);
    M2C_FIELD(arg0, s8 *, 2)     = func_020378a0(&data_0209f034, arg1);
    M2C_FIELD(arg0, s8 *, 0x2A)  = func_020378a0(&data_0209f03c, arg1);
    M2C_FIELD(arg0, s16 *, 0x28) = arg1;
    M2C_FIELD(arg0, s8 *, 7)     = 0x1F;
    M2C_FIELD(arg0, s8 *, 0x108) = func_020378a0(&data_0209f050, arg1);
    temp_r0                      = func_02037900(&data_0209f044, arg1);
    M2C_FIELD(arg0, s32 *, 0xA4) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0xA8) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0xA0) = temp_r0;
    temp_r0_2                    = func_02037900(&data_0209f048, arg1);
    M2C_FIELD(arg0, s32 *, 0xB4) = temp_r0_2;
    M2C_FIELD(arg0, s32 *, 0xB8) = temp_r0_2;
    M2C_FIELD(arg0, s32 *, 0xB0) = temp_r0_2;
    M2C_FIELD(arg0, s16 *, 0xE4) = func_020378d0(&data_0209f054, arg1);
    M2C_FIELD(arg0, s16 *, 0xE6) = func_020378d0(&data_0209f058, arg1);
    M2C_FIELD(arg0, s16 *, 0xE8) = func_020378d0(&data_0209f05c, arg1);
    M2C_FIELD(arg0, s16 *, 0xEA) = func_020378d0(&data_0209f060, arg1);
    M2C_FIELD(arg0, s16 *, 0xEC) = func_020378d0(&data_0209f064, arg1);
    M2C_FIELD(arg0, s16 *, 0xEE) = func_020378d0(&data_0209f068, arg1);
    M2C_FIELD(arg0, s8 *, 0x10C) = 0;
    M2C_FIELD(arg0, s8 *, 0x166) = func_02037930(&data_0209f06c, arg1);
    M2C_FIELD(arg0, s8 *, 0x167) = func_02037930(&data_0209f074, arg1);
    M2C_FIELD(arg0, s8 *, 0x168) = func_02037930(&data_0209f07c, arg1);
    M2C_FIELD(arg0, s8 *, 0x169) = func_02037930(&data_0209f084, arg1);
    M2C_FIELD(arg0, s8 *, 0x16A) = func_02037930(&data_0209f08c, arg1);
    M2C_FIELD(arg0, s8 *, 0x16B) = func_02037930(&data_0209f094, arg1);
    M2C_FIELD(arg0, s8 *, 0x16C) = func_02037930(&data_0209f09c, arg1);
    M2C_FIELD(arg0, s8 *, 0x16D) = func_02037930(&data_0209f0e4, arg1);
    M2C_FIELD(arg0, s8 *, 0x16E) = func_02037930(&data_0209f0ec, arg1);
    M2C_FIELD(arg0, s8 *, 0x186) = func_02037930(&data_0209f0a4, arg1);
    M2C_FIELD(arg0, s8 *, 0x187) = func_02037930(&data_0209f0ac, arg1);
    M2C_FIELD(arg0, s8 *, 0x188) = func_02037930(&data_0209f0b4, arg1);
    M2C_FIELD(arg0, s8 *, 0x18E) = func_02037930(&data_0209f0bc, arg1);
    M2C_FIELD(arg0, s8 *, 0x18F) = func_02037930(&data_0209f0c8, arg1);
    M2C_FIELD(arg0, s8 *, 0x190) = func_02037930(&data_0209f0d4, arg1);
}
