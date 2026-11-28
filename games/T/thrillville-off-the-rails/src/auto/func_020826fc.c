#include "m2c.h"

M2C_UNK func_0207f280();                            /* extern */

void func_020826fc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        return;
    }
    func_0207f280();
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
