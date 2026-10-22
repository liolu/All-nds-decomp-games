/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201fac0();                            /* extern */
M2C_UNK func_02039cd0(void *);                      /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_020ffde8;
extern M2C_UNK data_02106ed4;

void *func_02009cdc(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02106ed4;
    func_0201fac0();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x384);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x3D4);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffde8;
    func_02039cd0(arg0);
    func_02059f70(arg0);
    return arg0;
}
