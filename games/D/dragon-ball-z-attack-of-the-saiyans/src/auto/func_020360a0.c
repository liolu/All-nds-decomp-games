#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern s32 data_020d1d24;

u8 func_020360a0(M2C_UNK arg0) {
    return M2C_FIELD(((func_02012a90(arg0, 1) * 0xEC) + data_020d1d24), u8 *, 0x6A5);
}
