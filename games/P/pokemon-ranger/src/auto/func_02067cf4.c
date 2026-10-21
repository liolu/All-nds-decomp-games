/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02067cf4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 0) = arg1;
    if (arg1 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
