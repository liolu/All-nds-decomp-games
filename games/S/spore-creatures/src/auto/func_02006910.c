#include "m2c.h"

M2C_UNK func_020068dc(M2C_UNK, void *, M2C_UNK, u8); /* extern */

void func_02006910(M2C_UNK arg0, void **arg1) {
    void *temp_r1;

    temp_r1 = *arg1;
    func_020068dc(arg0, temp_r1, 0, M2C_FIELD(temp_r1, u8 *, 3));
}
