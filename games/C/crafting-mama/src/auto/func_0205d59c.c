#include "m2c.h"

M2C_UNK func_0205e474(void *);                      /* extern */
M2C_UNK func_0205e4e8();                            /* extern */

void func_0205d59c(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r1 == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
            return;
        }
        func_0205e474(arg0 + 0x2C);
        return;
    }
    if (temp_r1 == 0) {
        return;
    }
    func_0205e4e8();
}
