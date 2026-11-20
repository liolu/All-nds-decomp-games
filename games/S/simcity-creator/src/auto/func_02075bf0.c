#include "m2c.h"

M2C_UNK func_02085910(s32);                         /* extern */
M2C_UNK func_02086498(void *);                      /* extern */
extern M2C_UNK data_020ce21c;

void *func_02075bf0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ce21c;
    func_02085910(arg0 + 0xC);
    func_02086498(arg0 + 0xCC);
    M2C_FIELD(arg0, s8 *, 5)     = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    return arg0;
}
