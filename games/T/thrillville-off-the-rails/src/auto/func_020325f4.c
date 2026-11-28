#include "m2c.h"

M2C_UNK func_02074314(s32);                         /* extern */

void *func_020325f4(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 0) << 0x1F) >> 0x1F) != 0) {
        func_02074314(M2C_FIELD(arg0, s32 *, 8));
    }
    return arg0;
}
