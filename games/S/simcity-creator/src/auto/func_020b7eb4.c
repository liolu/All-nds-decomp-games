#include "m2c.h"

void *func_020b4b2c(s32, M2C_UNK);                  /* extern */

u16 func_020b7eb4(void *arg0) {
    u16 var_r2;
    void *temp_r0;
    void *temp_r1;

    temp_r0 = func_020b4b2c(arg0 + 4, 0x1A);
    var_r2  = 0;
    if (M2C_FIELD(temp_r0, u16 *, 0) == 1) {
        temp_r1 = M2C_FIELD(arg0, void **, 0xB40);
        if (temp_r1 != NULL) {
            var_r2 = M2C_FIELD(temp_r0, u16 *, 2) + M2C_FIELD(temp_r1, u8 *, 0x5A57E);
        }
    }
    return var_r2;
}
