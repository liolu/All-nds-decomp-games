#include "m2c.h"

M2C_UNK func_0200b784(s32);                         /* extern */
s32 func_0200bf00();                                /* extern */
M2C_UNK func_0200bfc4(s32 *);                       /* extern */

void func_0200c014(s32 *arg0) {
    if (func_0200bf00() != 0) {
        func_0200bfc4(arg0);
    }
    func_0200b784(*arg0);
}
