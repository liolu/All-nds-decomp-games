/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02037f80(void *);                      /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02123f44;

void *func_020336e8(void *arg0) {
    void **temp_r0;
    void *temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02123f44;
    temp_r4                        = M2C_FIELD(arg0, void **, 0x30);
    if ((temp_r4 != NULL) && (temp_r4 != NULL)) {
        func_02037f80(temp_r4);
        func_02059f70(temp_r4);
    }
    M2C_FIELD(arg0, void **, 0x30) = NULL;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x2C);
    if ((temp_r0 != NULL) && (temp_r0 != NULL)) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    func_02059f70(arg0);
    return arg0;
}
