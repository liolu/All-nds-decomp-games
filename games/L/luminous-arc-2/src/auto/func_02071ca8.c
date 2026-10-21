#include "m2c.h"

M2C_UNK func_0200aa3c(void *);                      /* extern */

s32 func_02071ca8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        return 0;
    }
    func_0200aa3c(arg0 + 0xEC);
    M2C_FIELD(arg0, u8 *, 4) = 0U;
    return 0;
}
