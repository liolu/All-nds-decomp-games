/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a1018(void *);                      /* extern */

void func_020a4e08(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x7B) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0xC0);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x20)(temp_r0, 0);
    func_020a1018(arg0);
}
