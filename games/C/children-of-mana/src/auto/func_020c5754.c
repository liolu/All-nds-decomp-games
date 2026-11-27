/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207b230(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209f324(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02109ed4;

void *func_020c5754(void *arg0, M2C_UNK arg1, s32 arg2) {
    func_0209f324(arg0, arg1, 3, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02109ed4;
    M2C_FIELD(arg0, s32 *, 0x104)  = arg2;
    func_0207b230(arg0 + 0x108, 1);
    M2C_FIELD(arg0, s8 *, 0x168) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 2;
    return arg0;
}
