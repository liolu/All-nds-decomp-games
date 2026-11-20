/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0215d770;
extern M2C_UNK data_0215dd8c;

s32 func_0201587c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2E) != 0) {
        return M2C_FIELD(&data_0215d770, s32 *, 0x10) << M2C_FIELD(&data_0215d770, s32 *, 4);
    }
    return M2C_FIELD(&data_0215dd8c, s32 *, 0x10) << M2C_FIELD(&data_0215dd8c, s32 *, 4);
}
