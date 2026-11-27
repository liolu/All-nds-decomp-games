/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020993b8();                            /* extern */

void func_02099468(s32 arg0, u32 *arg1, u32 *arg2) {
    u32 temp_r0;
    u32 temp_r0_2;

    func_020993b8();
    temp_r0   = *arg1;
    *arg1     = (u32) ((s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1);
    temp_r0_2 = *arg2;
    *arg2     = (u32) ((s32) (temp_r0_2 + (temp_r0_2 >> 0x1F)) >> 1);
}
