#include "m2c.h"

M2C_UNK func_02037638(void *);                      /* extern */
M2C_UNK func_0203865c(void *, s32);                 /* extern */

void func_0203a8b0(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x64) != 0xFFFF) {
        func_0203865c(arg0 + 0x10, M2C_FIELD(arg0, s32 *, 0x7C));
    }
    func_02037638(arg0 + 0x84);
}
