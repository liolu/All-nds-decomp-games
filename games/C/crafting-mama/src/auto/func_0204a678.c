/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_020ab388;

void func_0204a678(void) {
    if (data_020ab388 != NULL) {
        M2C_FIELD(data_020ab388, s32 *, 0x10) = 1;
        data_020ab388                         = NULL;
    }
}
