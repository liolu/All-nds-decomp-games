/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02098690(void *);                      /* extern */

void func_0209f14c(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x100);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 8)(temp_r0);
    }
    func_02098690(arg0);
}
