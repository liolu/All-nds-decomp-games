#include "m2c.h"

M2C_UNK func_0208a70c();                            /* extern */

void func_0201c1f0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 3;
    M2C_FIELD(arg0, s8 *, 0x31) = 0;
    M2C_FIELD(arg0, s8 *, 0x32) = 0;
    M2C_FIELD(arg0, s8 *, 0x33) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x34) == 0) {
        return;
    }
    func_0208a70c();
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
