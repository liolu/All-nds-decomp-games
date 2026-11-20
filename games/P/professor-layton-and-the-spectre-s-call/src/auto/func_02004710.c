#include "engine.h"
#include "m2c.h"

extern void *data_02032458;

s32 func_02004710(s32 arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(data_02032458, void **, 0x90);
    if ((u32) arg0 >= (u32) M2C_FIELD(temp_r2, u32 *, 8)) {
        return 0;
    }
    return M2C_FIELD((temp_r2 + (arg0 * 0x10)), s32 *, 0x14);
}
