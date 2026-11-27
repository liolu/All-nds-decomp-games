/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02098960(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02104b6c;

void *func_0209f324(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    func_02098960(arg0, arg1, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02104b6c;
    M2C_FIELD(arg0, s32 *, 0xFC)   = arg2;
    M2C_FIELD(arg0, s32 *, 0x100)  = 0;
    M2C_FIELD(arg0, s32 *, 0x48)   = 2;
    return arg0;
}
