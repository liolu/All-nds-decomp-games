#include "m2c.h"

M2C_UNK func_02000b9c(s32);                         /* extern */
s32 func_020a0840();                                /* extern */
M2C_UNK func_020a0880();                            /* extern */
extern s32 data_02110648;

s32 func_020a0804(s32 arg0) {
    func_02000b9c(0x2000BFC);
    if (data_02110648 != 0) {
        return 0;
    }
    data_02110648 = arg0;
    func_020a0880();
    return func_020a0840();
}
