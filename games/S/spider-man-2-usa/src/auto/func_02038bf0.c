/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u8 data_0215d6fc;
extern u8 data_0215d700;

s32 func_02038bf0(void) {
    if ((data_0215d6fc != 0) && (data_0215d700 != 0)) {
        return 1;
    }
    return 0;
}
