#include "m2c.h"

s32 func_ov005_02155590();                          /* extern */
M2C_UNK func_ov005_0215583c(s32, u8);               /* extern */

void func_02063a28(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        return;
    }
    func_ov005_0215583c(func_ov005_02155590(), M2C_FIELD(arg0, u8 *, 5));
    M2C_FIELD(arg0, u8 *, 4) = 0U;
}
