#include "m2c.h"

s16 func_0205934c(void *arg0, void *arg1) {
    s32 temp_ip;

    temp_ip = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x5510C);
    return (s16) ((s16) (((s32) (M2C_FIELD(arg1, s16 *, 6) - M2C_FIELD(arg1, s16 *, 2)) >> 1) << temp_ip) -
                  (M2C_FIELD(arg1, s16 *, 0xA) << (temp_ip + 3)));
}
