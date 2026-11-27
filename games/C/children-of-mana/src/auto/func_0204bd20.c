/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020114e4();                                /* extern */
M2C_UNK func_02013e98(s32, void **);                /* extern */
M2C_UNK func_0207aa8c(void *);                      /* extern */
M2C_UNK func_0207aac8(void *);                      /* extern */
M2C_UNK func_020d4aa4(void *);                      /* extern */
M2C_UNK func_020e2664();                            /* extern */

void func_0204bd20(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x120) == 0) {
        return;
    }
    func_0207aac8(arg0 + 0x18);
    func_0207aa8c(arg0 + 0x18);
    func_020d4aa4(arg0 + 0x78);
    func_020e2664();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x108);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x4C)(temp_r0, 0);
        M2C_FIELD(arg0, s8 *, 0x11E) = 0;
        func_02013e98(func_020114e4(), M2C_FIELD(arg0, void ***, 0x108));
        M2C_FIELD(arg0, void ***, 0x108) = NULL;
    }
    M2C_FIELD(arg0, u8 *, 0x120) = 0U;
}
