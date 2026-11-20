#include "m2c.h"

s32 func_02045f8c();                                /* extern */
M2C_UNK func_020537e0();                            /* extern */
M2C_UNK func_0206fff0(s32);                         /* extern */
s32 func_02092f8c(s32);                             /* extern */
s32 func_0209340c(s32);                             /* extern */

void func_020a2150(void *arg0) {
    s16 var_r5;
    s32 temp_r0;
    s32 temp_r1;
    void **temp_r0_2;
    void **temp_r0_3;

    var_r5 = 0;
    if ((func_02092f8c(M2C_FIELD(arg0, s32 *, 0x1C)) == 0) && (func_0209340c(M2C_FIELD(arg0, s32 *, 0x1C)) == 0)) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x4C);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x50);
        if (temp_r1 >= 0) {
            switch (temp_r0) {                      /* switch 1; irregular */
                case 0:                                 /* switch 1 */
                    var_r5 = M2C_FIELD((arg0 + (temp_r1 * 0x10)), s16 *, 0x64) + 6;
                    break;
                case 1:                                 /* switch 1 */
                    var_r5 = M2C_FIELD((arg0 + (temp_r1 * 0x10)), s16 *, 0x64) + 0xE;
                    break;
                case 2:                                 /* switch 1 */
                    var_r5 = M2C_FIELD((arg0 + (temp_r1 * 0x10)), s16 *, 0x64) + 1;
                    break;
            }
        } else {
            switch (temp_r0) {                      /* switch 2; irregular */
                case 2:                                 /* switch 2 */
                    var_r5 = 5;
                    break;
                case 0:                                 /* switch 2 */
                    var_r5 = 1;
                    break;
                case 1:                                 /* switch 2 */
                    var_r5 = 3;
                    break;
            }
        }
        temp_r0_2 = M2C_FIELD(arg0, void ***, 0x34);
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK, s16), 0x3C)(temp_r0_2, 4, var_r5);
    }
    if (M2C_FIELD(arg0, u8 *, 0x4B) != 0) {
        func_0206fff0(M2C_FIELD(arg0, s32 *, 0x30));
        func_020537e0();
        if (func_02045f8c() == 0) {
            temp_r0_3 = M2C_FIELD(arg0, void ***, 0x34);
            M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK), 0x38)(temp_r0_3, 0);
        }
    }
    M2C_FIELD(arg0, u8 *, 0x4B) = 0U;
}
