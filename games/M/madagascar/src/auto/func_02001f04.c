/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02001f24();                              /* extern */

s32 func_02001f04(s32 arg0) {
    return (arg0 * 0x60) + M2C_FIELD(func_02001f24(), s32 *, 8);
}
