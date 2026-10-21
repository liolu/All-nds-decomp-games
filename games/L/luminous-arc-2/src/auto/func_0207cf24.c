#include "m2c.h"

M2C_UNK func_0209345c();                            /* extern */
M2C_UNK func_02093704();                            /* extern */
M2C_UNK func_02093820();                            /* extern */
u32 func_02093a30();                                /* extern */
void *func_0207b9f4(M2C_UNK);                       /* extern */
M2C_UNK func_0207bac8(M2C_UNK);                     /* extern */
M2C_UNK func_0207d160(u8);                          /* extern */

u8 func_0207cf24(void) {
    u32 temp_r0;
    u8 var_r5;
    void *temp_r4;

    temp_r4 = func_0207b9f4(0x10);
    var_r5  = 9;
    temp_r0 = func_02093a30();
    switch (temp_r0) {
        default:
            break;
        case 3:
            var_r5 = M2C_FIELD(temp_r4, u8 *, 0xD0E);
            if (((u32) (M2C_FIELD(temp_r4, u8 *, 0xD0C) << 0x18) >> 0x1E) == 1) {
                var_r5                                                                    = 7;
                M2C_FIELD((temp_r4 + (M2C_FIELD(temp_r4, u8 *, 0xD13) * 4)), s8 *, 0x444) = 0;
            } else if (((u32) var_r5 >= 3U) && ((u32) var_r5 <= 5U)) {
                func_0207d160(var_r5);
            }
            break;
        case 6:
            func_0209345c();
            break;
        case 9:
            func_02093704();
            break;
        case 12:
            func_02093820();
            func_0207bac8(4);
            var_r5 = 0x11;
            break;
        case 11:
            func_0207bac8(0);
            var_r5 = 0x11;
            break;
    }
    return var_r5;
}
