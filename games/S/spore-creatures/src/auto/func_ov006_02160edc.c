#include "m2c.h"

M2C_UNK func_ov006_021605b0(s32);                         /* extern */
M2C_UNK func_02036128(s32);                         /* extern */

s32 func_ov006_02160edc(s32 arg0) {
    func_02036128(arg0 + 0x80);
    func_ov006_021605b0(arg0);
    return arg0;
}
