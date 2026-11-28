#include "m2c.h"

s32 func_0203272c();                                /* extern */
M2C_UNK func_0203355c(s32);                         /* extern */
s32 func_020742ec(s32);                             /* extern */
extern s32 data_020ef760;
extern s8 data_020ef77c;
extern s32 data_020ef784;
extern M2C_UNK data_027e0000;

void func_0202d3ac(void) {
    s32 var_r0;

    data_020ef760 += 1;
    data_020ef77c = 1;
    if (data_020ef784 == 0) {
        var_r0 = func_020742ec(0x2AD8);
        if (var_r0 != 0) {
            var_r0 = func_0203272c();
        }
        data_020ef784 = var_r0;
    }
    func_0203355c(data_020ef784);
    M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) | 1);
}
