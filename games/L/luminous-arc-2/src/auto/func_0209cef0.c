#include "m2c.h"

extern M2C_UNK data_021725b4;

void func_0209cef0(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    M2C_FIELD(&data_021725b4, M2C_UNK(**)(M2C_UNK, s32, s32), 4)(0, arg0 - 4, M2C_FIELD(arg0, s32 *, -4));
}
