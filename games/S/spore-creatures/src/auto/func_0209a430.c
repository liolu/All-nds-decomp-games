#include "m2c.h"

M2C_UNK func_0209a4f8();                            /* extern */
M2C_UNK func_0209a6e0(void *);                      /* extern */

void func_0209a430(void *arg0) {
    func_0209a4f8();
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_0209a6e0(arg0 + 0x14);
}
