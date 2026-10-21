#include "engine.h"
#include "m2c.h"

M2C_UNK func_0209c938(M2C_UNK);

s32 func_0209ad78(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0209c938(M2C_FIELD(arg0, u8 *, 3) * 4);
    return temp_r4 + func_0209c938((s32) M2C_FIELD(arg0, u16 *, 0));
}
