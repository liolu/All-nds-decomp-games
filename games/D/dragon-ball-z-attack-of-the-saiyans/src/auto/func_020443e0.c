#include "m2c.h"

extern M2C_UNK data_02094a5c;
extern void *data_020d1d24;

s32 func_020443e0(s32 arg0) {
    if ((s32) (u16) ((arg0 - ((u16 *) &data_02094a5c)[M2C_FIELD(M2C_FIELD(data_020d1d24, void **, 0x30), u8 *, 0x6C)]) +
                     0x3000) < 0x6000) {
        return 1;
    }
    return 0;
}
