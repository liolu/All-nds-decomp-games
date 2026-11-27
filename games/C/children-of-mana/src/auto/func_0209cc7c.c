/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020993b8();                         /* extern */

void func_0209cc7c(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;

    temp_ip = M2C_FIELD(arg0, s32 *, 0x104);
    if (temp_ip != -1) {
        func_020993b8(M2C_FIELD((arg0 + (temp_ip * 4)), s32 *, 0xA0));
        return;
    }
    func_020993b8(arg0, arg1, arg2);
}
