/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020011a8();                                /* extern */
extern void *data_02157e10;

s32 func_02005ba4(void) {
    if ((M2C_FIELD(data_02157e10, u8 *, 4) != 0) && (func_020011a8() != 0)) {
        return 1;
    }
    return 0;
}
