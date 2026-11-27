/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0201fac0();                            /* extern */
M2C_UNK func_02039cd0(void *);                      /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_020ffde8;
extern M2C_UNK data_020fff64;
extern M2C_UNK data_021605c4;

void *func_0200497c(void *arg0) {
    s32 var_r5;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fff64;
    func_0201fac0();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x3E0);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    var_r5 = 0;
    do {
        temp_r0_2 = M2C_FIELD((arg0 + (var_r5 * 4)), void ***, 0x3B0);
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
        }
        var_r5 += 1;
    } while (var_r5 < 4);
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x37C);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    M2C_FIELD(&data_021605c4, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0)         = &data_020ffde8;
    func_02039cd0(arg0);
    func_02059f70(arg0);
    return arg0;
}
