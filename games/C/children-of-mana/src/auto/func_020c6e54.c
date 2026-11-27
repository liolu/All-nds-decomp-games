/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _ZN15GameMonsterData7cleanupEi(s32, M2C_UNK); /* extern */

void func_020c6e54(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0 == 0) {
        return;
    }
    _ZN15GameMonsterData7cleanupEi(temp_r0, 0);
}
