/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

M2C_UNK current_time();                             /* extern */
M2C_UNK func_02019fa0();                            /* extern */
M2C_UNK func_0205c5f8();                            /* extern */
s32 func_02067860(void **);                         /* extern */
M2C_UNK gpiDestroy(void **);                        /* extern */
s32 gpiReset(void **);                              /* extern */
M2C_UNK gsifree(void *);                            /* extern */
void *gsimalloc(s32);                               /* extern */
M2C_UNK memset(void *, M2C_UNK, s32);               /* extern */

s32 gpiInitialize(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    s32 temp_r0;
    s32 var_r2;
    void *temp_r0_2;
    void *temp_r0_3;

    *arg0     = NULL;
    temp_r0_2 = gsimalloc(0x634);
    sp0       = temp_r0_2;
    if (temp_r0_2 == NULL) {
        return 1;
    }
    memset(temp_r0_2, 0, 0x634);
    M2C_FIELD(sp0, s8 *, 0)      = 0;
    M2C_FIELD(sp0, s32 *, 0x5B8) = 0;
    M2C_FIELD(sp0, s32 *, 0x100) = 1;
    M2C_FIELD(sp0, s32 *, 0x104) = 0;
    M2C_FIELD(sp0, s32 *, 0x108) = 0;
    M2C_FIELD(sp0, s32 *, 0x10C) = 0;
    M2C_FIELD(sp0, s32 *, 0x608) = arg1;
    M2C_FIELD(sp0, s32 *, 0x60C) = arg2;
    M2C_FIELD(sp0, s32 *, 0x1A4) = arg3;
    if (func_02067860(&sp0) == 0) {
        gsifree(sp0);
        sp0 = NULL;
        return 1;
    }
    var_r2                       = 0;
    M2C_FIELD(sp0, s32 *, 0x5C0) = 0;
    do {
        M2C_FIELD((sp0 + (var_r2 * 8)), s32 *, 0x1A8) = 0;
        temp_r0_3                                     = sp0 + (var_r2 * 8);
        var_r2 += 1;
        M2C_FIELD(temp_r0_3, s32 *, 0x1AC) = 0;
    } while (var_r2 < 9);
    temp_r0 = gpiReset(&sp0);
    if (temp_r0 != 0) {
        gpiDestroy(&sp0);
        return temp_r0;
    }
    func_0205c5f8();
    current_time();
    func_02019fa0();
    *arg0 = sp0;
    return 0;
}
