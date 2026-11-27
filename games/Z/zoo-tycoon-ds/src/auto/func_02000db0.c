/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02000db0(s32 arg0, s32 arg1) {
    *(s32 *) 0x04000000 |= (arg0 << 0x18) | (arg1 << 0x1B);
}
