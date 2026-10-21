/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c883c(s32, M2C_UNK, s32);           /* extern */

void func_020bbcf8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 != 0) {
        func_020c883c(temp_r0, 0, M2C_FIELD(arg0, s32 *, 8) * 4);
    }
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
