#include "m2c.h"

M2C_UNK func_02074750();                            /* extern */
M2C_UNK func_02074bbc(s32);                         /* extern */

s32 func_020746a8(s32 arg0) {
    func_02074750();
    func_02074bbc(arg0 + 0x24);
    func_02074bbc(arg0 + 0x18);
    func_02074bbc(arg0 + 0xC);
    func_02074bbc(arg0);
    return arg0;
}
