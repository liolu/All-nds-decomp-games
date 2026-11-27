/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020095dc();                            /* extern */

void func_02052af8(void *arg0) {
    s32 temp_r0;

    func_020095dc();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x220);
    if ((temp_r0 > 1) && (temp_r0 < 5)) {
        return;
    }
    if (temp_r0 == 1) {
        *(s32 *) 0x04000064 = 0x80330010;
        return;
    }
    *(M2C_UNK *) 0x04000064 = 0xC0330708;
}
