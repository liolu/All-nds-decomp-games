/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov007_020c1048(void *arg0) {
    s32 sp8;
    s32 sp4;
    s32 sp0;
    s32 temp_r1;

    sp0                       = 0;
    sp8                       = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_r1                   = M2C_FIELD(arg0, s32 *, 4);
    sp4                       = temp_r1;
    M2C_FIELD(arg0, s32 *, 0) = temp_r1;
}
