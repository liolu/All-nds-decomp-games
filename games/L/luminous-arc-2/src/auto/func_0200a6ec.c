#include "m2c.h"

M2C_UNK func_0200ad0c();                            /* extern */
extern s32 data_02149878;

void func_0200a6ec(s32 arg0) {
    if (data_02149878 != 0) {
        return;
    }
    data_02149878 = 1;
    func_0200ad0c(arg0);
}
