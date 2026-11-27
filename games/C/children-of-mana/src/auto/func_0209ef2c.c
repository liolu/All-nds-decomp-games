/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02099544();                            /* extern */

void func_0209ef2c(void *arg0) {
    void **temp_r0;

    func_02099544();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x100);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32, s32), 0x20)(temp_r0, M2C_FIELD(arg0, s32 *, 0x70),
                                                              M2C_FIELD(arg0, s32 *, 0x74));
}
