#include "m2c.h"

M2C_UNK func_02060908(void *, u16, s16, u16, s32);  /* extern */
M2C_UNK func_02060c64(void *);                      /* extern */
M2C_UNK func_02060da0(void *, void *, s32);         /* extern */
M2C_UNK func_02061728(s32, s32, s32, u16, s32);     /* extern */
s32 func_02061750(s32);                             /* extern */
void *func_020702f0(s32, u16);                      /* extern */
s32 func_02071c48(s32);                             /* extern */
M2C_UNK func_02073644(s32, M2C_UNK);                /* extern */
s32 func_0207441c(s32, u16);                        /* extern */

void func_0206080c(void *arg0) {
    s16 temp_r9;
    s32 temp_r0_2;
    u16 var_r8;
    void *temp_r0;

    var_r8 = 0;
    do {
        temp_r0 = func_020702f0(M2C_FIELD(arg0, s32 *, 0xF14), var_r8);
        temp_r9 = M2C_FIELD(temp_r0, s16 *, 0);
        if (((s32) temp_r9 > 0) && (temp_r9 != func_02061750(M2C_FIELD((arg0 + (var_r8 * 4)), s32 *, 0x164)))) {
            func_02060908(arg0, var_r8, temp_r9, M2C_FIELD(temp_r0, u16 *, 2), (s32) M2C_FIELD(temp_r0, u16 *, 4));
            if (M2C_FIELD(arg0, s32 *, 0xF04) != 0) {
                temp_r0_2 =
                    func_0207441c(func_02071c48(M2C_FIELD(arg0, s32 *, 0xF14)), (u16) (M2C_FIELD(arg0, s32 *, 0xF00) + 0x11D));
                func_02060da0(arg0, arg0 + 0xEE8, temp_r0_2);
                func_02060c64(arg0);
                func_02061728(M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xF00) * 4)), s32 *, 0x164), temp_r0_2,
                              M2C_FIELD(arg0, s32 *, 0xEFC), M2C_FIELD(arg0, u16 *, 0xEF8),
                              (s32) M2C_FIELD(arg0, u16 *, 0xEFA));
                M2C_FIELD(arg0, s32 *, 0xF04) = 0;
                func_02073644(M2C_FIELD(arg0, s32 *, 0xF14), 1);
            }
        }
        var_r8 += 1;
    } while ((u32) var_r8 < 5U);
}
