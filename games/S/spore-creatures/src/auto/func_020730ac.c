#include "m2c.h"

s32 func_02001e7c(s32, M2C_UNK);                    /* extern */
extern s32 data_020e0ba0;

s32 func_020730ac(void) {
    if ((func_02001e7c(data_020e0ba0 + 0xC, 0x31) != 0) || (func_02001e7c(data_020e0ba0 + 0xC, 0x30) != 0)) {
        return 1;
    }
    return 0;
}
