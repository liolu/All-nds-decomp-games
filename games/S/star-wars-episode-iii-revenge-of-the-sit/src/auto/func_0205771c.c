/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern s32 data_020b3e3c;

s32 func_0205771c(s32 arg0) {
    if (arg0 & data_020b3e3c) {
        return 0;
    }
    data_020b3e3c |= arg0;
    return 1;
}
