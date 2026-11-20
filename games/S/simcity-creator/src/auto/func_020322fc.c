#include "m2c.h"

M2C_UNK func_02028d38(s32, M2C_UNK);                /* extern */
s32 func_02032330(s32 *);                           /* extern */

s32 func_020322fc(s32 *arg0, s32 arg1) {
    func_02028d38(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_02032330(arg0) != 0) {
        return 1;
    }
    return 0;
}
