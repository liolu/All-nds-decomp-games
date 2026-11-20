/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020011c4();                        /* extern */
extern s32 data_020d8820;

s32 func_02033f24(void *arg0) {
    if ((func_020011c4(data_020d8820, arg0 + 0x174) != 0) || (((u32) (M2C_FIELD(arg0, u8 *, 0x15D) << 0x1C) >> 0x1F) != 0) ||
        (((u32) (M2C_FIELD(arg0, u8 *, 0x15C) << 0x1A) >> 0x1F) != 0)) {
        return 1;
    }
    return 0;
}
