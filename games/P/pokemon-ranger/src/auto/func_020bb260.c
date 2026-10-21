/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bb260(void *arg0, void *arg1, void *arg2, s32 arg3) {
    s32 var_r3;
    s32 var_r6;
    u32 temp_r10;
    u32 temp_r10_2;
    u32 temp_r10_3;
    u32 temp_r10_4;
    u32 temp_r9;
    u32 temp_r9_2;
    u32 temp_r9_3;
    u32 temp_r9_4;
    void *var_r0;
    void *var_r1;
    void *var_r2;

    var_r0 = arg0;
    var_r1 = arg1;
    var_r2 = arg2;
    var_r3 = arg3;
    if (var_r3 <= 0) {
        return 0;
    }
    var_r6 = 0;
loop_3:
    temp_r10                    = M2C_FIELD(var_r1, u32 *, 0);
    temp_r9                     = M2C_FIELD(var_r2, u32 *, 0);
    M2C_FIELD(var_r0, s32 *, 0) = (s32) ((temp_r10 - temp_r9) - var_r6);
    if (temp_r10 != temp_r9) {
        if (temp_r10 < temp_r9) {
            var_r6 = 1;
        } else {
            var_r6 = 0;
        }
    }
    if ((s32) (var_r3 - 1) > 0) {
        temp_r10_2                  = M2C_FIELD(var_r1, u32 *, 4);
        temp_r9_2                   = M2C_FIELD(var_r2, u32 *, 4);
        M2C_FIELD(var_r0, s32 *, 4) = (s32) ((temp_r10_2 - temp_r9_2) - var_r6);
        if (temp_r10_2 != temp_r9_2) {
            if (temp_r10_2 < temp_r9_2) {
                var_r6 = 1;
            } else {
                var_r6 = 0;
            }
        }
        if ((s32) (var_r3 - 2) > 0) {
            temp_r10_3                  = M2C_FIELD(var_r1, u32 *, 8);
            temp_r9_3                   = M2C_FIELD(var_r2, u32 *, 8);
            M2C_FIELD(var_r0, s32 *, 8) = (s32) ((temp_r10_3 - temp_r9_3) - var_r6);
            if (temp_r10_3 != temp_r9_3) {
                if (temp_r10_3 < temp_r9_3) {
                    var_r6 = 1;
                } else {
                    var_r6 = 0;
                }
            }
            if ((s32) (var_r3 - 3) > 0) {
                temp_r10_4                    = M2C_FIELD(var_r1, u32 *, 0xC);
                temp_r9_4                     = M2C_FIELD(var_r2, u32 *, 0xC);
                M2C_FIELD(var_r0, s32 *, 0xC) = (s32) ((temp_r10_4 - temp_r9_4) - var_r6);
                if (temp_r10_4 != temp_r9_4) {
                    if (temp_r10_4 < temp_r9_4) {
                        var_r6 = 1;
                    } else {
                        var_r6 = 0;
                    }
                }
                var_r3 -= 4;
                if (var_r3 > 0) {
                    var_r1 += 0x10;
                    var_r2 += 0x10;
                    var_r0 += 0x10;
                    goto loop_3;
                }
            }
        }
    }
    return var_r6;
}
