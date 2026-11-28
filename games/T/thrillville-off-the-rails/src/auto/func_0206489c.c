#include "m2c.h"

M2C_UNK func_02074314(s32);                         /* extern */
extern s32 data_020ef774;

void *func_0206489c(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 4) << 0x1F) >> 0x1F) != 0) {
        func_02074314(M2C_FIELD(arg0, s32 *, 0xC));
    }
    data_020ef774 = 0;
    return arg0;
}
