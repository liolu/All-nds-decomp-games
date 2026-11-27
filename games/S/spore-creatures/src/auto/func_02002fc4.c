#include "m2c.h"

M2C_UNK func_ov006_0215aa4c(void *);                /* extern */

void func_02002fc4(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) <= 0) {
        return;
    }
    func_ov006_0215aa4c(arg0 + 0xC);
}
