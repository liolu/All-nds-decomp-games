#include "m2c.h"

M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_02061c34(s32);                         /* extern */
M2C_UNK func_020621c0(s32, void *, s32);            /* extern */
extern M2C_UNK data_020cdd44;

void *func_020741c8(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cdd44;
    func_020621c0(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x1228, 0x122);
    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r4 != 0) {
        func_02061c34(temp_r4);
        func_0203491c(temp_r4);
    }
    return arg0;
}
