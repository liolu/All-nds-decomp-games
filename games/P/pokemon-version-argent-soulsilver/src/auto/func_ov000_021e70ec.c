/* compiler: 1.2/sp3 -thumb */
#include "engine.h"
#include "m2c.h"

extern void *data_ov000_0221a6a0;

void func_ov000_021e70ec(s32 arg0) {
    M2C_FIELD(data_ov000_0221a6a0, s16 *, 0x10D6) = (s16) arg0;
}
