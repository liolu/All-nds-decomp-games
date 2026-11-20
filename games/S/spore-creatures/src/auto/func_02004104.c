#include "m2c.h"

M2C_UNK func_02004120();                            /* extern */
M2C_UNK func_02004078(s32);                         /* extern */

s32 func_02004104(s32 arg0) {
    func_02004120();
    func_02004078(arg0 + 4);
    return arg0;
}
