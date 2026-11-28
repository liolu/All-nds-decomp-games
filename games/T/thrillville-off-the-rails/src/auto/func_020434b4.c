#include "m2c.h"

extern M2C_UNK data_020efcb8;

void func_020434b4(void *arg0) {
    M2C_FIELD(&data_020efcb8, s32 *, 4)   = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&data_020efcb8, s32 *, 8)   = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&data_020efcb8, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 8);
}
