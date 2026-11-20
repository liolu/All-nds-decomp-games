#include "m2c.h"

M2C_UNK func_0204a5f0();                            /* extern */
s32 func_020cab60();                                /* extern */
extern u8 data_02158048;

void func_0203a4f4(void) {
    func_0204a5f0();
    if (func_020cab60() == 0) {
        return;
    }
    data_02158048 += 1;
}
