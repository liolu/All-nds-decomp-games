/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02039cd0(void *);                      /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_02106b14;

void *func_020061fc(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02106b14;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x374);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_02039cd0(arg0);
    func_02059f70(arg0);
    return arg0;
}
