#include "m2c.h"

M2C_UNK func_0208dc90(void *, s32);                 /* extern */
M2C_UNK func_0208dcac(void *, s32);                 /* extern */
extern M2C_UNK data_020e6d9c;

void func_0208cc24(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        func_0208dc90((M2C_UNK *) ((s8 *) &data_020e6d9c + (M2C_FIELD(arg0, s32 *, 0) << 5)),
                      0x100 << M2C_FIELD(arg0, s32 *, 4));
    } else {
        func_0208dcac((M2C_UNK *) ((s8 *) &data_020e6d9c + (M2C_FIELD(arg0, s32 *, 0) << 5)),
                      0x100 << M2C_FIELD(arg0, s32 *, 4));
    }
}
