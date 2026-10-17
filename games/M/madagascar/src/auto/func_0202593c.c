/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02002760(M2C_UNK);

extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bf3d8;

s32 func_0202593c(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf3d8;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s8 *, 0x14)    = (s8) arg1;
    func_02002760(arg0);
    return arg0;
}
