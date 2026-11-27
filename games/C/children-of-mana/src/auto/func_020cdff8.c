/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020cda9c(s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
s32 func_020cdee8();                                /* extern */
extern M2C_UNK data_02129ca4;

void func_020cdff8(s32 arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 var_r0;

    var_r0 = func_0200f270(0x84, 0);
    if (var_r0 != 0) {
        var_r0 = func_020cdee8();
    }
    *((M2C_UNK *) ((s8 *) &data_02129ca4 + (arg0 * 4))) = var_r0;
    func_020cda9c(*((M2C_UNK *) ((s8 *) &data_02129ca4 + (arg0 * 4))), arg1, arg3, arg4, arg2, arg5, arg6, arg7);
}
