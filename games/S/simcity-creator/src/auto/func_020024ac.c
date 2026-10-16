#include "engine.h"
#include "m2c.h"

void func_02002440(M2C_UNK);

extern M2C_UNK data_020d0b84;

void func_020024ac(void) {
    func_02002440((s32) M2C_FIELD(&data_020d0b84, u16 *, 0x16));
}
