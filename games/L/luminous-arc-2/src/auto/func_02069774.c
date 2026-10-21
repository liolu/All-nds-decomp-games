#include "m2c.h"

s32 func_0207aae0();                                /* extern */

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
    s32 f3;
} M2C_S16;

void func_02069774(void *arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r0_2;

    temp_r0                        = (arg1 * 0x21A4) + func_0207aae0();
    temp_r0_2                      = temp_r0 + 0x2154;
    *(M2C_S16 *) ((s8 *) arg0 + 0) = *(M2C_S16 *) ((s8 *) temp_r0 + 8532);
}
