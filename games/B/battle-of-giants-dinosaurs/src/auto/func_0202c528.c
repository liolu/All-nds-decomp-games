#include "engine.h"
#include "m2c.h"

void func_0202c54c(M2C_UNK);
void func_020303bc(M2C_UNK);

extern M2C_UNK data_020c201c;

void func_0202c528(void) {
    func_020303bc(1);
    M2C_FIELD(&data_020c201c, s32 *, 0xC) = 1;
    func_0202c54c(1);
}
