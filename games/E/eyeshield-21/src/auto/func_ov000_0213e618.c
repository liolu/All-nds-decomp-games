/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov000_0213e618(u8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *(s32 *) (arg0 + 0x6E8) |= 0x200000;
    } else {
        *(s32 *) (arg0 + 0x6E8) &= ~0x200000;
    }
}
