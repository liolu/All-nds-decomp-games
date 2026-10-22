/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d60c(void *);                      /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_02124120;

void *func_020362ec(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02124120;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x310);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0200d60c(arg0);
    func_02059f70(arg0);
    return arg0;
}
