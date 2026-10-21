#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
M2C_UNK func_0205cfa8();                            /* extern */
void *func_0205e85c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK func_0202f664;

void func_0202f5dc(M2C_UNK arg0, M2C_UNK arg1, s16 arg2, s16 arg3, s32 arg4, void **arg5) {
    if (*arg5 == NULL) {
        M2C_FIELD(func_020291d0(&func_0202f664, 0x119), void ***, 0x1C) = arg5;
        *arg5                                                           = func_0205e85c(1, arg0, 0, arg1, 0);
    } else {
        func_0205cfa8();
    }
    M2C_FIELD(*arg5, s16 *, 8)   = arg2;
    M2C_FIELD(*arg5, s16 *, 0xA) = arg3;
    M2C_FIELD(*arg5, s16 *, 0xC) = (s16) arg4;
}
