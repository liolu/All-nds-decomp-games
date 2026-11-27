/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_0207b218(s32);                         /* extern */
M2C_UNK func_020a02fc(void *);                      /* extern */
extern M2C_UNK data_0210990c;

void *func_020c3f5c(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210990c;
    temp_r4                        = M2C_FIELD(arg0, s32 *, 0xA0);
    if (temp_r4 != 0) {
        if (temp_r4 != 0) {
            func_0207b218(temp_r4);
            func_0200f2c4(temp_r4);
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    }
    func_020a02fc(arg0);
    return arg0;
}
