#include "engine.h"
#include "m2c.h"

M2C_UNK func_0205d4a4(M2C_UNK);

s32 func_0204c530(s32 arg0) {
    s32 *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0x7B058A0B) {
        return 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 **, 0x24);
    if (temp_r0 == NULL) {
        return 1;
    }
    if (*temp_r0 == 0) {
        return 1;
    }
    return func_0205d4a4((s32) temp_r0);
}
