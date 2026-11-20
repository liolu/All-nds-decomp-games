#include "m2c.h"

extern M2C_UNK (*data_020e0310)(s32);

void func_0208fd04(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0) == 0) {
        return;
    }
    data_020e0310(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, u8 *, 0) = 0U;
}
