#include "m2c.h"

M2C_UNK func_020c6f98(void *, s32);                 /* extern */
M2C_UNK func_020c739c(void *);                      /* extern */
s32 func_ov000_02110578(void *, s32 *);             /* extern */

void func_020caab8(void *arg0, void *arg1) {
    s32 sp0;
    s32 temp_r1;
    u32 temp_r2;

    temp_r2 = (u32) (M2C_FIELD(arg0, s32 *, 0xA4) << 0xE) >> 0x1A;
    switch (temp_r2) {                              /* irregular */
        case 23:
            sp0 = M2C_FIELD(arg0, s32 *, 0x38);
            if (func_ov000_02110578(arg1, &sp0) == 0) {
                return;
            }
            M2C_FIELD(arg0, s32 *, 0xA4) = (s32) (M2C_FIELD(arg0, s32 *, 0xA4) | 0x20000000);
            return;
        case 24:
            if ((((u32) (M2C_FIELD(arg1, u8 *, 0x135) << 0x1E) >> 0x1E) + 1) != M2C_FIELD(arg0, s32 *, 0x1C)) {
                return;
            }
            temp_r1 = M2C_FIELD(arg0, s32 *, 0x3C);
            if (temp_r1 <= 0) {
                return;
            }
            func_020c6f98(arg0, temp_r1 - 1);
            func_020c739c(arg0);
            return;
    }
}
