/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_021241e0;

void *func_020367b8(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021241e0;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x20);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    func_02059f70(arg0);
    return arg0;
}
