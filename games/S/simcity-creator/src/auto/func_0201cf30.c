#include "m2c.h"

M2C_UNK func_0201cb44(void *);                      /* extern */

void func_0201cf30(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_0201cb44(arg0 + 0x1C);
}
