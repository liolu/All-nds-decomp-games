/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207b040(void *);                      /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bf998;

void *func_02026f94(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r0_5;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf998;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x18);
    if (temp_r0_4 != NULL) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    temp_r0_5 = M2C_FIELD(arg0, void ***, 0x1C);
    if (temp_r0_5 != NULL) {
        M2C_FIELD(*temp_r0_5, M2C_UNK(**)(), 4)(temp_r0_5);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    func_0207b040(arg0);
    return arg0;
}
