#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_020934bc(s32);                         /* extern */

void *func_ov002_02102c78(void *arg0) {
    func_020934bc(M2C_FIELD(arg0, s32 *, 8));
    func_020934a8(arg0);
    return arg0;
}
