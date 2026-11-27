#include "m2c.h"

M2C_UNK func_0208df48(void *, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_020e6d9c;

void func_0209d598(void *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    func_0208df48((M2C_UNK *) ((s8 *) &data_020e6d9c + (M2C_FIELD(arg0, s32 *, 0) << 5)), M2C_FIELD(arg0, s32 *, 4), arg1,
                  arg2, arg3 - arg1, arg4 - arg2);
}
