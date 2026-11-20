/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200558c(s32, s32);                        /* extern */
M2C_UNK func_02007a74();                            /* extern */
M2C_UNK func_02007ab0(void *);                      /* extern */
M2C_UNK func_02010438(M2C_UNK);                     /* extern */
M2C_UNK func_02024698(M2C_UNK);                     /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */

void func_02006d74(void *arg0, s32 arg1) {
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    func_02007a74();
    func_02007ab0(arg0);
    func_02010438(1);
    func_02024698(1);
    var_r0 = func_0207b068(0x58);
    if (var_r0 != 0) {
        var_r0 = func_0200558c(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r0;
    M2C_FIELD(arg0, s32 *, 4)    = 7;
    func_02024698(0);
    func_02010438(0);
}
