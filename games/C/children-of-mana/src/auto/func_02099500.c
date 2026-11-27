/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020939d8();                            /* extern */

void func_02099500(void *arg0, s32 *arg1, s32 *arg2) {
    u32 temp_r0;
    u32 temp_r0_2;

    func_020939d8();
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x78);
    *arg1 += (s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1;
    temp_r0_2 = M2C_FIELD(arg0, u32 *, 0x7C);
    *arg2 += (s32) (temp_r0_2 + (temp_r0_2 >> 0x1F)) >> 1;
}
