#include "m2c.h"

extern s32 data_02126aec;

s32 func_0208b820(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= 0x14)) {
        return 0;
    }
    return (0x8C * arg0) + data_02126aec;
}
