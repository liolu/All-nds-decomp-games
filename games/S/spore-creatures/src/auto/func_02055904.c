#include "m2c.h"

s32 func_02055904(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    void *temp_ip;

    temp_ip = M2C_FIELD(arg0, void **, 0x428);
    if ((temp_ip != NULL) && (M2C_FIELD(temp_ip, s32 *, 0xC) == 0)) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x42C);
        *arg2 = M2C_FIELD(arg0, s32 *, 0x430);
        *arg3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x428), s32 *, 8);
        return 1;
    }
    return 0;
}
