#include "m2c.h"

M2C_UNK func_02041d4c();                            /* extern */
M2C_UNK func_02047fd8();                            /* extern */
M2C_UNK func_0204a3d4();                            /* extern */
M2C_UNK func_0204a3fc();                            /* extern */
extern u8 data_02158048;

void func_0203a36c(void) {
    func_0204a3d4();
    func_02047fd8();
    func_02041d4c();
    func_0204a3fc();
    data_02158048 += 1;
}
