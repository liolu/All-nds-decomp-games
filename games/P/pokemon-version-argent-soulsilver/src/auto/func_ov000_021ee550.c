#include "m2c.h"

s32 func_ov000_021ee7d4();                          /* extern */
extern void *data_ov000_0221a7a4;

s32 func_ov000_021ee550(s32 arg0) {
    if (data_ov000_0221a7a4 == NULL) {
        return 0;
    }
    if (!(M2C_FIELD(data_ov000_0221a7a4, s32 *, 0x664) & (1 << arg0))) {
        return 0;
    }
    return func_ov000_021ee7d4();
}
