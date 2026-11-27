/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ce1c4(void *arg0, void *arg1) {
    s32 temp_ip;
    s32 temp_lr;
    s32 temp_r2;
    s32 temp_r3;
    s32 var_r4;

    var_r4 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x30) != 0) {
        temp_lr = M2C_FIELD(arg0, s32 *, 0x10);
        temp_ip = M2C_FIELD(arg1, s32 *, 0);
        if (temp_ip > temp_lr) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x14);
            temp_r2 = M2C_FIELD(arg1, s32 *, 4);
            if ((temp_r2 > temp_r3) && (temp_ip < (s32) (temp_lr + M2C_FIELD(arg0, s32 *, 0x20))) &&
                (temp_r2 < (s32) (temp_r3 + M2C_FIELD(arg0, s32 *, 0x24)))) {
                var_r4 = 1;
            }
        }
    }
    return var_r4;
}
