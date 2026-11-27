#include "m2c.h"

extern M2C_UNK data_02129c70;

void func_020cd960(void *arg0) {
    M2C_FIELD(&data_02129c70, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&data_02129c70, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&data_02129c70, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
}
