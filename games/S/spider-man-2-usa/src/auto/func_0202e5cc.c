/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_0211ca5c;

void *func_0202e5cc(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211ca5c;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x18);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    return arg0;
}
