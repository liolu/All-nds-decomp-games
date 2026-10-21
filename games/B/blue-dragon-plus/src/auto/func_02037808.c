#include "m2c.h"

s32 func_020379a0(M2C_UNK);                         /* extern */
s32 func_02037a84(M2C_UNK);                         /* extern */
M2C_UNK func_02037b2c(M2C_UNK, s32);                /* extern */
M2C_UNK func_02037b40(M2C_UNK, s32);                /* extern */
extern s32 data_0215dd38;

void func_02037808(void) {
    if (data_0215dd38 != 0) {
        return;
    }
    data_0215dd38 = 1;
    func_02037b2c(0, func_020379a0(0));
    func_02037b40(0, func_02037a84(0));
    func_02037b40(2, 0);
    func_02037b2c(2, 0);
    func_02037b2c(3, func_020379a0(3));
    func_02037b40(3, func_02037a84(3));
    func_02037b2c(4, func_020379a0(4));
    func_02037b40(4, func_02037a84(4));
    func_02037b2c(5, func_020379a0(5));
    func_02037b40(5, func_02037a84(5));
    func_02037b2c(6, func_020379a0(6));
    func_02037b40(6, func_02037a84(6));
}
