/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020315b8();                              /* extern */

s32 func_02031488(void *arg0) {
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 var_r4;
    void *temp_r0;

    var_r4  = 0;
    temp_r0 = func_020315b8();
    if (temp_r0 != NULL) {
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x298);
        temp_r1 = M2C_FIELD(temp_r0, s32 *, 0x298);
        if (temp_r1 > temp_r2) {
            var_r4 = 1;
        } else if (temp_r1 < temp_r2) {
            var_r4 = 2;
        }
        temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x29C);
        temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0x29C);
        if (temp_r0_2 > temp_r1_2) {
            var_r4 |= 8;
        } else if (temp_r0_2 < temp_r1_2) {
            var_r4 |= 4;
        }
    }
    return var_r4;
}
