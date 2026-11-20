/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201fac0(void *);                      /* extern */
M2C_UNK func_0202ad90(void *);                      /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_02115998;

void *func_0202a7d8(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02115998;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x3CC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x3E4);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_0201fac0(arg0);
    func_0202ad90(arg0);
    func_02059f70(arg0);
    return arg0;
}
