/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020823ac;
extern M2C_UNK data_020d00a8;
extern M2C_UNK data_020d00b0;
extern M2C_UNK data_020d00ec;

M2C_UNK *func_02017940(void *arg0) {
    M2C_UNK *var_r2;

    var_r2 = &data_020823ac;
    if (M2C_FIELD(arg0, u8 *, 0x260) == 0) {
        var_r2 = (M2C_UNK *) ((M2C_FIELD(arg0, s32 *, 0x258) * 0xC) + (s32) &data_020d00ec);
    } else if (M2C_FIELD(arg0, u8 *, 0x261) != 0) {
        var_r2 = &data_020d00b0;
    } else if (M2C_FIELD(arg0, s32 *, 0x258) == 0) {
        if (((u32) (M2C_FIELD(&data_020d00a8, u8 *, 9) << 0x1F) >> 0x1F) != 1) {
            var_r2 = &data_020d00b0;
        }
    } else if (((u32) (M2C_FIELD(&data_020d00a8, u8 *, 9) << 0x1F) >> 0x1F) == 1) {
        var_r2 = &data_020d00b0;
    }
    return var_r2;
}
