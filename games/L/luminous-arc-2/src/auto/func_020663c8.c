#include "m2c.h"

M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020cab60();                                /* extern */
M2C_UNK func_020cddec(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0210e710;
extern M2C_UNK data_0210e738;
extern M2C_UNK data_0216ce68;

void func_020663c8(void) {
    if (func_020cab60() != 3) {
        return;
    }
    func_020caa3c(3, 0, 0x10);
    func_020cddec(3, &data_0210e710);
    func_020cddec(7, &data_0210e738);
    M2C_FIELD(&data_0216ce68, s8 *, 0xBA5) = 1;
}
