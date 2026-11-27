/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0201fbe0(void *arg0, s32 arg1) {
    s32 temp_r2;

    if ((arg1 == 0) || (temp_r2 = M2C_FIELD(arg0, s32 *, 0x78), (temp_r2 == 0))) {
        M2C_FIELD(arg0, s32 *, 0x228) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x228) = (s32) (arg1 / temp_r2);
}
