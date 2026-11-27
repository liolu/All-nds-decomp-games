/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209f324(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_021064e4;

void *func_020a5eb4(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0209f324(arg0, arg1, arg2, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021064e4;
    M2C_FIELD(arg0, s32 *, 0x104)  = -1;
    M2C_FIELD(arg0, s32 *, 0x108)  = -1;
    M2C_FIELD(arg0, s8 *, 0x10C)   = 0;
    return arg0;
}
