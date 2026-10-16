#include "m2c.h"

M2C_UNK func_020badbc();                            /* extern */
extern s32 data_020f3918;

void func_020ba764(s32 arg0) {
    if (data_020f3918 != 0) {
        return;
    }
    data_020f3918 = 1;
    func_020badbc(arg0);
}
