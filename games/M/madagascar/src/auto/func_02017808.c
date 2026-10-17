/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020d00a8;
extern M2C_UNK data_020d00f4;

s32 func_02017808(void *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x260) == 0) {
        var_r2 = *((M2C_UNK *) ((s8 *) &data_020d00f4 + (M2C_FIELD(arg0, s32 *, 0x258) * 0xC))) & 0xF0;
    } else if (M2C_FIELD(arg0, u8 *, 0x261) != 0) {
        var_r2 = M2C_FIELD(&data_020d00a8, s32 *, 0x10) & 0xF0;
    } else if (M2C_FIELD(arg0, s32 *, 0x258) == 0) {
        if (((u32) (M2C_FIELD(&data_020d00a8, u8 *, 9) << 0x1F) >> 0x1F) != 1) {
            var_r2 = M2C_FIELD(&data_020d00a8, s32 *, 0x10) & 0xF0;
        }
    } else if (((u32) (M2C_FIELD(&data_020d00a8, u8 *, 9) << 0x1F) >> 0x1F) == 1) {
        var_r2 = M2C_FIELD(&data_020d00a8, s32 *, 0x10) & 0xF0;
    }
    return var_r2;
}
