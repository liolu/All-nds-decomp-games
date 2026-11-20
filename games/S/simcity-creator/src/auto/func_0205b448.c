#include "m2c.h"

u8 func_020705d4(s32);                              /* extern */
s32 func_02070b84(s32, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK data_020c2270;

u8 func_0205b448(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_r0;

    temp_r0 = func_020705d4(M2C_FIELD(arg0, s32 *, 0x30));
    if (temp_r0 != 0) {
        return temp_r0;
    }
    return ((s8 *) &data_020c2270)[func_02070b84(M2C_FIELD(arg0, s32 *, 0x30), arg1, arg2)];
}
