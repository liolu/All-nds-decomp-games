#include "m2c.h"

M2C_UNK func_ov006_0215aa4c(void *);                /* extern */

void func_02002f9c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) > 0) {
        func_ov006_0215aa4c(arg0 + 0x14);
    }
    M2C_FIELD(arg0, s8 *, 9) = 0;
}
