/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020317cc(M2C_UNK);
void func_02031814(M2C_UNK);
void func_020319a4(M2C_UNK);

s32 func_02031758(s32 arg0, s32 arg1) {
    s32 var_r4;

    var_r4                       = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) + arg1);
    if (func_020317cc(arg0) != 0) {
        func_020319a4(arg0);
        var_r4 = 1;
    }
    func_02031814(arg0);
    return var_r4;
}
