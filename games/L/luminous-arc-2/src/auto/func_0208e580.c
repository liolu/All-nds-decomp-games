#include "m2c.h"

s32 *func_02085640(s32, s32);                       /* extern */
M2C_UNK func_0208a718(s32, s32);                    /* extern */
void *func_02090a40();                              /* extern */
M2C_UNK func_020bbbbc(s32);                         /* extern */

s32 func_0208e580(s32 arg0) {
    s32 *temp_r0;

    M2C_FIELD(func_02090a40(), s32 *, 0x20C) = arg0;
    temp_r0                                  = func_02085640(arg0, M2C_FIELD(func_02090a40(), u8 *, 0xD) + 1);
    if (temp_r0 != NULL) {
        M2C_FIELD(func_02090a40(), s8 *, 0x1A8) = 2;
        func_020bbbbc(*temp_r0);
        M2C_FIELD(func_02090a40(), s8 *, 0x1A8) = 0;
        return 1;
    }
    func_0208a718(arg0, M2C_FIELD(func_02090a40(), u8 *, 0xD) + 1);
    return 0;
}
