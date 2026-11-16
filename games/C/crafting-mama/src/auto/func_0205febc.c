/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

void func_0205febc(s32 arg0, s32 arg1) {
    s32 var_ip;
    void *temp_r3;

    var_ip = 0;
    do {
        temp_r3 = M2C_FIELD((arg0 + (var_ip * 4)), void **, 0x30);
        var_ip += 1;
        M2C_FIELD(temp_r3, s16 *, 0xA) = (s16) (M2C_FIELD(temp_r3, s16 *, 0xA) + arg1);
    } while (var_ip < 5);
}
