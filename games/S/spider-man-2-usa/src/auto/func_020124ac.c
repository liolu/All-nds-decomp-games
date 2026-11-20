/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffa6b8();                            /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_0210bca8;

void *func_020124ac(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210bca8;
    func_01ffa6b8();
    temp_r0 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    func_02059f70(arg0);
    return arg0;
}
