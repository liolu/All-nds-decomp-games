/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_0207b218(s32);                         /* extern */
M2C_UNK func_02098fa8(void *);                      /* extern */
extern M2C_UNK data_02103fd4;

void *func_02099f10(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02103fd4;
    temp_r4                        = M2C_FIELD(arg0, s32 *, 0x104);
    if (temp_r4 != 0) {
        if (temp_r4 != 0) {
            func_0207b218(temp_r4);
            func_0200f2c4(temp_r4);
        }
        M2C_FIELD(arg0, s32 *, 0x104) = 0;
    }
    func_02098fa8(arg0);
    return arg0;
}
