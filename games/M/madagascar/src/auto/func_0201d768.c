/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_0200b6a4(void **, s32);                 /* extern */
void **func_0207b068(M2C_UNK);                      /* extern */

void func_0201d768(void *arg0, s32 arg1) {
    void **temp_r0;
    void **var_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x70);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 0x70) = NULL;
    if (arg1 == 0) {
        return;
    }
    var_r0 = func_0207b068(0x40);
    if (var_r0 != NULL) {
        var_r0 = func_0200b6a4(var_r0, arg1);
    }
    M2C_FIELD(arg0, void ***, 0x70) = var_r0;
}
