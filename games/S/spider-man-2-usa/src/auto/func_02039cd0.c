/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d60c(void *);                      /* extern */
M2C_UNK func_0204d1b0(s32);                         /* extern */
M2C_UNK func_02059f70(s32);                         /* extern */
extern M2C_UNK data_02124358;

void *func_02039cd0(void *arg0) {
    s32 temp_r4;
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02124358;
    temp_r4                        = M2C_FIELD(arg0, s32 *, 0x2F4);
    if (temp_r4 != 0) {
        func_0204d1b0(temp_r4);
        func_02059f70(temp_r4);
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x364);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0200d60c(arg0);
    return arg0;
}
