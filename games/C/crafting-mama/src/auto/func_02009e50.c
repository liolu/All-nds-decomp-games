#include "m2c.h"

s32 func_02009924(void *, u8);                      /* extern */
void *func_02009ca4(s32, M2C_UNK);                  /* extern */
M2C_UNK func_020181e8(void *);                      /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */

void func_02009e50(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r8;
    void *var_r5;

    var_r5  = arg0;
    temp_r4 = M2C_FIELD(var_r5, s32 *, 8);
    if (var_r5 == NULL) {
        return;
    }
loop_3:
    temp_r8                       = func_02019d04();
    temp_r0                       = M2C_FIELD(var_r5, s32 *, 0xC) | 0x40;
    M2C_FIELD(var_r5, s32 *, 0xC) = temp_r0;
    if (temp_r0 & 4) {
        func_020181e8(var_r5 + 0x18);
        var_r5 = NULL;
    }
    func_02019d18(temp_r8);
    if (var_r5 == NULL) {
        return;
    }
    if (func_02009924(var_r5, (u8) ((u32) M2C_FIELD(var_r5, u32 *, 0xC) >> 8)) == 0x100) {
        return;
    }
    var_r5 = func_02009ca4(temp_r4, 1);
    if (var_r5 == NULL) {
        return;
    }
    goto loop_3;
}
