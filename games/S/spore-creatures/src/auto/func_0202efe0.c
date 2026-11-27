#include "m2c.h"

M2C_UNK func_02005d30(M2C_UNK);                     /* extern */
M2C_UNK func_02067944();                            /* extern */
extern s32 data_027e05e8;

void func_0202efe0(M2C_UNK arg0, s32 arg1) {
    if (arg1 != 0) {
        func_02067944();
    }
    data_027e05e8 |= 0x800;
    func_02005d30(arg0);
    data_027e05e8 &= ~0x800;
}
