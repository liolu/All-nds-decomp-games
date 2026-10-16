#include "m2c.h"

M2C_UNK func_0200a1e0();                            /* extern */
extern s32 data_020d2bd8;

void func_02009bd0(s32 arg0) {
    if (data_020d2bd8 != 0) {
        return;
    }
    data_020d2bd8 = 1;
    func_0200a1e0(arg0);
}
