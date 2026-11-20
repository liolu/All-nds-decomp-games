/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204d294();                                /* extern */

u16 func_0204d734(void) {
    if (func_0204d294() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
