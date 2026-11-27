/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0211a5a0;

s32 func_02050a44(void) {
    if (!(M2C_FIELD(&data_0211a5a0, s32 *, 0xE0) & 4)) {
        return 1;
    }
    return 0;
}
