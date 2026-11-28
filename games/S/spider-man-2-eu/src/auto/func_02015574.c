/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_021602f4;
extern M2C_UNK data_02160910;

s32 func_02015574(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2E) != 0) {
        return M2C_FIELD(&data_021602f4, s32 *, 0x10) << M2C_FIELD(&data_021602f4, s32 *, 4);
    }
    return M2C_FIELD(&data_02160910, s32 *, 0x10) << M2C_FIELD(&data_02160910, s32 *, 4);
}
