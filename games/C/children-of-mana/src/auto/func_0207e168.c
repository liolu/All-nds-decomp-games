/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020114e4();                            /* extern */
s32 func_02013d0c();                                /* extern */
M2C_UNK func_02014200(s32, M2C_UNK);                /* extern */
M2C_UNK func_02014208(s32, M2C_UNK);                /* extern */

void *func_0207e168(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_020114e4();
    M2C_FIELD(arg0, s32 *, 8) = func_02013d0c();
    temp_r0                   = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 != 0) {
        func_02014208(temp_r0, 1);
        func_02014200(M2C_FIELD(arg0, s32 *, 8), 1);
    }
    return arg0;
}
