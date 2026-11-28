/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02025cc8();                                /* extern */
s32 func_02025d08();                                /* extern */

s32 func_02025ca8(void) {
    s32 temp_r4;

    temp_r4 = func_02025d08();
    return (0x100 - temp_r4) - func_02025cc8();
}
