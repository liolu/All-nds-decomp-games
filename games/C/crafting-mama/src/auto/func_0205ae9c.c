#include "m2c.h"

extern M2C_UNK data_02086f58;

s32 func_0205ae9c(s32 arg0, s32 *arg1) {
    if (*((M2C_UNK *) ((s8 *) &data_02086f58 + (arg0 << 5))) != 0xA) {
        if (arg1 != NULL) {
            *arg1 = 5;
        }
        return 1;
    }
    if (arg1 != NULL) {
        *arg1 = 0;
    }
    return 0;
}
