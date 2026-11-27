/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02042630(M2C_UNK);                         /* extern */
M2C_UNK func_02098960();                            /* extern */
extern M2C_UNK data_02103b34;

void *func_020990e4(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    func_02098960();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02103b34;
    M2C_FIELD(arg0, s32 *, 0xFC)   = 0;
    M2C_FIELD(arg0, s32 *, 0x48)   = arg3;
    M2C_FIELD(arg0, s32 *, 0xFC)   = func_02042630(arg2);
    return arg0;
}
