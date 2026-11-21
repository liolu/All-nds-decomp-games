#include "m2c.h"

M2C_UNK func_0209bbe0();                            /* extern */
extern M2C_UNK data_020d3cc4;

void func_0209af64(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)    = (s32) M2C_FIELD(&data_020d3cc4, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    func_0209bbe0();
}
