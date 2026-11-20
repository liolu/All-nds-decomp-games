/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bcea8;

void *func_020033e8(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcea8;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x20);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    return arg0;
}
