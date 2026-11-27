/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0200d518(void *);                      /* extern */
M2C_UNK func_02033554(M2C_UNK);                     /* extern */
extern M2C_UNK data_02115d54;

void *func_0202cf88(void *arg0) {
    s32 var_r5;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02115d54;
    if (M2C_FIELD(arg0, u8 *, 0x34) != 0) {
        func_02033554(1);
    }
    func_02033554(0);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x44);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x48);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    var_r5 = 0;
    do {
        temp_r0_3 = M2C_FIELD((arg0 + (var_r5 * 4)), void ***, 0x4C);
        if (temp_r0_3 != NULL) {
            M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
        }
        var_r5 += 1;
    } while (var_r5 < 0x14);
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0xA4);
    if ((temp_r0_4 != NULL) && (temp_r0_4 != NULL)) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    func_0200d518(arg0);
    return arg0;
}
