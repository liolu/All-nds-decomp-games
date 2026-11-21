#include "m2c.h"

u8 func_ov000_02210fa8(u32 arg0) {
    if (arg0 < 0x1A) {
        return (u8) (arg0 + 0x41);
    }
    if (arg0 < 0x34) {
        return (u8) (arg0 + 0x47);
    }
    if (arg0 < 0x3E) {
        return (u8) (arg0 - 4);
    }
    if (arg0 == 0x3E) {
        return 0x2B;
    }
    if (arg0 == 0x3F) {
        return 0x2F;
    }
    return 0;
}
