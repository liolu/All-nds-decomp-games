#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_02063b24(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r0;
    void *temp_r3;

    temp_r0                            = (arg1 * 0xC) + arg0;
    temp_r3                            = temp_r0 + 0x40;
    *(M2C_S12 *) ((s8 *) temp_r0 + 64) = *(M2C_S12 *) ((s8 *) arg2 + 0);
}
