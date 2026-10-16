#include "m2c.h"

M2C_UNK func_0208dc90(void *, s32);                 /* extern */
M2C_UNK func_0209d598(void *, M2C_UNK, u8, u8, s32); /* extern */
extern M2C_UNK data_020e6d9c;

void func_0209d4dc(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3, u8 arg4, u8 arg5, u8 arg6) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    func_0208dc90((M2C_UNK *) ((s8 *) &data_020e6d9c + (arg1 << 5)), 0x2000 << arg2);
    func_0209d598(arg0, arg3, arg4, arg5, (s32) arg6);
}
