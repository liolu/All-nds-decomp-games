#include "m2c.h"

M2C_UNK func_02007ecc(s32, s32, u16);               /* extern */
s32 func_0203272c();                                /* extern */
s32 func_020742ec(s32);                             /* extern */
extern s32 data_020ef784;
extern s32 data_020ef788;
extern s32 data_020ef78c;

u32 func_02098c20(void *arg0) {
    s32 temp_r2;
    s32 var_r0;
    s32 var_r0_2;
    u32 temp_r0;
    u32 temp_r0_2;

    temp_r0_2 = (u32) (M2C_FIELD(arg0, u8 *, 0x54) << 0x1F) >> 0x1F;
    if (temp_r0_2 == 0) {
        return temp_r0_2;
    }
    temp_r0 = (u32) (M2C_FIELD(arg0, u8 *, 0x90) << 0x1F) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (data_020ef784 == 0) {
        var_r0 = func_020742ec(0x2AD8);
        if (var_r0 != 0) {
            var_r0 = func_0203272c();
        }
        data_020ef784 = var_r0;
    }
    func_02007ecc((M2C_FIELD(arg0, s32 *, 0x3C) * 0x1C) + (data_020ef784 + 0x924), M2C_FIELD(arg0, s32 *, 8),
                  (u16) M2C_FIELD(arg0, s32 *, 0x40));
    if (data_020ef784 == 0) {
        var_r0_2 = func_020742ec(0x2AD8);
        if (var_r0_2 != 0) {
            var_r0_2 = func_0203272c();
        }
        data_020ef784 = var_r0_2;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x40);
    if (M2C_FIELD(arg0, s32 *, 0x3C) == 0) {
        data_020ef78c += temp_r2;
        return (u32) &data_020ef78c;
    }
    data_020ef788 += temp_r2;
    return (u32) &data_020ef788;
}
