#include "m2c.h"

M2C_UNK func_0206e29c();                            /* extern */

void func_020656a4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x34) == 0) {
        return;
    }
    func_0206e29c();
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
