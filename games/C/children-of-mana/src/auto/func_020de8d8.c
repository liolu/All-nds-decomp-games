/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020de6e8(M2C_UNK, s32, M2C_UNK, s32);      /* extern */
M2C_UNK func_020de944(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32, s32); /* extern */

void func_020de8d8(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    u32 temp_r0;

    temp_r0 = arg4 - func_020de6e8(arg0, arg7, 1, arg6);
    func_020de944(arg0, arg1, arg2 + ((s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1), arg3, arg5, arg6, arg7);
}
