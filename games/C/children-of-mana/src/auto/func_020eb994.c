/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203333c(s32);                         /* extern */

void func_020eb994(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x64);
    if (temp_r0 == NULL) {
        return;
    }
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x24)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x64) = NULL;
    }
    func_0203333c(M2C_FIELD(arg0, s32 *, 0x6C));
}
