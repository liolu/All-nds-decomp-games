/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02079030(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK func_0209f324(void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02104e3c;

void *func_0209fc50(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_0209f324(arg0, arg1, arg3, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02104e3c;
    M2C_FIELD(arg0, s32 *, 0x104)  = func_02079030(arg2, arg4, 1);
    return arg0;
}
