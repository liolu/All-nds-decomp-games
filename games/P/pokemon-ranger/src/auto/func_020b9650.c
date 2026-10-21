/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020bbc88(M2C_UNK, M2C_UNK);
M2C_UNK func_020bbd30(M2C_UNK, M2C_UNK);
M2C_UNK func_020bc094(M2C_UNK);

s32 func_020b9650(s32 arg0, s32 arg1) {
    func_020bbd30(arg0, arg1);
    func_020bbc88(arg0 + 0x14, 0);
    M2C_FIELD(arg0, s32 *, 0x28) = func_020bc094(arg1);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return 1;
}
