#include "m2c.h"

M2C_UNK func_0202d5c0(void *, void *);              /* extern */

void func_0202d75c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE4) < 2) {
        return;
    }
    func_0202d5c0(arg0, arg0);
    M2C_FIELD(arg0, s32 *, 0xE4) = 1;
}
