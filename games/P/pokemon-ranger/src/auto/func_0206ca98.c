/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206ca98(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0x2:
            return 0x4000;
        case 0x4:
            return 0x6000;
        case 0x8:
            return 0x8000;
        case 0x10:
            return 0x400000;
        case 0x20:
            return 0x800000;
        case 0x40:
            return 0x01000000;
        default:
            return 0;
    }
}
