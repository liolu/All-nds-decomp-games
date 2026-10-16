/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern s32 data_02262f14;

s32 func_0205a858(s32 arg0) {
    if (arg0 & data_02262f14) {
        return 0;
    }
    data_02262f14 |= arg0;
    return 1;
}
