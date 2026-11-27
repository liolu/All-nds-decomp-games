/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov000_0213a2e8(u8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *(u32 *) (arg0 + 0x4F0) = *(u32 *) (arg0 + 0x4F0) | 1;
    } else {
        *(u32 *) (arg0 + 0x4F0) = *(u32 *) (arg0 + 0x4F0) & 0xFFFFFFFE;
    }
}
