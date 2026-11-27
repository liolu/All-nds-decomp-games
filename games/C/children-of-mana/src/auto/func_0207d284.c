/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207d138(void *);                      /* extern */
M2C_UNK func_0207d174();                            /* extern */

s32 func_0207d284(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x25C) - M2C_FIELD(arg0, s32 *, 0x260);
    if ((temp_r2 >= 0) && (temp_r2 < 3)) {
        func_0207d174(arg0, arg1);
    }
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x25C) * 4)), s32 *, 0x5C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x25C)                                        = (s32) (M2C_FIELD(arg0, s32 *, 0x25C) + 1);
    func_0207d138(arg0);
    return 1;
}
