#include "m2c.h"

extern void *data_02170c7c;

s32 func_02090f2c(s32 arg0) {
    if (data_02170c7c == NULL) {
        return 0;
    }
    M2C_FIELD(data_02170c7c, s32 *, 0x604) = arg0;
    return 1;
}
