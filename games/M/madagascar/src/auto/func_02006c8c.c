/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02007a74();                            /* extern */
s32 func_02010930(s32, M2C_UNK *, M2C_UNK);         /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern M2C_UNK data_02085164;

void func_02006c8c(void *arg0) {
    s32 var_r0;

    func_02007a74();
    var_r0 = func_0207b068(0x38);
    if (var_r0 != 0) {
        var_r0 = func_02010930(var_r0, &data_02085164, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r0;
    M2C_FIELD(arg0, s32 *, 4)    = 3;
}
