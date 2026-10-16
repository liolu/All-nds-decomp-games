/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02045d78();                                /* extern */
s32 func_02045db8();                                /* extern */

s32 func_02045d58(void) {
    s32 temp_r4;

    temp_r4 = func_02045db8();
    return (0x100 - temp_r4) - func_02045d78();
}
