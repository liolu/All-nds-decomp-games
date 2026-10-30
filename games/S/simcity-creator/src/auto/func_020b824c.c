#include "m2c.h"

M2C_UNK func_020b7ae8(void *, void *, s32);         /* extern */

void func_020b824c(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xA2C);
    switch (temp_r1) {                              /* irregular */
        case 0:
            break;
        case 2:
            func_020b7ae8(arg0, arg0 + 0x8EC, M2C_FIELD(arg0, s32 *, 0xA10) + 2);
            M2C_FIELD(arg0, s32 *, 0) = 4;
            break;
        case 1:
            func_020b7ae8(arg0, arg0 + 0x8EC, M2C_FIELD(arg0, s32 *, 0xA10) + 1);
            M2C_FIELD(arg0, s32 *, 0) = 4;
            break;
    }
    M2C_FIELD(arg0, s32 *, 0xA2C) = 0;
}
