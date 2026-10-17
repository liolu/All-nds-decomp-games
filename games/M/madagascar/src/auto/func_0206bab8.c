/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02063cf8();                                /* extern */
M2C_UNK func_02063d0c(s32);                         /* extern */
s32 func_0206b228();                                /* extern */
void *func_0206b244();                              /* extern */

s32 func_0206bab8(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_02063cf8();
    temp_r0 = func_0206b228();
    if (temp_r0 != 0) {
        func_02063d0c(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_0206b244(), s32 *, 0xB4) = arg0;
    func_02063d0c(temp_r5);
    return 0;
}
