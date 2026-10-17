/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207b4d4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020481ac;

void func_02038afc(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r0 == 0) {
        return;
    }
    func_0207b4d4(temp_r0, 8, 8, &func_020481ac);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}
