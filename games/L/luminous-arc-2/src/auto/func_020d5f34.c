#include "m2c.h"

extern M2C_UNK data_020de39e;

s8 func_020d5f34(u32 arg0) {
    if ((arg0 >= 0x8140U) && ((s32) arg0 < 0x897F)) {
        return *((u8 *) ((s8 *) &data_020de39e + ((u16) (arg0 - 0x8140) * 6)));
    }
    return 0xA;
}
