/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201fac0(void *);                      /* extern */
M2C_UNK func_02039cd0(void *);                      /* extern */
extern M2C_UNK data_02123e10;

void *func_02031e6c(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02123e10;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x590);
    if ((temp_r0 != NULL) && (temp_r0 != NULL)) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x574);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x574) = NULL;
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x578);
    if (temp_r0_3 != NULL) {
        if (temp_r0_3 != NULL) {
            M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
        }
        M2C_FIELD(arg0, void ***, 0x578) = NULL;
    }
    if (M2C_FIELD(arg0, s32 *, 0x54C) != 0) {
        func_0201fac0(arg0);
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x3E8);
    if (temp_r0_4 != NULL) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    func_02039cd0(arg0);
    return arg0;
}
