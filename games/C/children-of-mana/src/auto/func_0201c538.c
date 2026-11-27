/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0201c538(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + ((s32) M2C_FIELD(arg0, s32 *, 0x10) / temp_r1));
    M2C_FIELD(arg0, s32 *, 0x44) =
        (s32) (M2C_FIELD(arg0, s32 *, 0x44) + ((s32) M2C_FIELD(arg0, s32 *, 0x14) / (s32) M2C_FIELD(arg0, s32 *, 0x20)));
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
