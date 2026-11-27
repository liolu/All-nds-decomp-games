#include "m2c.h"

M2C_UNK func_02067c94();                            /* extern */
extern u16 data_021845f4;

void func_0206738c(s32 arg0) {
    data_021845f4 |= arg0;
    func_02067c94(arg0);
}
