#include "m2c.h"

M2C_UNK func_0207ec04(M2C_UNK, void *, void *);     /* extern */

void func_0200fe9c(void *arg0, M2C_UNK arg1) {
    void *temp_r1;

    temp_r1 = arg0 + (M2C_FIELD(arg0, s32 *, 0x780) * 0x30);
    func_0207ec04(arg1, temp_r1, temp_r1);
}
