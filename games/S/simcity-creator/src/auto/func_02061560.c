/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

void *func_020702f0(s32, s32);                      /* extern */
M2C_UNK func_02070b98(s32, u16, u16, u16);          /* extern */
s32 func_02071c48(s32);                             /* extern */
M2C_UNK func_02074438(s32, u16, s32);               /* extern */
M2C_UNK func_020744c4(s32, u16, s32);               /* extern */

void func_02061560(void *arg0) {
    s32 var_r7;
    void *temp_r0;

    M2C_FIELD(arg0, s32 *, 0xF04) = 1;
    var_r7                        = 0;
    do {
        temp_r0 = func_020702f0(M2C_FIELD(arg0, s32 *, 0xF14), var_r7);
        if (M2C_FIELD(temp_r0, s32 *, 8) != 0) {
            func_02074438(func_02071c48(M2C_FIELD(arg0, s32 *, 0xF14)), (u16) (var_r7 + 0x11D),
                          M2C_FIELD((arg0 + (M2C_FIELD(temp_r0, s16 *, 0) * 4)), s32 *, 0xE44));
            func_020744c4(func_02071c48(M2C_FIELD(arg0, s32 *, 0xF14)), (u16) (var_r7 + 0x11D),
                          ((M2C_FIELD(temp_r0, s16 *, 0) - 1) * 0x52) + (s32) (arg0 + 0x178));
            func_02070b98(M2C_FIELD(arg0, s32 *, 0xF14), M2C_FIELD(temp_r0, u16 *, 2), M2C_FIELD(temp_r0, u16 *, 4),
                          (u16) (var_r7 + 0x11D));
        }
        var_r7 += 1;
    } while (var_r7 < 3);
}
