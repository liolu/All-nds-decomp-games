/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020d6f24;
extern M2C_UNK data_020d7540;

s32 func_0200b5a4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x36) != 0) {
        return M2C_FIELD(&data_020d6f24, s32 *, 0x10) << M2C_FIELD(&data_020d6f24, s32 *, 4);
    }
    return M2C_FIELD(&data_020d7540, s32 *, 0x10) << M2C_FIELD(&data_020d7540, s32 *, 4);
}
