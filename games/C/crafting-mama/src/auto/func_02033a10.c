#include "m2c.h"

M2C_UNK func_02001570(void *, void *, M2C_UNK);     /* extern */

void func_02033a10(void *arg0, void *arg1, s32 arg2) {
    if (arg2 != 0) {
        M2C_FIELD(arg1, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
    }
    func_02001570(arg1 + 0x28, arg0 + 0x28, 0x24);
}
