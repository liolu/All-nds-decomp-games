#include "m2c.h"

M2C_UNK func_020064fc();                            /* extern */

void func_02004da4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) == 0) {
        return;
    }
    func_020064fc();
}
