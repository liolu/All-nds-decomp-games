#include "m2c.h"

M2C_UNK func_0202701c(void *);                      /* extern */
M2C_UNK func_02027034(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_02025738(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2F)  = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s8 *, 0x40)  = 0x7F;
    M2C_FIELD(arg0, s8 *, 0x41)  = 0x7F;
    func_0202701c(arg0 + 0x1C);
    func_02027034(arg0 + 0x1C, 0x7F00, 1);
}
