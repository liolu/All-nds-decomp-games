#include "m2c.h"

M2C_UNK func_02040e18();                            /* extern */
extern u16 data_020afe28;

void func_020406dc(s32 arg0) {
    data_020afe28 |= arg0;
    func_02040e18(arg0);
}
