#include "m2c.h"

M2C_UNK func_020983dc(s32);                         /* extern */
extern M2C_UNK data_020d3cc4;

s32 func_02098b30(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        func_020983dc(M2C_FIELD(&data_020d3cc4, s32 *, 0x24));
    }
    return M2C_FIELD(arg0, s32 *, 0) = 0;
}
