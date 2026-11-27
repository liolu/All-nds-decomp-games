/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209167c(s32, s32);                    /* extern */
M2C_UNK func_02091684(s32, s32, s32);               /* extern */
M2C_UNK func_02091758(s32);                         /* extern */
M2C_UNK func_02091854(s32);                         /* extern */
M2C_UNK func_020919c8(s32);                         /* extern */
M2C_UNK func_02091a88(s32);                         /* extern */

void func_0204a45c(void *arg0) {
    s32 var_r1;
    s32 var_r2;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x144);
    if (temp_r0 != NULL) {
        var_r1 = M2C_FIELD(temp_r0, s32 *, 0x58C);
    } else {
        var_r1 = 0;
    }
    if (temp_r0 != NULL) {
        var_r2 = M2C_FIELD(temp_r0, s32 *, 0x590);
    } else {
        var_r2 = 0;
    }
    func_02091684(M2C_FIELD(arg0, s32 *, 0x10), var_r1, var_r2);
    func_02091a88(M2C_FIELD(arg0, s32 *, 0x10));
    func_02091758(M2C_FIELD(arg0, s32 *, 0x10));
    func_020919c8(M2C_FIELD(arg0, s32 *, 0x10));
    func_0209167c(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x148) * 4)), s32 *, 0x24));
    func_02091854(M2C_FIELD(arg0, s32 *, 0x10));
}
