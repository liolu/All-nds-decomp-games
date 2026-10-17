/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0207b068(M2C_UNK);                       /* extern */

void func_02002474(void *arg0, s32 arg1, s8 arg2) {
    void *temp_r0;

    if (arg1 == 0) {
        return;
    }
    temp_r0                                               = func_0207b068(0x10);
    M2C_FIELD(temp_r0, s32 *, 0)                          = arg1;
    M2C_FIELD(temp_r0, s32 *, 4)                          = (s32) (arg0 + 4);
    M2C_FIELD(temp_r0, void **, 8)                        = (void *) M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(temp_r0, s8 *, 0xC)                         = arg2;
    M2C_FIELD(M2C_FIELD(temp_r0, void **, 8), void **, 4) = temp_r0;
    M2C_FIELD(arg0, void **, 0xC)                         = temp_r0;
}
