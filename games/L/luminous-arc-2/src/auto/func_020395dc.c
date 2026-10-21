#include "m2c.h"

M2C_UNK func_02041bcc();                            /* extern */
M2C_UNK func_0204a5f0();                            /* extern */
extern u8 data_02158048;

void func_020395dc(void) {
    func_02041bcc();
    func_0204a5f0();
    data_02158048 += 1;
}
