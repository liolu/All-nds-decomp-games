#include "m2c.h"

s32 FX_Div(s32, M2C_UNK);                           /* extern */
s32 VEC_Mag(s32 *);                                 /* extern */

void func_02081990(s32 arg0, s32 *arg1, f32 arg2, s32 *arg3, s32 *arg4) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = (s32) (f32) FX_Div(VEC_Mag(arg1), 0x01000000);
    if (temp_r0 != 0) {
        temp_r0_2 = (s32) (64.0f * (((f32) *arg1 / 4096.0f) / (f32) temp_r0)) + 0x40;
        *arg3     = temp_r0_2;
        if (temp_r0_2 < 0) {
            *arg3 = 0;
        }
        if ((s32) *arg3 > 0x7F) {
            *arg3 = 0x7F;
        }
        if (!((f32) temp_r0 < arg2)) {
            *arg4 = 0;
            return;
        }
        *arg4 = (s32) (127.0f * ((arg2 - (f32) temp_r0) / arg2));
        return;
    }
    *arg3 = 0x40;
    *arg4 = 0x7F;
}
