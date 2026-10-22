#include "m2c.h"

M2C_UNK func_0208c038(M2C_UNK, s32);                /* extern */

void func_02089340(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    *M2C_FIELD(arg0, s8 **, 0)   = 0x19;
    func_0208c038(arg1, M2C_FIELD(arg0, s32 *, 4));
}
