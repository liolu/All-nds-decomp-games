/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0201fadc(M2C_UNK);

extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_0212719c;

s32 func_0204e774(s32 arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212719c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    func_0201fadc(arg0);
    return arg0;
}
