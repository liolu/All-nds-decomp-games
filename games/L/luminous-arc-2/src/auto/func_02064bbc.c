/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

s32 func_020cdb08(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020cdcac(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
extern u16 data_0215143a;
extern u16 data_02151440;
extern M2C_UNK data_02156024;
extern M2C_UNK data_02156164;
extern M2C_UNK data_021561a4;
extern M2C_UNK data_021561e4;
extern M2C_UNK data_02156224;

s32 func_02064bbc(void) {
    s32 var_r4;

    var_r4 = 0;
    if ((((u32) (data_02151440 << 0x1A) >> 0x1F) != 0) || (func_020cdb08(0x70, 0x90, 0x10, 0x10, 0) & 4)) {
        var_r4 = 1;
    } else if ((((u32) (data_02151440 << 0x1B) >> 0x1F) != 0) || (func_020cdb08(0xA0, 0x90, 0x10, 0x10, 0) & 4)) {
        var_r4 = 2;
    } else if (((u32) (data_0215143a << 0x1F) >> 0x1F) != 0) {
        var_r4 = 8;
    } else if ((((u32) (data_0215143a << 0x1E) >> 0x1F) != 0) || (func_020cdcac(&data_02156024, 0x20, 0x10) & 1)) {
        var_r4 = 4;
    } else if ((((u32) (data_02151440 << 0x16) >> 0x1F) != 0) || (func_020cdcac(&data_021561e4, 0x10, 0x10) & 1)) {
        var_r4 = 5;
    } else if ((((u32) (data_02151440 << 0x17) >> 0x1F) != 0) || (func_020cdcac(&data_02156224, 0x10, 0x10) & 1)) {
        var_r4 = 6;
    } else if ((((u32) (data_0215143a << 0x14) >> 0x1F) != 0) || (func_020cdcac(&data_02156164, 0x40, 0x10) & 1)) {
        var_r4 = 7;
    } else if ((((u32) (data_0215143a << 0x1C) >> 0x1F) != 0) || (func_020cdcac(&data_021561a4, 0x40, 0x10) & 1)) {
        var_r4 = 8;
    }
    return var_r4;
}
