/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02097640;

void func_02028f2c(void) {
    if (data_02097640 != NULL) {
        M2C_FIELD(data_02097640, s32 *, 0x20) = (s32) ((M2C_FIELD(data_02097640, s32 *, 0x20) & ~1) | 1);
    }
}
