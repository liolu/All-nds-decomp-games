#include "m2c.h"

M2C_UNK func_02000b9c(s32);                         /* extern */
s32 func_0209a674();                                /* extern */
M2C_UNK func_0209a6b4();                            /* extern */
extern s32 data_0211d7ec;

s32 func_0209a638(s32 arg0) {
    func_02000b9c(0x2000C2C);
    if (data_0211d7ec != 0) {
        return 0;
    }
    data_0211d7ec = arg0;
    func_0209a6b4();
    return func_0209a674();
}
