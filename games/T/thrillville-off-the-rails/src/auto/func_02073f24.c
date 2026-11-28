#include "m2c.h"

M2C_UNK func_02073fec(s32 *, s32);                  /* extern */
M2C_UNK func_020741ac();                            /* extern */
extern s32 data_020f42b8;

s32 *func_02073f24(s32 *arg0, s32 *arg1) {
    if (arg1 == arg0) {
        return arg0;
    }
    if (*arg0 != 0) {
        func_020741ac(arg0);
    }
    func_02073fec(arg0, data_020f42b8 + *arg1 + 4);
    return arg0;
}
