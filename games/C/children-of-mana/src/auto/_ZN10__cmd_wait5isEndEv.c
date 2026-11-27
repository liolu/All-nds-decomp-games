#include "m2c.h"

s32 _ZN10__cmd_wait5isEndEv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) >= (s32) M2C_FIELD(arg0, s32 *, 8)) {
        return 1;
    }
    return 0;
}
