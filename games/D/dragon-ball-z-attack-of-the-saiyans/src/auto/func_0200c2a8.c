#include "m2c.h"

M2C_UNK func_0200c73c();                            /* extern */
M2C_UNK func_0200d0f8();                            /* extern */
M2C_UNK func_0200e0c0();                            /* extern */
M2C_UNK func_0200e344();                            /* extern */
M2C_UNK func_0200f3c8();                            /* extern */
M2C_UNK func_020672b0();                            /* extern */
M2C_UNK func_0208aed4();                            /* extern */
extern M2C_UNK data_020af1e4;

void func_0200c2a8(void) {
    func_0200c73c();
    func_0200d0f8();
    func_0200e0c0();
    func_0200e344();
    func_0200f3c8();
    func_020672b0();
    M2C_FIELD(&data_020af1e4, s32 *, 4) = -1;
    M2C_FIELD(&data_020af1e4, s8 *, 0)  = 1;
    func_0208aed4();
}
