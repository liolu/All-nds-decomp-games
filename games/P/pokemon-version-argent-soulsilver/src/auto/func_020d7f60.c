#include "m2c.h"

M2C_UNK func_020d8590();                            /* extern */
extern s32 data_021e3658;

void func_020d7f60(s32 arg0) {
    if (data_021e3658 != 0) {
        return;
    }
    data_021e3658 = 1;
    func_020d8590(arg0);
}
