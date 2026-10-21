#include "m2c.h"

s32 func_02029b44();                                /* extern */
M2C_UNK func_0204a5f0();                            /* extern */
extern u8 data_02158048;

void func_02039648(void) {
    func_0204a5f0();
    if (func_02029b44() == 0) {
        return;
    }
    data_02158048 += 1;
}
