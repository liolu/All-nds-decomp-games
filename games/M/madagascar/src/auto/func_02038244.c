/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02037ef4();                            /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020c3628;

void *func_02038244(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c3628;
    func_02037ef4();
    temp_r0 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    return arg0;
}
