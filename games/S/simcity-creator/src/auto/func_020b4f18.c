#include "m2c.h"

M2C_UNK func_020b5178(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020b53a4(void *, M2C_UNK);             /* extern */
M2C_UNK func_020b6c64(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020b6c68(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
u32 func_020b76e4(M2C_UNK);                         /* extern */
M2C_UNK func_020b7eac(M2C_UNK, M2C_UNK);            /* extern */
void *func_020b8388(M2C_UNK, M2C_UNK);              /* extern */

void func_020b4f18(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u32 temp_r0;
    u8 temp_r0_3;
    void *temp_r0_2;

    M2C_FIELD(arg0, s8 *, 8)    = 0;
    M2C_FIELD(arg0, s8 *, 0x1E) = 0;
    M2C_FIELD(arg0, s8 *, 0xD9) = 0;
    temp_r0                     = func_020b76e4(arg1);
    switch (temp_r0) {
        default:
            break;
        case 2:
            M2C_FIELD(arg0, s8 *, 8)    = 1;
            M2C_FIELD(arg0, u8 *, 0xB0) = 1U;
            temp_r0_2                   = func_020b8388(arg1, 5);
            if ((M2C_FIELD(temp_r0_2, s8 *, 3) == 0) && (M2C_FIELD(temp_r0_2, s8 *, 0) == 0)) {
                M2C_FIELD(arg0, s8 *, 0xD9) = 1;
            }
            func_020b5178(arg0, arg1, arg2, arg3);
            break;
        case 1:
        case 5:
        case 6:
        case 7:
            M2C_FIELD(arg0, s8 *, 8)    = 1;
            M2C_FIELD(arg0, u8 *, 0xB0) = 1U;
            func_020b5178(arg0, arg1, arg2, arg3);
            func_020b8388(arg1, 5);
            M2C_FIELD(arg0, s8 *, 0x29) = 0;
            break;
        case 3:
            M2C_FIELD(arg0, s8 *, 8)    = 1;
            M2C_FIELD(arg0, s8 *, 0x1E) = 1;
            M2C_FIELD(arg0, s8 *, 0xD8) = 0;
            if (M2C_FIELD(arg0, u8 *, 0xB0) != 0) {
                func_020b53a4(arg0, arg1);
            }
            func_020b7eac(arg1, 1);
            func_020b6c68(arg0, arg1, arg2, arg3);
            break;
    }
    func_020b6c64(arg0, arg1, arg2, arg3);
    temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x1C);
    if (temp_r0_3 != 0) {
        M2C_FIELD(arg0, u8 *, 0x1C) = (u8) (temp_r0_3 - 1);
    }
}
