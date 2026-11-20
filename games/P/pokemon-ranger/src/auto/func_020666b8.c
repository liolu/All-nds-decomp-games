/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020666b8(s32 arg0, s32 arg1) {
    *(s32 *) 0x0400101C = (arg0 & 0x1FF) | (0x01FF0000 & (arg1 << 0x10));
}
