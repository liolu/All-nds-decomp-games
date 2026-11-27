/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02050a28();                                /* extern */
s32 func_02050af8();                                /* extern */
s32 func_020510f4();                                /* extern */
M2C_UNK func_0205c9c4();                            /* extern */
extern s32 data_02126b7c;
extern s32 data_02126b88;

void *func_02091150(void *arg0) {
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    if (func_02050a28() == 0) {
        var_r0 = 0;
    } else if ((data_02126b7c == 0) || (data_02126b88 == 0)) {
        var_r0 = 0;
    } else if (func_020510f4() != 0xD01) {
        var_r0 = 0;
    } else if (func_02050af8() == 0) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        func_0205c9c4();
    }
    return arg0;
}
