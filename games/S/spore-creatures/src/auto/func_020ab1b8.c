#include "m2c.h"

extern M2C_UNK (*data_020e0308)(s32);
extern M2C_UNK (*data_020e0310)(s32);

void func_020ab1b8(void *arg0) {
    data_020e0308(M2C_FIELD(arg0, s32 *, 0x48));
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        data_020e0310(M2C_FIELD(arg0, s32 *, 0x4C));
    }
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
}
