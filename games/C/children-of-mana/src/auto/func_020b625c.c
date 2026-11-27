/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c3038();                                /* extern */
extern s32 data_02127ed0;

u8 func_020b625c(s32 arg0) {
    u16 temp_r2;

    temp_r2 = M2C_FIELD(((arg0 * 0xA6) + func_020c3038()), u16 *, 0xA4);
    if (((s32) temp_r2 <= -1) || ((s32) temp_r2 >= 0x174)) {
        return 0U;
    }
    return M2C_FIELD(((temp_r2 * 0x92) + data_02127ed0), u8 *, 0x90);
}
