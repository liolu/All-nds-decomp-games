#include "m2c.h"

void func_020b442c(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x84) = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), M2C_UNK(**)(void *, M2C_UNK), 4)(arg0 + 0x28, 0);
}
