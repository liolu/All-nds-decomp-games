#include "m2c.h"

M2C_UNK func_0200bd20(s32, void *);                 /* extern */

void func_0201cd00(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 1) == 0) {
        return;
    }
    func_0200bd20(M2C_FIELD(arg0, s32 *, 4), arg0 + 8);
}
