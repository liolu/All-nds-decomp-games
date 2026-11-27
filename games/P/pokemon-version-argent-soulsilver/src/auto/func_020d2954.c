#include "m2c.h"

s32 func_020d2aec(M2C_UNK);                         /* extern */
s32 func_020d2bd0(M2C_UNK);                         /* extern */
M2C_UNK func_020d2c78(M2C_UNK, s32);                /* extern */
M2C_UNK func_020d2c8c(M2C_UNK, s32);                /* extern */
extern s32 data_021e1918;

void func_020d2954(void) {
    if (data_021e1918 != 0) {
        return;
    }
    data_021e1918 = 1;
    func_020d2c78(0, func_020d2aec(0));
    func_020d2c8c(0, func_020d2bd0(0));
    func_020d2c8c(2, 0);
    func_020d2c78(2, 0);
    func_020d2c78(3, func_020d2aec(3));
    func_020d2c8c(3, func_020d2bd0(3));
    func_020d2c78(4, func_020d2aec(4));
    func_020d2c8c(4, func_020d2bd0(4));
    func_020d2c78(5, func_020d2aec(5));
    func_020d2c8c(5, func_020d2bd0(5));
    func_020d2c78(6, func_020d2aec(6));
    func_020d2c8c(6, func_020d2bd0(6));
}
