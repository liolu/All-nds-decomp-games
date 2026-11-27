/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(void *);                      /* extern */
M2C_UNK func_0207b218(void *);                      /* extern */
M2C_UNK func_02098fa8(void *);                      /* extern */
extern M2C_UNK data_02103fd4;

void *func_02099eac(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02103fd4;
    temp_r4                        = M2C_FIELD(arg0, void **, 0x104);
    if (temp_r4 != NULL) {
        if (temp_r4 != NULL) {
            func_0207b218(temp_r4);
            func_0200f2c4(temp_r4);
        }
        M2C_FIELD(arg0, void **, 0x104) = NULL;
    }
    func_02098fa8(arg0);
    func_0200f2c4(arg0);
    return arg0;
}
