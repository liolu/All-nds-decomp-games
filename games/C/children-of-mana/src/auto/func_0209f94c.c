/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02079030(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0209f324(void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02104cd4;

void *func_0209f94c(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    func_0209f324(arg0, arg1, arg3, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02104cd4;
    M2C_FIELD(arg0, s32 *, 0x104)  = 0;
    M2C_FIELD(arg0, s32 *, 0x108)  = 0;
    M2C_FIELD(arg0, s8 *, 0x124)   = 0;
    M2C_FIELD(arg0, s32 *, 0x110)  = 8;
    M2C_FIELD(arg0, s32 *, 0x114)  = 6;
    M2C_FIELD(arg0, s32 *, 0x120)  = 0x10;
    if (arg2 != -1) {
        M2C_FIELD(arg0, s32 *, 0x104) = func_02079030(arg2, 1, 1);
    }
    return arg0;
}
