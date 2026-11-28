/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0202ace0();                                /* extern */

u16 func_0202b3e0(void) {
    if (func_0202ace0() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
