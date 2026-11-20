/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204d1b0(void *);                      /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_021262b0;

void *func_0204ad04(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021262b0;
    temp_r4                        = M2C_FIELD(arg0, void **, 4);
    if (temp_r4 != NULL) {
        func_0204d1b0(temp_r4);
        func_02059f70(temp_r4);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    func_02059f70(arg0);
    return arg0;
}
