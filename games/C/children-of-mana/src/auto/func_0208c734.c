/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8();       /* extern */

void func_0208c734(void *arg0) {
    func_02001cc8(arg0 + 0x84, 0, 0x200);
    M2C_FIELD(arg0, s32 *, 0x284) = (s32) (arg0 + 0x84);
    M2C_FIELD(arg0, s8 *, 0x288)  = 0;
}
