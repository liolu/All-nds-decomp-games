/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020647a0(s32, void *, s32);            /* extern */

void func_02012728(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5) {
    M2C_FIELD(arg1, u8 *, 0) = (u8) ((M2C_FIELD(arg1, u8 *, 0) & ~0xF) | (arg2 & 0xF));
    M2C_FIELD(arg1, s8 *, 1) = (s8) arg5;
    func_020647a0(arg4, arg1 + 2, arg5 * 2);
    M2C_FIELD(arg1, u8 *, 0) = (u8) ((M2C_FIELD(arg1, u8 *, 0) & ~0xF0) | ((arg3 & 0xF) * 0x10));
}
