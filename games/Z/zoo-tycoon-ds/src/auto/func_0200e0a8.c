/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200176c();                            /* extern */
M2C_UNK func_020019e0(s32);                         /* extern */
M2C_UNK func_02001a70();                            /* extern */

void func_0200e0a8(s32 arg0, void *arg1) {
    func_0200176c();
    func_020019e0(M2C_FIELD(arg1, s32 *, 0x2843C));
    func_020019e0(M2C_FIELD(arg1, s32 *, 0x28440));
    func_020019e0(M2C_FIELD(arg1, s32 *, 0x28444));
    func_020019e0(M2C_FIELD(arg1, s32 *, 0x28448));
    func_020019e0(M2C_FIELD(arg1, s32 *, 0x2844C));
    func_020019e0(M2C_FIELD(arg1, s32 *, 0x28450));
    func_020019e0(M2C_FIELD(arg1, s32 *, 0x28454));
    func_02001a70();
    *(s16 *) 0x04000208 = 0;
    *(u16 *) 0x04000210 &= ~2;
    *(u16 *) 0x04000004 &= ~0x10;
    *(s16 *) 0x04000208 = 1;
    *(s32 *) 0x04001014 = 0;
    *(s32 *) 0x04001010 = 0;
}
