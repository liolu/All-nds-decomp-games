/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02065248();                                /* extern */
s32 func_02065274();                                /* extern */

s32 func_02065228(void) {
    s32 temp_r4;

    temp_r4 = func_02065274();
    return (0x100 - temp_r4) - func_02065248();
}
