#include "engine.h"
#include "m2c.h"

void func_020c116c(M2C_UNK);
void func_020c52ec(M2C_UNK);

extern M2C_UNK data_020f4950;

void func_020c1148(void) {
    func_020c52ec(1);
    M2C_FIELD(&data_020f4950, s32 *, 0xC) = 1;
    func_020c116c(1);
}
