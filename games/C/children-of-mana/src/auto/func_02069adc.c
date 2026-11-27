/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02069c38(M2C_UNK, u16, M2C_UNK, s32, s32); /* extern */
void *func_02069f8c(M2C_UNK *, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_020f9cec;

void func_02069adc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    func_02069c38(arg0, M2C_FIELD(func_02069f8c(&data_020f9cec, arg2, arg3), u16 *, 4), arg1, arg4, arg5);
}
