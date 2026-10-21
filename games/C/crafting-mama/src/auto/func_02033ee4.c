#include "m2c.h"

M2C_UNK func_0202ade4(void *);                      /* extern */

s32 func_02033ee4(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        func_0202ade4(arg0 + 0x14);
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_0202ade4(arg0 + 0x1C);
    }
    return 1;
}
