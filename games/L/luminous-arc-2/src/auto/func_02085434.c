#include "m2c.h"

s32 func_020856b8();                                /* extern */
extern void *data_02170354;

s32 func_02085434(s32 arg0) {
    if (data_02170354 == NULL) {
        return 0;
    }
    if (!(M2C_FIELD(data_02170354, s32 *, 0x668) & (1 << arg0))) {
        return 0;
    }
    return func_020856b8();
}
