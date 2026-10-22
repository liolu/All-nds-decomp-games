#include "m2c.h"

M2C_UNK func_02035ddc();                            /* extern */

void func_02005004(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
    func_02035ddc();
}
