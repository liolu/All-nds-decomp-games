#include "m2c.h"

s16 func_020b2bd4(s32, M2C_UNK);                    /* extern */
extern s32 data_020f44bc;

void func_02010b58(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x6E4) = (s16) (func_020b2bd4(data_020f44bc + 4, 0x168) + 0x78);
    M2C_FIELD(arg0, s16 *, 0x6E6) = func_020b2bd4(data_020f44bc + 4, 3);
}
