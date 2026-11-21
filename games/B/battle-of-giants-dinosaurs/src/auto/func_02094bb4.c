/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020d3cc4;

void func_02094bb4(s32 arg0, s32 *arg1) {
    if (arg0 != 0) {
        *arg1 = M2C_FIELD(&data_020d3cc4, s32 *, 0x38);
        return;
    }
    M2C_FIELD(&data_020d3cc4, s32 *, 0x38) = (s32) *arg1;
}
