#include "m2c.h"

M2C_UNK func_020857c0();                            /* extern */
M2C_UNK func_0208838c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e02a0;

s32 func_0203b7e8(void *arg0, u32 arg1) {
    if (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 4)) {
        func_0208838c(&data_020e02a0);
        func_020857c0();
    }
    return M2C_FIELD(arg0, s32 *, 0) + (arg1 * 0x10);
}
