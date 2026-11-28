#include "m2c.h"

M2C_UNK func_0207432c();                            /* extern */
M2C_UNK func_0207dee0();                            /* extern */

void func_02048cd0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x58) != 0) {
        func_0207dee0();
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_0207432c();
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
