#include "m2c.h"

M2C_UNK func_02005c10();                            /* extern */
M2C_UNK func_02067944();                            /* extern */
extern s32 data_027e05e8;

void func_0202efa4(s32 arg0) {
    if (arg0 != 0) {
        func_02067944();
    }
    data_027e05e8 |= 0x800;
    func_02005c10();
    data_027e05e8 &= ~0x800;
}
