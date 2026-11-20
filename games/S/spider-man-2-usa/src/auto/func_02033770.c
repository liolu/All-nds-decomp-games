/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02037f80(s32);                         /* extern */
M2C_UNK func_02059f70(s32);                         /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02123f44;

void *func_02033770(void *arg0) {
    s32 temp_r4;
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02123f44;
    temp_r4                        = M2C_FIELD(arg0, s32 *, 0x30);
    if ((temp_r4 != 0) && (temp_r4 != 0)) {
        func_02037f80(temp_r4);
        func_02059f70(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    temp_r0                      = M2C_FIELD(arg0, void ***, 0x2C);
    if ((temp_r0 != NULL) && (temp_r0 != NULL)) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    return arg0;
}
