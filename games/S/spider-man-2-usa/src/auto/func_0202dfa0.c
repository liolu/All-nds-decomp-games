/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201fac0();                            /* extern */
M2C_UNK func_0202d7d8(void *);                      /* extern */
M2C_UNK func_02036774(void *);                      /* extern */
extern M2C_UNK data_0211ca1c;

void *func_0202dfa0(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211ca1c;
    func_0201fac0();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x88);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x90);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x9C);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    func_0202d7d8(arg0);
    func_02036774(arg0);
    return arg0;
}
