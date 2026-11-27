/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02060d88();                                /* extern */

u16 func_02061398(void) {
    if (func_02060d88() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
