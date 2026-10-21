/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02010fdc(s32 arg0) {
    if (arg0 & 1) {
        return 0x18;
    }
    if (arg0 & 2) {
        return 0x40;
    }
    if (arg0 & 0x200) {
        return 0x1A;
    }
    return 0;
}
