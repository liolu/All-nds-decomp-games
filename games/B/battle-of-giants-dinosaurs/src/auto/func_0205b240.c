#include "m2c.h"

M2C_UNK func_02000e80(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0205b228(void *);                      /* extern */

void *func_0205b240(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r1 != 0) {
        func_02000e80(4, temp_r1, 0, 0);
    }
    func_0205b228(arg0);
    return arg0;
}
