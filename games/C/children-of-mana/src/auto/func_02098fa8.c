/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020988ec(void *);                      /* extern */
extern M2C_UNK data_02103b34;

void *func_02098fa8(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02103b34;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0xFC);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x38)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0xFC) = NULL;
    }
    func_020988ec(arg0);
    return arg0;
}
