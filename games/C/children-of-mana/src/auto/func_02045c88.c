/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02045c88(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x2A0) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x80);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0xD0)(temp_r0, 0);
    }
    M2C_FIELD(arg0, u8 *, 0x2A0) = 0U;
}
