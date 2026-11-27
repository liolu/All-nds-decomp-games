#include "m2c.h"

M2C_UNK func_0200bd28(void *);                      /* extern */
s32 func_02055d00(u8, s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02055f54(u8, s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0205639c(s32);                             /* extern */

void func_0203a380(void *arg0) {
    s16 temp_r0_2;
    s32 var_r5;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x14);
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, u8 *, 0x14)  = 1U;
            M2C_FIELD(arg0, s16 *, 0x18) = 0;
        /* fallthrough */
        case 1:
            temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x18);
            if ((s32) temp_r0_2 > 0) {
                M2C_FIELD(arg0, s16 *, 0x18) = (s16) (temp_r0_2 - 1);
                return;
            }
            var_r5 = 0;
        loop_7:
            if (M2C_FIELD(arg0, s16 *, 0x1A) & func_0205639c(var_r5)) {
                if (func_02055d00(M2C_FIELD(arg0, u8 *, 0x17), var_r5, M2C_FIELD(arg0, s32 *, 0x1C), 0) != 0) {
                    func_02055f54(M2C_FIELD(arg0, u8 *, 0x17), var_r5, 0, 0xFF, 0);
                }
                M2C_FIELD(arg0, s16 *, 0x1A) = (s16) (M2C_FIELD(arg0, s16 *, 0x1A) & ~func_0205639c(var_r5));
                M2C_FIELD(arg0, s16 *, 0x18) = 0x1E;
            } else {
                var_r5 += 1;
                if (var_r5 < 9) {
                    goto loop_7;
                }
            }
            if (M2C_FIELD(arg0, s16 *, 0x18) != 0) {
                return;
            }
            func_0200bd28(arg0);
            return;
    }
}
