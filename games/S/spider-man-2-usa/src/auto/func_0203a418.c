#include "m2c.h"

M2C_UNK func_0203a430();                            /* extern */

void func_0203a418(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg1 >> M2C_FIELD(arg0, s32 *, 4));
    func_0203a430();
}
