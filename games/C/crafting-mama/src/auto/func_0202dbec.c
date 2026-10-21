#include "m2c.h"

extern void *data_020a7440;

s32 func_0202dbec(void) {
    if (data_020a7440 == NULL) {
        return 0;
    }
    return M2C_FIELD(data_020a7440, s32 *, 0x84);
}
