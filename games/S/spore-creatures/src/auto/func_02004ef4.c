#include "m2c.h"

M2C_UNK func_02004f10();                            /* extern */
M2C_UNK func_02004da8(s32);                         /* extern */

s32 func_02004ef4(s32 arg0) {
    func_02004f10();
    func_02004da8(arg0 + 4);
    return arg0;
}
