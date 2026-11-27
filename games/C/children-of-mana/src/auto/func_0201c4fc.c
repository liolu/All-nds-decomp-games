#include "m2c.h"

u32 func_0201c4fc(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) > 0) {
        return 0U;
    }
    return (u32) (M2C_FIELD(arg0, u8 *, 0x24) << 0x19) >> 0x1F;
}
