#include "m2c.h"

M2C_UNK func_0203e09c(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_020aab34;

void func_0203def4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) & 2) {
        func_0203e09c(M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
    }
    M2C_FIELD(&data_020aab34, s32 *, 0x58) = 0x17;
    *M2C_FIELD(arg0, s32 **, 0x1C)         = 0;
    M2C_FIELD(arg0, s32 *, 0x10)           = 1;
}
