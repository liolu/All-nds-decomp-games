/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0205c168();                                /* extern */
s32 func_0205c13c();                                /* extern */

s32 func_0205c11c(void) {
    s32 temp_r4;

    temp_r4 = func_0205c168();
    return (0x100 - temp_r4) - func_0205c13c();
}
