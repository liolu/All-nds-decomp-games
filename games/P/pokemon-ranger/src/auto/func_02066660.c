/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02066660(s32 arg0, s32 arg1) {
    *(s32 *) 0x04001014 = (arg0 & 0x1FF) | (0x01FF0000 & (arg1 << 0x10));
}
