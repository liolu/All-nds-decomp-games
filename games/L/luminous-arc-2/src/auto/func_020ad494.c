/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

M2C_UNK func_020aadbc();                             /* extern */
M2C_UNK func_0201b2b8();                            /* extern */
M2C_UNK func_020aadb4();                            /* extern */
s32 func_020b601c(void **);                         /* extern */
M2C_UNK func_020ad5c0(void **);                        /* extern */
s32 func_020ad618(void **);                              /* extern */
M2C_UNK func_020ab30c(void *);                            /* extern */
void *func_020ab2dc(s32);                               /* extern */
M2C_UNK func_02018eb8(void *, M2C_UNK, s32);               /* extern */

s32 func_020ad494(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    s32 temp_r0;
    s32 var_r2;
    void *temp_r0_2;
    void *temp_r0_3;

    *arg0     = NULL;
    temp_r0_2 = func_020ab2dc(0x634);
    sp0       = temp_r0_2;
    if (temp_r0_2 == NULL) {
        return 1;
    }
    func_02018eb8(temp_r0_2, 0, 0x634);
    M2C_FIELD(sp0, s8 *, 0)      = 0;
    M2C_FIELD(sp0, s32 *, 0x5B8) = 0;
    M2C_FIELD(sp0, s32 *, 0x100) = 1;
    M2C_FIELD(sp0, s32 *, 0x104) = 0;
    M2C_FIELD(sp0, s32 *, 0x108) = 0;
    M2C_FIELD(sp0, s32 *, 0x10C) = 0;
    M2C_FIELD(sp0, s32 *, 0x608) = arg1;
    M2C_FIELD(sp0, s32 *, 0x60C) = arg2;
    M2C_FIELD(sp0, s32 *, 0x1A4) = arg3;
    if (func_020b601c(&sp0) == 0) {
        func_020ab30c(sp0);
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
    temp_r0 = func_020ad618(&sp0);
    if (temp_r0 != 0) {
        func_020ad5c0(&sp0);
        return temp_r0;
    }
    func_020aadb4();
    func_020aadbc();
    func_0201b2b8();
    *arg0 = sp0;
    return 0;
}
