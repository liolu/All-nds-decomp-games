/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744();                            /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bd2b4;
extern M2C_UNK data_020bdb40;

void *func_0200f41c(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bdb40;
    func_02002744();
    temp_r0 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd2b4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    return arg0;
}
