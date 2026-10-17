/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02048fb4(s32, s32);                        /* extern */

void func_0204bb0c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r6;
    s32 var_r6_2;
    void *var_r5;
    void *var_r5_2;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x20) > 0xFFDC) || ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xFFDC)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x29;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x18) = 0xFFDC;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *), 0)(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xD4) != 8) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0xF;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0xD4);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *), 0)(arg0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) > 4) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x1A;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) = 4;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *), 0)(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x134) = 1;
    M2C_FIELD(arg0, s32 *, 0x138) = 1;
    var_r5                        = M2C_FIELD(arg0, void **, 0xD8);
    var_r6                        = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0) {
        do {
            temp_r0 = M2C_FIELD(var_r5, s32 *, 8);
            if ((temp_r0 <= 0) || (temp_r0 > 4) || (temp_r0_2 = M2C_FIELD(var_r5, s32 *, 0xC), (temp_r0_2 <= 0)) ||
                (temp_r0_2 > 4)) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x12;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *), 0)(arg0);
            }
            temp_r0_3 = M2C_FIELD(var_r5, s32 *, 8);
            var_r1    = M2C_FIELD(arg0, s32 *, 0x134);
            var_r6 += 1;
            if (var_r1 <= temp_r0_3) {
                var_r1 = temp_r0_3;
            }
            M2C_FIELD(arg0, s32 *, 0x134) = var_r1;
            temp_r0_4                     = M2C_FIELD(var_r5, s32 *, 0xC);
            var_r1_2                      = M2C_FIELD(arg0, s32 *, 0x138);
            var_r5 += 0x54;
            if (var_r1_2 <= temp_r0_4) {
                var_r1_2 = temp_r0_4;
            }
            M2C_FIELD(arg0, s32 *, 0x138) = var_r1_2;
        } while (var_r6 < (s32) M2C_FIELD(arg0, s32 *, 0x24));
    }
    M2C_FIELD(arg0, s32 *, 0x13C) = 8;
    var_r5_2                      = M2C_FIELD(arg0, void **, 0xD8);
    var_r6_2                      = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0) {
        do {
            M2C_FIELD(var_r5_2, s32 *, 0x24) = 8;
            M2C_FIELD(var_r5_2, s32 *, 0x1C) =
                func_02048fb4(M2C_FIELD(arg0, s32 *, 0x1C) * M2C_FIELD(var_r5_2, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x134) * 8);
            M2C_FIELD(var_r5_2, s32 *, 0x20) = func_02048fb4(M2C_FIELD(arg0, s32 *, 0x20) * M2C_FIELD(var_r5_2, s32 *, 0xC),
                                                             M2C_FIELD(arg0, s32 *, 0x138) * 8);
            M2C_FIELD(var_r5_2, s32 *, 0x28) =
                func_02048fb4(M2C_FIELD(arg0, s32 *, 0x1C) * M2C_FIELD(var_r5_2, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x134));
            M2C_FIELD(var_r5_2, s32 *, 0x2C) =
                func_02048fb4(M2C_FIELD(arg0, s32 *, 0x20) * M2C_FIELD(var_r5_2, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x138));
            M2C_FIELD(var_r5_2, s32 *, 0x30) = 1;
            M2C_FIELD(var_r5_2, s32 *, 0x4C) = 0;
            var_r6_2 += 1;
            var_r5_2 += 0x54;
        } while (var_r6_2 < (s32) M2C_FIELD(arg0, s32 *, 0x24));
    }
    M2C_FIELD(arg0, s32 *, 0x140) = func_02048fb4(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x138) * 8);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x148) < (s32) M2C_FIELD(arg0, s32 *, 0x24)) || (M2C_FIELD(arg0, s32 *, 0xDC) != 0)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1B4), s32 *, 0x10) = 1;
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1B4), s32 *, 0x10) = 0;
}
