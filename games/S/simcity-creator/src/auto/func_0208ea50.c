#include "m2c.h"

s32 func_0208ea50(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) > (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return 1;
}
