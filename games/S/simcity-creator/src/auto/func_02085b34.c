#include "m2c.h"

M2C_UNK func_020064fc(void *);                      /* extern */

s32 func_02085b34(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        return 0;
    }
    func_020064fc(arg0 + 0x30);
    M2C_FIELD(arg0, u8 *, 4) = 0U;
    return 1;
}
