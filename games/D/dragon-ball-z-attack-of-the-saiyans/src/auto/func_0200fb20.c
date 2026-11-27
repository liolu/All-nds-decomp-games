/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0200fd34(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020c7228;
extern M2C_UNK data_020c7254;
extern M2C_UNK data_020c79dc;

void func_0200fb20(void) {
    s32 temp_r0;
    s32 var_ip;
    u32 temp_r0_2;

    M2C_FIELD(&data_020c7228, s32 *, 8)     = 0x2345;
    M2C_FIELD(&data_020c7228, s32 *, 0xC)   = 0x5D588B65;
    M2C_FIELD(&data_020c7228, s32 *, 0x10)  = 0x269EC3;
    M2C_FIELD(&data_020c7228, s32 *, 0x14)  = 0x6789;
    M2C_FIELD(&data_020c7228, s32 *, 0x18)  = 0;
    M2C_FIELD(&data_020c7228, s32 *, 0x1C)  = 0x6C078965;
    M2C_FIELD(&data_020c7228, s32 *, 0x20)  = 0x5D588B65;
    M2C_FIELD(&data_020c7228, s32 *, 0x24)  = 0x269EC3;
    M2C_FIELD(&data_020c7228, s32 *, 0x28)  = 0;
    temp_r0                                 = M2C_FIELD(&data_020c7228, s32 *, 4) + 0x1571;
    M2C_FIELD(&data_020c7228, s32 *, 4)     = temp_r0;
    var_ip                                  = 1;
    M2C_FIELD(&data_020c7228, s32 *, 0x7B4) = temp_r0;
    do {
        temp_r0_2 = M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020c79dc + (var_ip * 4))), u32 *, -4);
        *((M2C_UNK *) ((s8 *) &data_020c79dc + (var_ip * 4))) = ((temp_r0_2 ^ (temp_r0_2 >> 0x1E)) * 0x6C078965) + var_ip;
        var_ip += 1;
    } while (var_ip < 0x270);
    M2C_FIELD(&data_020c7228, s32 *, 0) = var_ip;
    func_0200fd34(&data_020c7254);
}
