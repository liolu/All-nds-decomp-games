#include "m2c.h"

extern M2C_UNK data_020e1b74;

s32 func_0209d980(u32 arg0) {
    if (arg0 >= 5U) {
        return 0;
    }
    if (((u8 *) &data_020e1b74)[arg0] == 1) {
        return 1;
    }
    return 0;
}
