#include "m2c.h"

M2C_UNK func_020b442c();                            /* extern */
s8 *func_020b4b2c(void *, M2C_UNK);                 /* extern */
s32 func_020b4b50(void *);                          /* extern */
M2C_UNK func_020b7ae8(void *, void *, s32);         /* extern */
M2C_UNK func_020b7cf0(void *);                      /* extern */
s32 func_020b7f04(void *);                          /* extern */

void func_020b802c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (M2C_FIELD(arg0, u8 *, 0xA28) == 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0xA28)  = 0U;
    M2C_FIELD(arg0, s32 *, 0xA30) = 0;
    if (*func_020b4b2c(arg0 + 4, 6) != 0) {
        func_020b7cf0(arg0);
        return;
    }
    temp_r0 = func_020b4b50(arg0 + 4);
    switch (temp_r0) {                              /* irregular */
        case 4:
        case 17:
            M2C_FIELD(arg0, s32 *, 0) = 7;
            return;
        case 5:
            M2C_FIELD(arg0, s32 *, 0) = 3;
            return;
        default:
            if (*func_020b4b2c(arg0 + 4, 2) != 0) {
                M2C_FIELD(arg0, s32 *, 0)     = 6;
                M2C_FIELD(arg0, s32 *, 0xA04) = 0;
                if (M2C_FIELD(arg0, s32 *, 0x9F8) == 0) {
                    return;
                }
                func_020b442c();
                return;
            }
            temp_r0_2 = func_020b7f04(arg0);
            if (temp_r0_2 != 0) {
                func_020b7ae8(arg0, arg0 + 0x8EC, temp_r0_2 - 1);
                return;
            }
            func_020b7ae8(arg0, arg0 + 0x8EC, M2C_FIELD(arg0, s32 *, 0xA10) + 1);
            return;
    }
}
