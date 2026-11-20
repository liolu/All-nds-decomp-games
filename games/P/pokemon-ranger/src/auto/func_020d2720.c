/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d254c();                                /* extern */
s32 func_020d2708();                                /* extern */

s32 func_020d2720(void) {
    if ((func_020d254c() != 0) && (func_020d2708() != 0)) {
        return 1;
    }
    return 0;
}
