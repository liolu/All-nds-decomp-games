#include "m2c.h"

M2C_UNK func_0200ac4c();                            /* extern */
M2C_UNK func_0200c828(M2C_UNK);                            /* extern */
extern s32 data_02093ec4;

void func_0200c9cc(M2C_UNK arg0) {
    if (data_02093ec4 != 0) {
        return;
    }
    data_02093ec4 = 1;
    func_0200c828(arg0);
    func_0200ac4c();
}
