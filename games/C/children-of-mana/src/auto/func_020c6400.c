/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a39e0(s32, M2C_UNK);                /* extern */
s32 func_020a3e6c(void *, M2C_UNK);                 /* extern */

void func_020c6400(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, s32 *, 0x160) = -1;
    temp_r0                       = M2C_FIELD(arg0, void ***, 0x10);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x20)(temp_r0, 1);
    func_020a39e0(func_020a3e6c(arg0 + 0x14, 0), 1);
    func_020a39e0(func_020a3e6c(arg0 + 0x14, 1), 0);
}
