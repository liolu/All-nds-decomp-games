#include "m2c.h"

M2C_UNK func_0208dc90(void *, s32);                 /* extern */
s32 func_0209d5e4();                                /* extern */
extern M2C_UNK data_020e6d9c;

void func_0209d528(void *arg0) {
    if (func_0209d5e4() == 0) {
        return;
    }
    func_0208dc90((M2C_UNK *) ((s8 *) &data_020e6d9c + (M2C_FIELD(arg0, s32 *, 0) << 5)), 0x2000 << M2C_FIELD(arg0, s32 *, 4));
}
