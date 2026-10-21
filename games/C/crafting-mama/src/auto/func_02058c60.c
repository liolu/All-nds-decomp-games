#include "m2c.h"

M2C_UNK func_0204d8cc(s32, M2C_UNK);                /* extern */
s32 func_02058c94(s32 *);                           /* extern */

s32 func_02058c60(s32 *arg0, s32 arg1) {
    func_0204d8cc(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_02058c94(arg0) != 0) {
        return 1;
    }
    return 0;
}
