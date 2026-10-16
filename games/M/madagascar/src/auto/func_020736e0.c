/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020ceef8;

s32 func_020736e0(s32 arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(&data_020ceef8, void **, 8), s32(**)(), 4)(arg0, arg1);
}
