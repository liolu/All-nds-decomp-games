#include "m2c.h"

s32 func_0201582c(u16);                             /* extern */
s32 func_02026b1c(void *);                          /* extern */
M2C_UNK func_02028cb4(u8);                          /* extern */
extern s32 *data_02097640;
extern u16 data_02099ac8;

s32 func_02028c54(void *arg0) {
    s32 var_r0;

    if (func_0201582c(data_02099ac8) != 0) {
        *data_02097640 = 4;
        return -1;
    }
    func_02028cb4(M2C_FIELD(arg0, u8 *, 0x18));
    if (func_02026b1c(arg0) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return 0 - var_r0;
}
