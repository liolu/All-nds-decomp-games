/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020d68c0(void *, s32);

void func_020d6b60(u8 *arg0, s16 arg1) {
    *(u32 *) (arg0 + 0xC)  = *(u32 *) (arg0 + 0xC) | 4;
    *(u32 *) (arg0 + 0x30) = *(u32 *) (arg0 + 8);
    *(u32 *) (arg0 + 0x38) = 0;
    *(u16 *) (arg0 + 0x36) = 0;
    *(s16 *) (arg0 + 0x34) = arg1;
    func_020d68c0(arg0, 2);
}
