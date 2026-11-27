/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02098614();                            /* extern */

void func_02099ba0(void *arg0) {
    u32 temp_r0;

    func_02098614();
    temp_r0                       = M2C_FIELD(arg0, u32 *, 0xEC);
    M2C_FIELD(arg0, s32 *, 0x108) = (s32) ((s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1);
}
