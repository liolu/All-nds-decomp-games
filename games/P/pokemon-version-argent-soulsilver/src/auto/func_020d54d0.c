#include "m2c.h"

M2C_UNK func_020d2600(M2C_UNK *);                   /* extern */
M2C_UNK func_020d5530();                            /* extern */
M2C_UNK func_020d5c40();                            /* extern */
extern s32 data_021e1a60;
extern M2C_UNK data_021e1a64;

void func_020d54d0(void) {
    if (data_021e1a60 != 0) {
        return;
    }
    data_021e1a60 = 1;
    func_020d2600(&data_021e1a64);
    func_020d5530();
    func_020d5c40();
}
