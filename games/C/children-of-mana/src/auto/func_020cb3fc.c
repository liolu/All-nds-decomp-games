/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020114e4();                            /* extern */
s32 func_02013d0c();                                /* extern */
M2C_UNK func_02014200(s32, M2C_UNK);                /* extern */
M2C_UNK func_02014208(s32, M2C_UNK);                /* extern */

s32 *func_020cb3fc(s32 *arg0) {
    s32 temp_r0;

    func_020114e4();
    *arg0   = func_02013d0c();
    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        func_02014208(temp_r0, 1);
        func_02014200(*arg0, 1);
    }
    return arg0;
}
