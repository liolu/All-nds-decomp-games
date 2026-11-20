#include "m2c.h"

extern void *data_02170354;

void func_0208571c(s32 arg0) {
    M2C_FIELD(data_02170354, s32 *, 0x28) = (s32) M2C_FIELD(data_02170354, s32 *, 0x24);
    M2C_FIELD(data_02170354, s32 *, 0x24) = arg0;
}
