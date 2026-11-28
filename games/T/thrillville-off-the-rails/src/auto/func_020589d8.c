#include "m2c.h"

M2C_UNK func_020857c0();                            /* extern */
M2C_UNK func_0208838c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e147c;

s32 func_020589d8(void *arg0, s32 *arg1) {
    u32 temp_r4;

    temp_r4 = *arg1 + 1;
    if (temp_r4 >= (u32) M2C_FIELD(arg0, u32 *, 0xC)) {
        func_0208838c(&data_020e147c);
        func_020857c0();
    }
    return M2C_FIELD(arg0, s32 *, 8) + (temp_r4 * 0x10);
}
