/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02024c7c(s32);                           /* extern */

s32 func_02024c4c(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    return (temp_r4 * 0x18) + M2C_FIELD(func_02024c7c(M2C_FIELD(arg0, s32 *, 0)), s32 *, 8);
}
