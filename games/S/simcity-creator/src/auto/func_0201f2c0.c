#include "m2c.h"

s32 func_02014364(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK data_020c8108;

s32 func_0201f2c0(s32 arg0) {
    if (func_02014364(arg0 + 0x2C, &data_020c8108) == 0) {
        return 1;
    }
    return 0;
}
