#include "m2c.h"

M2C_UNK func_0203bf80();                         /* extern */
u8 *func_0203bf88();                             /* extern */
s32 func_0203ccc0();                                /* extern */
M2C_UNK func_0208d39c();   /* extern */

void func_0203c200(s32 arg0, s32 arg1) {
    u8 *temp_r4;
    u8 *temp_r5;
    u8 *temp_r6;
    u8 *temp_r7;

    if (arg1 != 0) {
        return;
    }
    temp_r7 = func_0203bf88();
    temp_r6 = func_0203bf88(arg0);
    temp_r5 = func_0203bf88(arg0);
    temp_r4 = func_0203bf88(arg0);
    func_0203bf80(arg0);
    func_0208d39c(arg0 + 0x24, *temp_r7, M2C_FIELD(temp_r6, u8 *, 1), M2C_FIELD(temp_r5, u8 *, 2),
                  (s32) M2C_FIELD(temp_r4, u8 *, 3), func_0203ccc0());
}
