#include "m2c.h"

extern M2C_UNK (*data_020e0308)(s32);

void func_0208f614(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 8) == 0) {
        return;
    }
    data_020e0308(M2C_FIELD(arg0, s32 *, 0x10));
    M2C_FIELD(arg0, u8 *, 8) = 0U;
}
