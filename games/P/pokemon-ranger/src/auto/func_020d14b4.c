/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d0e2c();                                /* extern */

u16 func_020d14b4(void) {
    if (func_020d0e2c() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
