#include "m2c.h"

s32 func_020b132c();                                /* extern */
s32 func_020b136c();                                /* extern */
extern M2C_UNK data_020c4ee8;
extern s32 data_020e1dc0;

s16 func_020ae184(s32 arg0) {
    s32 temp_r0;
    s32 temp_r3;

    switch (arg0) {                                 /* irregular */
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            temp_r0       = func_020b132c();
            data_020e1dc0 = temp_r0;
            if (temp_r0 == 8) {
                data_020e1dc0 = 9;
            } else if (temp_r0 != 7) {
                data_020e1dc0 = temp_r0 - 1;
            } else {
                data_020e1dc0 = func_020b136c() + 2;
            }
            return *((u16 *) ((s8 *) &data_020c4ee8 + (data_020e1dc0 * 2)));
        default:
            temp_r3       = arg0 - 3;
            data_020e1dc0 = temp_r3;
            return *((u16 *) ((s8 *) &data_020c4ee8 + (temp_r3 * 2)));
    }
}
