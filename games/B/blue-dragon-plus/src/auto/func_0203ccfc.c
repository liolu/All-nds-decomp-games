#include "m2c.h"

M2C_UNK func_0203d360();                            /* extern */
extern s32 data_0215fa78;

void func_0203ccfc(s32 arg0) {
    if (data_0215fa78 != 0) {
        return;
    }
    data_0215fa78 = 1;
    func_0203d360(arg0);
}
