#include "m2c.h"

M2C_UNK func_0206a234(M2C_UNK);                     /* extern */
M2C_UNK func_0209690c(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0206ba0c(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    if (temp_r0 != 0) {
        func_0209690c(temp_r0, 0, 1);
    }
    func_0206a234(2);
    M2C_FIELD(arg0, s8 *, 0x8D) = 1;
}
