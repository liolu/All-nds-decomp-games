/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270();                /* extern */
s32 func_0201e150();                          /* extern */
M2C_UNK func_0208fa8c();                /* extern */
M2C_UNK func_0208faf4();                    /* extern */
M2C_UNK func_0208fbc8();                /* extern */
s32 func_0208fc6c();                                /* extern */

void func_0201f0b8(void *arg0) {
    s32 var_r0;
    s32 var_r1;

    var_r0 = func_0200f270(0xC, 0);
    if (var_r0 != 0) {
        var_r0 = func_0208fc6c();
    }
    M2C_FIELD(arg0, s32 *, 0x1C8) = var_r0;
    func_0208fbc8(M2C_FIELD(arg0, s32 *, 0x1C8), 2);
    func_0208fa8c(M2C_FIELD(arg0, s32 *, 0x1C8), 1);
    if (M2C_FIELD(arg0, s32 *, 0x220) != 0) {
        var_r1 = func_0201e150();
    } else {
        var_r1 = func_0201e150(arg0);
    }
    func_0208faf4(M2C_FIELD(arg0, s32 *, 0x1C8), var_r1);
}
