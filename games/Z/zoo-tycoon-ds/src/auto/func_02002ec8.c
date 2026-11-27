#include "engine.h"
#include "m2c.h"

M2C_UNK func_020041a0(void);

extern s8 data_0217e300;

s32 func_02002ec8(void) {
    data_0217e300 = 0;
    return func_020041a0();
}
