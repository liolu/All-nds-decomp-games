/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203a480(s32 *, s32, s32);             /* extern */
M2C_UNK func_0203a490();                            /* extern */

void func_0203a430(void *arg0) {
    s32 sp0;
    s32 temp_ip;

    func_0203a490();
    sp0     = 0;
    temp_ip = M2C_FIELD(arg0, s32 *, 8);
    func_0203a480(&sp0, M2C_FIELD(arg0, s32 *, 0x14) + (temp_ip * 4),
                  ((M2C_FIELD(arg0, s32 *, 0xC) - temp_ip) & 0x1FFFFF) | 0x05000000);
}
