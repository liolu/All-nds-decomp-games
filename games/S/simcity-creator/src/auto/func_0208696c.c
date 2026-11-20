#include "m2c.h"

M2C_UNK func_0201bf54(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02086be8(s32);                         /* extern */
extern M2C_UNK data_020ceb2c;
extern M2C_UNK func_0208693c;
extern M2C_UNK func_020869cc;

void *func_0208696c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ceb2c;
    func_02086be8(arg0 + 4);
    func_0201bf54(arg0 + 0x10, 4, 0x10, &func_020869cc, &func_0208693c);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    return arg0;
}
