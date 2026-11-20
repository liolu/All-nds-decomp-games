/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bd114;

void func_02005880(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd114;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
}
