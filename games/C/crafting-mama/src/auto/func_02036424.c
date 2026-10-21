#include "m2c.h"

s32 func_02036424(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_ip;
    s16 temp_r1;

    temp_ip = M2C_FIELD(arg0, s16 *, 0x28);
    if ((arg1 < (s32) temp_ip) || (arg1 > (s32) (temp_ip + M2C_FIELD(arg0, s16 *, 0x2C))) ||
        (temp_r1 = M2C_FIELD(arg0, s16 *, 0x2A), (arg2 < (s32) temp_r1)) ||
        (arg2 > (s32) (temp_r1 + M2C_FIELD(arg0, s16 *, 0x2E)))) {
        return 0;
    }
    return 1;
}
