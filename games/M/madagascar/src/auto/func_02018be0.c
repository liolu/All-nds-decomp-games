/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020645bc(s32, s32, s32);               /* extern */

void func_02018be0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;

    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x118) = arg2;
    temp_ip                                      = M2C_FIELD(arg0, s32 *, 0x114);
    func_020645bc(arg2, M2C_FIELD(arg0, s32 *, 0x110) + (temp_ip * arg1 * 2), temp_ip * 2);
}
