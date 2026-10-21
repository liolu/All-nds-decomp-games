/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02045a78(void *arg0, void *arg1) {
    void *temp_r2;

    M2C_FIELD(arg1, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    temp_r2                     = M2C_FIELD(arg1, void **, 4);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 8) = arg1;
    }
    M2C_FIELD(arg1, s32 *, 8)   = 0;
    M2C_FIELD(arg0, void **, 4) = arg1;
}
