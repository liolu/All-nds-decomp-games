/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020bf31c(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, void **, 0) == NULL) {
        M2C_FIELD(arg0, void **, 0) = arg1;
        M2C_FIELD(arg0, void **, 4) = arg1;
    } else {
        M2C_FIELD(arg1, void **, 0xDC)                        = (void *) M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xE0) = arg1;
        M2C_FIELD(arg0, void **, 4)                           = arg1;
    }
    M2C_FIELD(arg1, void **, 0xE4) = arg0;
    M2C_FIELD(arg0, s32 *, 8)      = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}
