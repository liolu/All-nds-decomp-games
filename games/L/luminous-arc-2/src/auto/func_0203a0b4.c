#include "m2c.h"

M2C_UNK func_02048418();                            /* extern */
M2C_UNK func_020ca99c();                            /* extern */
extern u8 data_02158048;

void func_0203a0b4(void) {
    func_020ca99c();
    func_02048418();
    data_02158048 += 1;
}
