#include "m2c.h"

M2C_UNK func_02073fec(s32, s32);                    /* extern */
extern s32 data_020f42b8;

s32 func_02073ee4(s32 arg0, s32 *arg1) {
    func_02073fec(arg0, data_020f42b8 + *arg1 + 4);
    return arg0;
}
