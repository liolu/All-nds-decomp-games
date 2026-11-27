#include "m2c.h"

M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */

void *func_02008698(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0208acbc(arg0 + 4);
    func_020934a8(arg0);
    return arg0;
}
