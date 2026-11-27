/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206bbc4();                                /* extern */
s32 func_0206bc04();                                /* extern */

s32 func_0206bba4(void) {
    s32 temp_r4;

    temp_r4 = func_0206bc04();
    return (0x100 - temp_r4) - func_0206bbc4();
}
