/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(void *);                      /* extern */
M2C_UNK func_0207b218(void *);                      /* extern */
M2C_UNK func_020a02fc(void *);                      /* extern */
extern M2C_UNK data_0210990c;

void *func_020c3ef8(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210990c;
    temp_r4                        = M2C_FIELD(arg0, void **, 0xA0);
    if (temp_r4 != NULL) {
        if (temp_r4 != NULL) {
            func_0207b218(temp_r4);
            func_0200f2c4(temp_r4);
        }
        M2C_FIELD(arg0, void **, 0xA0) = NULL;
    }
    func_020a02fc(arg0);
    func_0200f2c4(arg0);
    return arg0;
}
