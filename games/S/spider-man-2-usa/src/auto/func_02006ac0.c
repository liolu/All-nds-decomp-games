/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_0200e9cc(s32);                            /* extern */
extern s32 data_021581b0;

void func_02006ac0(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x280);
    if (temp_r2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (data_021581b0 + arg1);
        return;
    }
    *func_0200e9cc(temp_r2) = data_021581b0 + arg1;
}
