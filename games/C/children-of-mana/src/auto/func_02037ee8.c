/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02037ee8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x51C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x51D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x528)  = 0;
    M2C_FIELD(arg0, s32 *, 0x520) = (s32) (M2C_FIELD(arg0, s32 *, 0x520) + 1);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *, M2C_UNK), 0x38)(arg0, 2);
}
