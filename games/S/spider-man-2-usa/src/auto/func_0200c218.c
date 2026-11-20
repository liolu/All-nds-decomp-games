/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200bb30();                                /* extern */
M2C_UNK func_0204a570(s32);                         /* extern */

void func_0200c218(void *arg0) {
    void **temp_r0;

    if (func_0200bb30() == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    temp_r0                      = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 4) = NULL;
    func_0204a570(M2C_FIELD(arg0, s32 *, 0));
}
