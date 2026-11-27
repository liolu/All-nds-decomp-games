/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207731c(M2C_UNK *, s32);              /* extern */
s32 func_020c3028();                                /* extern */
extern M2C_UNK data_02127f4c;

M2C_UNK *func_020ba0fc(s32 arg0) {
    func_0207731c(&data_02127f4c, (arg0 * 0x1E) + func_020c3028());
    return &data_02127f4c;
}
