/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern void *data_020fe440;

void func_02030e0c(void) {
    s32 var_ip;

    if (data_020fe440 == NULL) {
        return;
    }
    var_ip = 0;
    if ((s32) M2C_FIELD(data_020fe440, s16 *, 0x12) > 0) {
        do {
            M2C_FIELD((data_020fe440 + (var_ip * 2)), s16 *, 0xC) = -1;
            var_ip += 1;
        } while (var_ip < (s32) M2C_FIELD(data_020fe440, s16 *, 0x12));
    }
    M2C_FIELD(data_020fe440, s16 *, 0x12) = 0;
}
