/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020e2998();                            /* extern */

s32 func_020e2b8c(void *arg0, void *arg1) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 var_r4;

    temp_r2 = M2C_FIELD(arg1, s32 *, 0x10);
    var_r4  = 0;
    if (temp_r2 > 0) {
        M2C_FIELD(arg1, s32 *, 0x10) = (s32) (temp_r2 - 1);
    } else {
        temp_r2_2 = M2C_FIELD(arg1, s32 *, 0x24);
        if (temp_r2_2 > 0) {
            M2C_FIELD(arg1, s32 *, 0x24) = (s32) (temp_r2_2 - 1);
            var_r4                       = 1;
        } else {
            temp_r2_3 = M2C_FIELD(arg1, s32 *, 0x28);
            if (temp_r2_3 > 0) {
                M2C_FIELD(arg1, s32 *, 0x28) = (s32) (temp_r2_3 - 1);
                var_r4                       = 1;
            } else {
                temp_r2_4 = M2C_FIELD(arg1, s32 *, 8);
                switch (temp_r2_4) {                /* irregular */
                    case 0:
                        func_020e2998();
                        break;
                    case 1:
                        var_r4                      = 1;
                        M2C_FIELD(arg1, s8 *, 0x2C) = 1;
                        break;
                    case 2:
                        M2C_FIELD(arg1, s32 *, 0x24)  = (s32) M2C_FIELD(arg1, s32 *, 0xC);
                        M2C_FIELD(arg1, s32 *, 0x28)  = (s32) M2C_FIELD(arg1, s32 *, 0x14);
                        M2C_FIELD(arg0, s32 *, 0x24C) = (s32) (M2C_FIELD(arg0, s32 *, 0x24C) + 1);
                        break;
                }
            }
        }
    }
    return var_r4;
}
