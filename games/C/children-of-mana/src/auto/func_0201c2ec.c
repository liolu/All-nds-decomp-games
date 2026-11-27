/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_0208f93c(s32, s32);                     /* extern */

void func_0201c2ec(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r2;
    void **temp_r0;

    var_r2  = arg2;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C8);
    if (temp_r3 == 0) {
        return;
    }
    if (var_r2 == -1) {
        var_r2 = M2C_FIELD(arg0, s32 *, 0x1CC);
    }
    temp_r0 = func_0208f93c(temp_r3, var_r2);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x44)(temp_r0, arg1);
}
