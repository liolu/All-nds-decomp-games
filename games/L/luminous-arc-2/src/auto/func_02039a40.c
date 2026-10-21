#include "m2c.h"

M2C_UNK func_02041bcc();                            /* extern */
s32 func_020486cc();                                /* extern */
M2C_UNK func_0204a5f0();                            /* extern */
extern u8 data_02158048;

void func_02039a40(void) {
    func_02041bcc();
    func_0204a5f0();
    if (func_020486cc() == 0) {
        return;
    }
    data_02158048 += 1;
}
