/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02063cf8();                                /* extern */
M2C_UNK func_02063d0c(s32);                         /* extern */
M2C_UNK func_02065798(M2C_UNK);                     /* extern */

void func_020651f8(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02063cf8();
    func_02065798(arg1);
    func_02063d0c(temp_r4);
}
