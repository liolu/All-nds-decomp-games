#include "m2c.h"

s32 func_0203272c();                                /* extern */
s32 func_020394cc(s32, s32);                        /* extern */
s32 func_020394ec(s32, s32);                        /* extern */
M2C_UNK func_0206082c(s32, s32);                    /* extern */
M2C_UNK func_020641dc(s32, u16, M2C_UNK);           /* extern */
s32 func_020742ec(s32);                             /* extern */
M2C_UNK func_0207432c(s32);                         /* extern */
extern s32 data_020ef784;

void func_02098b24(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;

    if (M2C_FIELD(arg0, s32 *, 0x48) != -1) {
        if (data_020ef784 == 0) {
            var_r0 = func_020742ec(0x2AD8);
            if (var_r0 != 0) {
                var_r0 = func_0203272c();
            }
            data_020ef784 = var_r0;
        }
        func_0206082c(func_020394cc(data_020ef784, M2C_FIELD(arg0, s32 *, 0x3C)), M2C_FIELD(arg0, s32 *, 0x48));
        M2C_FIELD(arg0, s32 *, 0x48) = -1;
    }
    if (M2C_FIELD(arg0, u16 *, 0x94) != 0xFFFF) {
        if (data_020ef784 == 0) {
            var_r0_2 = func_020742ec(0x2AD8);
            if (var_r0_2 != 0) {
                var_r0_2 = func_0203272c();
            }
            data_020ef784 = var_r0_2;
        }
        func_020641dc(func_020394ec(data_020ef784, M2C_FIELD(arg0, s32 *, 0x3C)), M2C_FIELD(arg0, u16 *, 0x94), 0);
        M2C_FIELD(arg0, u16 *, 0x94) = 0xFFFFU;
    }
    func_0207432c(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, u8 *, 0x54) = (u8) (M2C_FIELD(arg0, u8 *, 0x54) & ~1);
    M2C_FIELD(arg0, u8 *, 0x90) = (u8) (M2C_FIELD(arg0, u8 *, 0x90) & ~1);
}
