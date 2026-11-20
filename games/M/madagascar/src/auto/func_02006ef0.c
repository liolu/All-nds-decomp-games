/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02007a74();                            /* extern */
M2C_UNK func_02010438(M2C_UNK);                     /* extern */
s32 func_02010930(s32, M2C_UNK *, M2C_UNK);         /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern M2C_UNK data_02084ffc;

void func_02006ef0(void *arg0) {
    s32 var_r0;

    func_02007a74();
    func_02010438(1);
    var_r0 = func_0207b068(0x38);
    if (var_r0 != 0) {
        var_r0 = func_02010930(var_r0, &data_02084ffc, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r0;
    M2C_FIELD(arg0, s32 *, 4)    = 2;
    func_02010438(0);
}
