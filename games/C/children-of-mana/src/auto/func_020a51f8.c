/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e0f8();                            /* extern */
extern M2C_UNK data_021062c8;

void *func_020a51f8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021062c8;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0200e0f8();
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    return arg0;
}
