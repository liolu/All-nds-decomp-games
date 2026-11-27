#include "m2c.h"

M2C_UNK func_020b32b8(void *);                      /* extern */

void func_02008b70(s32 *arg0) {
    if (*arg0 == 0) {
        return;
    }
    *arg0 = 0;
    func_020b32b8(((s8 *) arg0 + 4));
}
