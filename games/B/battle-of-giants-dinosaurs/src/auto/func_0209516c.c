#include "m2c.h"

M2C_UNK func_02083b64(s32);                         /* extern */
M2C_UNK func_02099008(s32);                         /* extern */

s32 func_0209516c(s32 arg0) {
    func_02083b64(arg0 + 0x288);
    func_02083b64(arg0 + 0x174);
    func_02083b64(arg0 + 0x60);
    func_02099008(arg0);
    return arg0;
}
