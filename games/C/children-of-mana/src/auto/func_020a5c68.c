/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_0209d4ac(void *);                      /* extern */
M2C_UNK func_020cf4b8(s32);                         /* extern */
extern M2C_UNK data_02106380;

void *func_020a5c68(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02106380;
    temp_r4                        = M2C_FIELD(arg0, s32 *, 0x19C);
    if (temp_r4 != 0) {
        if (temp_r4 != 0) {
            func_020cf4b8(temp_r4);
            func_0200f2c4(temp_r4);
        }
        M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    }
    func_0209d4ac(arg0);
    return arg0;
}
