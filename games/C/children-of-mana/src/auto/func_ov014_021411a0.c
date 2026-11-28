/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov014_021411a0(u8 *arg0) {
    *(s32 *) (arg0 + *(s32 *) (arg0 + 0x18414) * 0xC208 + 0xC204) = 0;
    *(s32 *) (arg0 + 0x18414)                                     = (*(s32 *) (arg0 + 0x18414) + 1) % 2;
}
