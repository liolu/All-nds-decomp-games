#include "m2c.h"

M2C_UNK func_0203b5b8(void *, s32);                 /* extern */
s32 func_0203b614(void *, s32);                     /* extern */
s32 func_0203c1f0(s32);                             /* extern */
M2C_UNK func_0203c404();                            /* extern */

s32 func_0203c498(void *arg0) {
    func_0203b5b8(arg0, func_0203b614(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_0203c1f0(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_0203c404();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
