#include "m2c.h"

M2C_UNK func_0202e138(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020ac26c(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020de9cc;
extern M2C_UNK data_020de9ea;

void func_0202f0d0(M2C_UNK arg0, s32 arg1) {
    if (arg1 != 1) {
        return;
    }
    func_0202e138(&data_020de9cc, arg0, 1);
    func_020ac26c(arg0, &data_020de9ea, 0x80);
}
