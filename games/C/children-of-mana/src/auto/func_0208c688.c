/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0208c688(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x2A4);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x44)(temp_r0, 0x11);
}
