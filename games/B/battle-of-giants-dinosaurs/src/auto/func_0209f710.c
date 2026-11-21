#include "m2c.h"

M2C_UNK func_0209f754(void *);                      /* extern */
M2C_UNK func_0209f768(void *);                      /* extern */
extern M2C_UNK data_020bf340;

void *func_0209f710(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf340;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    func_0209f754(arg0 + 0x1C);
    func_0209f768(arg0 + 0x3C);
    return arg0;
}
