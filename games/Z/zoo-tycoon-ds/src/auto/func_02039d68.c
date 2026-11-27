/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003e80(void *, M2C_UNK);             /* extern */

void func_02039d68(s32 arg0, s32 arg1, s32 arg2, void *arg3, u8 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg3, u16 *, 4) =
        (u16) ((M2C_FIELD(arg3, u16 *, 4) & ~0x3FF) | (0x3FF & (u16) (M2C_FIELD(arg3, u16 *, 0x10) + arg4)));
    M2C_FIELD(arg3, s32 *, 8)   = (s32) ((arg1 * arg7) + arg5);
    M2C_FIELD(arg3, s32 *, 0xC) = arg6;
    func_02003e80(arg3, 1);
}
