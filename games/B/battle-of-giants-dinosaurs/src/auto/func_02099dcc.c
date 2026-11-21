#include "m2c.h"

void **func_0209c7b8(s32, s32);                     /* extern */
extern M2C_UNK data_020d3cc4;

void func_02099dcc(s32 arg0) {
    void **temp_r0;

    if (arg0 == 0) {
        return;
    }
    temp_r0 = func_0209c7b8(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), arg0);
    if (arg0 == 0) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 0x18)(temp_r0, arg0);
}
