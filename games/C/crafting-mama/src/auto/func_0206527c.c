#include "m2c.h"

s32 func_02006f0c(s32, s32);                        /* extern */
void *func_02029490();                              /* extern */
M2C_UNK func_0205e6a8(void *);                      /* extern */
s32 func_ov001_020cc688();                          /* extern */

void func_0206527c(void) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 var_r0;
    void *temp_r0;

    temp_r0 = func_02029490();
    if ((M2C_FIELD(temp_r0, volatile s32 *, 0x34) & 1) || (func_ov001_020cc688() != 0)) {
        func_0205e6a8(temp_r0 + 0x30);
        M2C_FIELD(temp_r0, volatile s32 *, 0x10) = 1;
        return;
    }
    if (M2C_FIELD(temp_r0, volatile s32 *, 0x34) & 8) {
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, volatile s32 *, 0x1C) + M2C_FIELD(temp_r0, volatile s32 *, 0x2C);
    M2C_FIELD(temp_r0, volatile s32 *, 0x1C) = temp_r0_2;
    M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x30), s16 *, 8) =
        (s16) (M2C_FIELD(temp_r0, volatile s16 *, 0x24) +
               func_02006f0c(M2C_FIELD(temp_r0, volatile s16 *, 0x28) * temp_r0_2, M2C_FIELD(temp_r0, volatile s32 *, 0x20)));
    M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x30), s16 *, 0xA) =
        (s16) (M2C_FIELD(temp_r0, volatile s16 *, 0x26) +
               func_02006f0c(M2C_FIELD(temp_r0, volatile s16 *, 0x2A) * M2C_FIELD(temp_r0, volatile s32 *, 0x1C),
                             M2C_FIELD(temp_r0, volatile s32 *, 0x20)));
    temp_r1 = M2C_FIELD(temp_r0, volatile s32 *, 0x1C);
    if ((temp_r1 > 0) && (temp_r1 < (s32) M2C_FIELD(temp_r0, volatile s32 *, 0x20))) {
        return;
    }
    temp_r0_3 = M2C_FIELD(temp_r0, volatile s32 *, 0x34);
    if (temp_r0_3 & 4) {
        if (temp_r0_3 & 2) {
            M2C_FIELD(temp_r0, volatile s32 *, 0x1C) = (s32) M2C_FIELD(temp_r0, volatile s32 *, 0x20);
        } else {
            M2C_FIELD(temp_r0, volatile s32 *, 0x1C) = 0;
        }
        return;
    }
    if (M2C_FIELD(temp_r0, volatile s32 *, 0x2C) == 1) {
        var_r0 = -1;
    } else {
        var_r0 = 1;
    }
    M2C_FIELD(temp_r0, volatile s32 *, 0x2C) = var_r0;
}
