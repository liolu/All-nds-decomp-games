/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020939cc();                            /* extern */

void func_0209b744(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void **temp_r0;

    func_020939cc();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x100);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0x28)(temp_r0, arg1, arg2);
}
