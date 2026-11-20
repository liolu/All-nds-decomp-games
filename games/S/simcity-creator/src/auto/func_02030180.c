#include "m2c.h"

M2C_UNK func_02007344(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0200791c(M2C_UNK);                     /* extern */
M2C_UNK func_02007ad8(s32);                         /* extern */
s32 func_02007b44();                                /* extern */
M2C_UNK func_02031690();                            /* extern */

void func_02030180(void) {
    s32 temp_r4;

    func_02031690();
    func_02007344(0, 0, 0, 0);
    temp_r4 = func_02007b44();
    func_0200791c(1);
    func_02007ad8(temp_r4);
}
