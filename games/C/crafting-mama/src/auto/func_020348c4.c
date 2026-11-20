#include "m2c.h"

s32 func_020348c4(void *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return M2C_FIELD(arg0, s32 *, 0x24);
}
