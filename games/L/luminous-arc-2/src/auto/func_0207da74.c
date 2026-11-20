#include "m2c.h"

void *func_0207b9f4(M2C_UNK);                       /* extern */
s32 func_0207bba8(u8);                              /* extern */
M2C_UNK func_02082288();                            /* extern */
s32 func_020823e8();                                /* extern */
s32 func_02082428();                                /* extern */

s32 func_0207da74(void *arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_0207b9f4(1);
    temp_r0 = func_020823e8();
    if (temp_r0 != 0) {
        if (M2C_FIELD(temp_r4, u8 *, 0x15) == func_0207bba8(M2C_FIELD(arg0, u8 *, 0xD0D))) {
            M2C_FIELD(temp_r4, s32 *, 0x10) = func_02082428();
        }
        func_02082288();
        if (temp_r0 == 0xB) {
            return 0xF;
        }
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0xD13) * 4)), s8 *, 0x444) = 1;
        return 0xB;
    }
    return 0xE;
}
