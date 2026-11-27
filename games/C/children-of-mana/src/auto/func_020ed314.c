/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(void *);                      /* extern */
M2C_UNK func_020eb994();                            /* extern */
extern M2C_UNK data_020fab68;
extern M2C_UNK data_0210ee88;

void *func_020ed314(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r0_5;
    void **temp_r0_6;
    void **temp_r0_7;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210ee88;
    func_020eb994();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x4C);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x4C) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x5C);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x5C) = NULL;
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x48);
    if (temp_r0_3 != NULL) {
        if (temp_r0_3 != NULL) {
            M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
        }
        M2C_FIELD(arg0, void ***, 0x48) = NULL;
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x50);
    if (temp_r0_4 != NULL) {
        if (temp_r0_4 != NULL) {
            M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
        }
        M2C_FIELD(arg0, void ***, 0x50) = NULL;
    }
    temp_r0_5 = M2C_FIELD(arg0, void ***, 0x58);
    if (temp_r0_5 != NULL) {
        if (temp_r0_5 != NULL) {
            M2C_FIELD(*temp_r0_5, M2C_UNK(**)(), 0x80)(temp_r0_5);
        }
        M2C_FIELD(arg0, void ***, 0x58) = NULL;
    }
    temp_r0_6 = M2C_FIELD(arg0, void ***, 0x54);
    if (temp_r0_6 != NULL) {
        if (temp_r0_6 != NULL) {
            M2C_FIELD(*temp_r0_6, M2C_UNK(**)(), 4)(temp_r0_6);
        }
        M2C_FIELD(arg0, void ***, 0x54) = NULL;
    }
    temp_r0_7 = M2C_FIELD(arg0, void ***, 0x60);
    if (temp_r0_7 != NULL) {
        if (temp_r0_7 != NULL) {
            M2C_FIELD(*temp_r0_7, M2C_UNK(**)(), 4)(temp_r0_7);
        }
        M2C_FIELD(arg0, void ***, 0x60) = NULL;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fab68;
    func_0200f2c4(arg0);
    return arg0;
}
