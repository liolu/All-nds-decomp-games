#include "m2c.h"

u32 func_0206eec4(M2C_UNK, M2C_UNK);                /* extern */
u32 func_0206eee4();                                /* extern */

s32 func_0206ef64(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    u32 temp_r0;
    u32 temp_r4;

    temp_r4 = func_0206eee4();
    temp_r0 = func_0206eec4(arg0, arg1);
    switch (arg2) {                                 /* irregular */
        case 0:
            if (((u32) (temp_r0 - 4) <= temp_r4) && ((u32) (temp_r0 + 4) >= temp_r4)) {
                return 3;
            }
            if (((u32) (temp_r0 - 8) <= temp_r4) && ((u32) (temp_r0 + 8) >= temp_r4)) {
                return 2;
            }
            if ((temp_r0 <= temp_r4) && ((u32) (temp_r0 + 0xC) >= temp_r4)) {
                return 1;
            }
            return -1;
        case 1:
            if (((u32) (temp_r0 - 4) <= temp_r4) && ((u32) (temp_r0 + 4) >= temp_r4)) {
                return 3;
            }
            if (((u32) (temp_r0 - 8) <= temp_r4) && ((u32) (temp_r0 + 8) >= temp_r4)) {
                return 2;
            }
            if ((temp_r0 <= temp_r4) && ((u32) (temp_r0 + 0xC) >= temp_r4)) {
                return 1;
            }
            return -1;
        case 2:
            if (((u32) (temp_r0 - 4) <= temp_r4) && ((u32) (temp_r0 + 4) >= temp_r4)) {
                return 3;
            }
            if (((u32) (temp_r0 - 8) <= temp_r4) && (temp_r0 >= temp_r4)) {
                return 2;
            }
            if (((u32) (temp_r0 - 0xC) <= temp_r4) && (temp_r0 >= temp_r4)) {
                return 1;
            }
            return -1;
        default:
            return 0;
    }
}
