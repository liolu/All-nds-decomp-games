#include "m2c.h"

M2C_UNK func_02073fa0();                            /* extern */
extern s32 data_020f42b8;

s32 *func_02073ea0(s32 *arg0) {
    *arg0 = 0;
    if (data_020f42b8 == 0) {
        func_02073fa0(arg0);
    }
    return arg0;
}
