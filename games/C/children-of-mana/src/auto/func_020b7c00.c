/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02077390(void *);                      /* extern */
M2C_UNK func_020774c8(void *);                      /* extern */

void func_020b7c00(void *arg0) {
    void **temp_r0;

    if ((M2C_FIELD(arg0, u8 *, 0xC) == 0) && (M2C_FIELD(arg0, u8 *, 0xF) == 0)) {
        return;
    }
    func_02077390(arg0 + 0x13C);
    func_020774c8(arg0 + 0x13C);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x114);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x20)(temp_r0);
    }
    M2C_FIELD(arg0, u8 *, 0xC) = 0U;
}
