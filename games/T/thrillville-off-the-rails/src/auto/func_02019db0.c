/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02018a08(M2C_UNK);

extern s32 data_020ec28c;

s32 func_02019db0(s32 arg0) {
    if ((data_020ec28c != 0) && (func_02018a08(arg0) != 0) &&
        (M2C_FIELD((data_020ec28c + ((arg0 - 1) * 4)), s32 *, 0x14E8) == 7)) {
        return 1;
    }
    return 0;
}
