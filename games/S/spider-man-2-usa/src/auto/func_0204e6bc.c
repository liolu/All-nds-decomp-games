/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201fac0();                            /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_0212719c;

void *func_0204e6bc(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212719c;
    func_0201fac0();
    temp_r0 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 4) = NULL;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    func_02059f70(arg0);
    return arg0;
}
