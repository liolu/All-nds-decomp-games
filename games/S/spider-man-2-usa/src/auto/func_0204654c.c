/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0204bc50(s32);                         /* extern */
M2C_UNK func_02059f70(s32);                         /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_021248d4;
extern s32 data_02160594;

void *func_0204654c(void *arg0) {
    s32 temp_r5;
    s32 var_r5;
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021248d4;
    temp_r5                        = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r5 != 0) {
        func_0204bc50(temp_r5);
        func_02059f70(temp_r5);
    }
    var_r5 = 0;
    do {
        temp_r0 = M2C_FIELD((arg0 + (var_r5 * 4)), void ***, 8);
        if ((temp_r0 != NULL) && (M2C_FIELD((arg0 + var_r5), u8 *, 0x14) != 0) && (temp_r0 != NULL)) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        var_r5 += 1;
    } while (var_r5 < 3);
    data_02160594                  = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    return arg0;
}
