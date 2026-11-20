/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204b478();                                /* extern */
s32 func_0204b438();                                /* extern */

s32 func_0204b418(void) {
    s32 temp_r4;

    temp_r4 = func_0204b478();
    return (0x100 - temp_r4) - func_0204b438();
}
