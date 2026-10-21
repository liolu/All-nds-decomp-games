#include "m2c.h"

s32 func_0205d870(s32 arg0, void *arg1) {
    s32 var_r2;
    u16 *var_r3;
    void *temp_ip;

    temp_ip = M2C_FIELD(arg1, void **, 0x30);
    var_r2  = 0;
    var_r3  = M2C_FIELD(temp_ip, u16 **, 4);
    if ((s32) M2C_FIELD(temp_ip, u16 *, 0) > 0) {
        do {
            var_r2 += 1;
            *var_r3 = (*var_r3 & ~0xC00) | (arg0 << 0xA);
            var_r3  = (u16 *) ((s8 *) var_r3 + 6);
        } while (var_r2 < (s32) M2C_FIELD(temp_ip, u16 *, 0));
    }
    return 1;
}
