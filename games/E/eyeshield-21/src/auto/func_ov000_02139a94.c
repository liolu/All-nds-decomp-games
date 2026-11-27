/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov000_02139a94(u8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *(s32 *) (arg0 + 0x4F0) |= 0x10;
    } else {
        *(s32 *) (arg0 + 0x4F0) &= ~0x10;
    }
}
