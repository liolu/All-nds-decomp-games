/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02106e80;
extern s8 data_021266a4;
extern s8 data_021266a8;
extern s8 data_021266b0;
extern M2C_UNK data_021267e0;
extern M2C_UNK data_021268e0;

void func_020aabbc(void *arg0) {
    s32 var_r3;
    s32 var_r3_2;

    var_r3 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_021268e0 + (var_r3 * 4))) = (s32) M2C_FIELD((arg0 + var_r3), u8 *, 0x58);
        var_r3 += 1;
    } while (var_r3 < 0x80);
    var_r3_2 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_021267e0 + (var_r3_2 * 4))) = M2C_FIELD((arg0 + (var_r3_2 * 4)), s32 *, 0xD8);
        var_r3_2 += 1;
    } while (var_r3_2 < 0x40);
    data_021266a4 = M2C_FIELD(arg0, s8 *, 0x1D9);
    data_021266a8 = M2C_FIELD(arg0, s8 *, 0x1DA);
    data_021266b0 = (s8) ((u32) (M2C_FIELD(arg0, u8 *, 0x40C) << 0x19) >> 0x1F);
    func_0200e8c8(&data_02106e80);
}
