/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020564ac();                                /* extern */
s32 func_02056248();                                /* extern */
M2C_UNK func_0205622c(M2C_UNK, s32);                /* extern */
s32 func_02056ce8(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02056af8;

s32 func_02056c28(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = func_02056248();
    if (var_r4 == 0) {
        var_r4 = func_02056ce8(arg0, &func_02056af8, func_020564ac(), arg0, arg1);
        if (var_r4 != 0) {
            func_0205622c(arg0, var_r4);
        }
    }
    return var_r4;
}
