#include "m2c.h"

M2C_UNK func_02064d64(void *);                      /* extern */
M2C_UNK func_0208877c(void *);                      /* extern */

void *func_02064b70(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_0208877c(arg0 + 0x18);
    func_02064d64(arg0);
    return arg0;
}
