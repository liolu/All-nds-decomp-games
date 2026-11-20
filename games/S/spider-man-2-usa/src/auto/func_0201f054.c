/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203a6c0(s32);                             /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02115754;

void *func_0201f054(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02115754;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 4)      = func_0203a6c0(arg1 * 4);
    return arg0;
}
