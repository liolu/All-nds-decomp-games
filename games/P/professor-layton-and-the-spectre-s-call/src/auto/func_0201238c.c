#include "m2c.h"

M2C_UNK func_020121bc();                            /* extern */
extern M2C_UNK data_020348d0;

void func_0201238c(s32 arg0) {
    M2C_FIELD(M2C_FIELD(&data_020348d0, void **, 0x10), s32 *, 0x1320) = 1;
    func_020121bc(arg0);
}
