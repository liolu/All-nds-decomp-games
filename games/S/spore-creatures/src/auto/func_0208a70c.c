#include "m2c.h"

void func_0208a70c(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xC) == 0) || (M2C_FIELD(arg0, s32 *, 8) != 3)) {
        M2C_FIELD(arg0, s32 *, 8) = 2;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0xC)(arg0);
}
