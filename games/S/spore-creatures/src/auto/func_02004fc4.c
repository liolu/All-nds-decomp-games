#include "m2c.h"

M2C_UNK func_02004fe0();                            /* extern */
M2C_UNK func_02004e10(s32);                         /* extern */

s32 func_02004fc4(s32 arg0) {
    func_02004fe0();
    func_02004e10(arg0 + 4);
    return arg0;
}
