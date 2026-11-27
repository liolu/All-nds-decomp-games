/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a27cc(void *, M2C_UNK);             /* extern */
M2C_UNK func_020a2cfc();                            /* extern */

void func_020a3880(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, s32 *, 4) == 6) {
        func_020a27cc(arg0, 0);
        temp_r0 = M2C_FIELD(arg0, void ***, 0x58);
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 0x48)(temp_r0, M2C_FIELD(arg0, s32 *, 0x5C));
        return;
    }
    func_020a2cfc();
}
