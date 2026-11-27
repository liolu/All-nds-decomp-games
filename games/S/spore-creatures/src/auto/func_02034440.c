#include "m2c.h"

M2C_UNK func_02034474();                            /* extern */
M2C_UNK func_0206a234(M2C_UNK);                     /* extern */

void func_02034440(void *arg0, s32 arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0xA8);
    if ((u32) M2C_FIELD(temp_r2, u8 *, 0) < (u32) M2C_FIELD(temp_r2, u8 *, 1)) {
        func_02034474(arg0, arg1);
        func_0206a234(0x10);
        return;
    }
    func_0206a234(0x11);
}
