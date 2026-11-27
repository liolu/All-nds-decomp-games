#include "m2c.h"

s32 func_020bf738(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if ((temp_r0 == NULL) || (M2C_FIELD(*temp_r0, s32(**)(), 0x68)(temp_r0) == 0)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return 0;
    }
    if (!(M2C_FIELD(arg0, u8 *, 0x74) & 1)) {
        return 1;
    }
    return 0;
}
